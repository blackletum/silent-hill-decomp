#include "game.h"
#include "inline_no_dmpsx.h"

#include <psyq/gtemac.h>
#include <psyq/libapi.h>
#include <psyq/strings.h>

#include "bodyprog/bodyprog.h"
#include "bodyprog/collision/collision.h"
#include "bodyprog/math/math.h"
#include "bodyprog/item_screens.h"
#include "bodyprog/player.h"
#include "bodyprog/screen/screen_data.h"
#include "bodyprog/screen/screen_draw.h"
#include "bodyprog/sound/sound_system.h"
#include "main/rng.h"

#define DEFAULT_TRIGGER_HEIGHT (SHRT_MIN * 2)

/** @brief Computes a trigger height from half-meter height steps.
 *
 * @note The trigger height has a default offset of `Q12(-1.5f)`.
 *
 * @param steps Half-meter height steps.
 * @return Trigger height (Q19.12).
 */
#define TRIGGER_HEIGHT_GET(steps) \
    ((-Q12(steps) >> 1) - Q12(1.5f))

void Collision_TriggerQuery(q19_12* result, q19_12 posX, q19_12 posZ, q19_12 offsetX, q19_12 offsetZ) // 0x8006F250
{
    s32                          i;
    s_CollisionTriggerIntersect* intersect;

    intersect = PSX_SCRATCH;

    // Initialize line intersection.
    Collision_TriggerIntersectInit(intersect, posX, posZ, offsetX, offsetZ);

    // Collide active triggers.
    for (i = 0; i < g_ActiveCollisionTriggers.collisionTriggerCount; i++)
    {
        if (Collision_TriggerIntersectGet(intersect, g_ActiveCollisionTriggers.collisionTriggers[i]))
        {
            break;
        }
    }

    // Set result.
    if (intersect->intersectAlpha == Q12(1.0f))
    {
        result[0] = Q12(32.0f);
        result[1] = Q12(DEFAULT_CEILING_HEIGHT);
    }
    else
    {
        result[0] = Math_MulFixed(Vc_VectorMagnitudeCalc(intersect->offsetX, Q12(0.0f), intersect->offsetZ),
                                  intersect->intersectAlpha,
                                  Q12_SHIFT);
        result[1] = intersect->triggerHeight;
    }
}

void Collision_TriggerIntersectInit(s_CollisionTriggerIntersect* intersect,
                                    q19_12 posX, q19_12 posZ, q19_12 offsetX, q19_12 offsetZ) // 0x8006F338
{
    q19_12 newPosX;
    q19_12 startZ;

    newPosX = posX + offsetX;

    intersect->startX         = posX;
    intersect->startZ         = posZ;
    intersect->offsetX        = offsetX;
    intersect->endX           = posX + offsetX;
    intersect->intersectAlpha = Q12(1.0f);
    intersect->triggerHeight  = DEFAULT_TRIGGER_HEIGHT;
    intersect->offsetZ        = offsetZ;
    intersect->endZ           = posZ + offsetZ;

    if (newPosX >= intersect->startX)
    {
        intersect->aabbMinX = intersect->startX;
        intersect->aabbMaxX = intersect->endX;
    }
    else
    {
        intersect->aabbMinX = posX + offsetX;
        intersect->aabbMaxX = intersect->startX;
    }

    startZ = intersect->startZ;
    if (intersect->endZ >= intersect->startZ)
    {
        intersect->aabbMinZ = startZ;
        intersect->aabbMaxZ = intersect->endZ;
        return;
    }
    else
    {
        intersect->aabbMinZ = intersect->endZ;
        intersect->aabbMaxZ = intersect->startZ;
    }
}

bool Collision_TriggerIntersectGet(s_CollisionTriggerIntersect* intersect, const s_CollisionTrigger* trigger) // 0x8006F3C4
{
    q19_12 intersectAlphaX;
    q19_12 intersectAlpha;
    q19_12 aabbMinX;
    q19_12 aabbMaxX;
    q19_12 aabbMinZ;
    q19_12 aabbMaxZ;
    q19_12 var_s1;
    q19_12 intersectAlphaZ;
    q19_12 var_v0_2;

    // Define AABB bounds.
    aabbMinX = Q12(trigger->positionX);
    aabbMaxX = Q12(trigger->positionX + trigger->sizeX);
    aabbMinZ = Q12(trigger->positionZ);
    aabbMaxZ = Q12(trigger->positionZ + trigger->sizeZ);

    // Check for AABB intersection.
    if ((aabbMinX >= intersect->aabbMaxX || intersect->aabbMinX >= aabbMaxX) &&
        (aabbMinZ >= intersect->aabbMaxZ || intersect->aabbMinZ >= aabbMaxZ))
    {
        return false;
    }

    if (intersect->startX >= aabbMinX && aabbMaxX >= intersect->startX &&
        intersect->startZ >= aabbMinZ && aabbMaxZ >= intersect->startZ)
    {
        intersect->intersectAlpha = Q12(0.0f);
        intersect->triggerHeight  = TRIGGER_HEIGHT_GET(trigger->height);
    }
    else
    {
        if (intersect->offsetX >= Q12(0.0f))
        {
            if (intersect->offsetZ >= Q12(0.0f))
            {
                var_s1   = aabbMinX;
                var_v0_2 = aabbMinZ;
            }
            else
            {
                var_s1   = aabbMinX;
                var_v0_2 = aabbMaxZ;
            }
        }
        else
        {
            if (intersect->offsetZ >= Q12(0.0f))
            {
                var_s1   = aabbMaxX;
                var_v0_2 = aabbMinZ;
            }
            else
            {
                var_s1   = aabbMaxX;
                var_v0_2 = aabbMaxZ;
            }
        }

        // TODO: What are these shifts? Q12 division (x / Q12(16.0f))?
        intersectAlphaX = Vw_LineSegmentIntersectionCheck(Q12(intersect->offsetX) >> 16,
                                                          Q12(intersect->offsetZ) >> 16, Q12(var_v0_2 - intersect->startZ) >> 16,
                                                          Q12(aabbMinX - intersect->startX) >> 16, Q12(aabbMaxX - intersect->startX) >> 16);
        intersectAlphaZ = Vw_LineSegmentIntersectionCheck(Q12(intersect->offsetZ) >> 16,
                                                          Q12(intersect->offsetX) >> 16, Q12(var_s1 - intersect->startX) >> 16,
                                                          Q12(aabbMinZ - intersect->startZ) >> 16, Q12(aabbMaxZ - intersect->startZ) >> 16);

        if (intersectAlphaX <= intersectAlphaZ)
        {
            intersectAlpha = intersectAlphaX;
        }
        else
        {
            intersectAlpha = intersectAlphaZ;
        }

        // Set intersection if new trigger is closer.
        if (intersectAlpha < intersect->intersectAlpha)
        {
            intersect->intersectAlpha = intersectAlpha;
            intersect->triggerHeight  = TRIGGER_HEIGHT_GET(trigger->height);
        }
    }

    return intersect->intersectAlpha == Q12(0.0f);
}

q19_12 Collision_TriggerCeilingHeightGet(VECTOR3* moveOffset,
                                         const s_CollisionCylinder* cylinder, q19_12 cylinderRadius, q19_12 cylinderHeight) // 0x8006F620
{
    q19_12                    projOffsetToTriggerX;
    q19_12                    projOffsetToTriggerZ;
    q19_12                    offsetToTriggerX;
    q19_12                    offsetToTriggerZ;
    q19_12                    cylinderTop;
    q19_12                    projCylinderTop;
    q19_12                    pushOffsetX;
    q19_12                    pushOffsetZ;
    q19_12                    cylinderTopToCeilDist;
    q19_12                    triggerHeight;
    q19_12                    distToTrigger;
    q19_12                    pushDist;
    q19_12                    projDistToTrigger;
    q19_12                    angleToTrigger;
    q19_12                    allowedIntersectDist;
    s32                       i;
    q19_12                    moveOffsetX;
    q19_12                    moveOffsetZ;
    q19_12                    ceilHeight;
    q19_12                    headroom;
    const s_CollisionTrigger* curTrigger;

    ceilHeight  = Q12(DEFAULT_CEILING_HEIGHT);
    pushOffsetX = Q12(0.0f);
    pushOffsetZ = Q12(0.0f);

    // Compute start parameters.
    moveOffsetX     = moveOffset->vx;
    moveOffsetZ     = moveOffset->vz;
    cylinderTop     = cylinder->position.vy + cylinderHeight;
    projCylinderTop = cylinderTop + moveOffset->vy;

    // Run through triggers.
    for (i = 0; i < g_ActiveCollisionTriggers.collisionTriggerCount; i++)
    {
        curTrigger = g_ActiveCollisionTriggers.collisionTriggers[i];

        // Check if trigger overhead is avoided.
        triggerHeight = TRIGGER_HEIGHT_GET(curTrigger->height);
        if ((projCylinderTop - triggerHeight) >= Q12(0.0f))
        {
            continue;
        }

        // Check rough cylinder-trigger collision at projected position.
        Collision_TriggerOffsetGet(&projOffsetToTriggerX, &projOffsetToTriggerZ,
                                   cylinder->position.vx + moveOffsetX, cylinder->position.vz + moveOffsetZ,
                                   curTrigger);
        if (MAX(ABS(projOffsetToTriggerX), ABS(projOffsetToTriggerZ)) >= cylinderRadius)
        {
            continue;
        }

        // Check accurate cylinder-trigger collision at projected position.
        projDistToTrigger = Vc_VectorMagnitudeCalc(projOffsetToTriggerX, Q12(0.0f), projOffsetToTriggerZ);
        if (projDistToTrigger >= cylinderRadius)
        {
            continue;
        }

        // Handle horizontal edge rejection.
        if (projDistToTrigger > Q12(0.0f))
        {
            Collision_TriggerOffsetGet(&offsetToTriggerX, &offsetToTriggerZ,
                                       cylinder->position.vx, cylinder->position.vz,
                                       curTrigger);

            // Compute allowed intersection depth.
            allowedIntersectDist = INTERSECTION_BUFFER;
            distToTrigger        = Vc_VectorMagnitudeCalc(offsetToTriggerX, Q12(0.0f), offsetToTriggerZ);
            if ((cylinderRadius - distToTrigger) <= INTERSECTION_BUFFER)
            {
                allowedIntersectDist = cylinderRadius - distToTrigger;
            }

            // Check for projected intersection.
            if ((projDistToTrigger - distToTrigger) < allowedIntersectDist)
            {
                // Compute push distance away from trigger.
                angleToTrigger = ratan2(projOffsetToTriggerX, projOffsetToTriggerZ);
                pushDist       = allowedIntersectDist - (projDistToTrigger - distToTrigger);

                // Compute push offset.
                pushOffsetX = Math_MulFixed(pushDist, Math_Sin(angleToTrigger), Q12_SHIFT);
                pushOffsetZ = Math_MulFixed(pushDist, Math_Cos(angleToTrigger), Q12_SHIFT);
            }
        }
        // Handle predictive ceiling rejection.
        else
        {
            // Track lowest ceiling.
            if (triggerHeight < ceilHeight)
            {
                ceilHeight = triggerHeight;
            }

            // Reset move offset.
            moveOffsetX = moveOffset->vx;
            moveOffsetZ = moveOffset->vz;
            break;
        }

        // Apply push offset.
        moveOffsetX += pushOffsetX;
        moveOffsetZ += pushOffsetZ;
    }

    // Update movement offset.
    moveOffset->vx = moveOffsetX;
    moveOffset->vz = moveOffsetZ;

    // Restrict vertical movement.
    if (ceilHeight != Q12(DEFAULT_CEILING_HEIGHT))
    {
        // Compute headroom.
        headroom              = INTERSECTION_BUFFER;
        cylinderTopToCeilDist = ceilHeight - cylinderTop;
        if (cylinderTopToCeilDist < INTERSECTION_BUFFER)
        {
            headroom = cylinderTopToCeilDist;
        }

        // Clamp movement to ceiling.
        if (moveOffset->vy < headroom)
        {
            moveOffset->vy = headroom;
        }
    }

    return ceilHeight;
}

void Collision_TriggerOffsetGet(q19_12* offsetX, q19_12* offsetZ, q19_12 posX, q19_12 posZ,
                                const s_CollisionTrigger* trigger) // 0x8006F8FC
{
    q19_12 minX;
    q19_12 maxX;
    q19_12 minZ;
    q19_12 maxZ;

    // Define AABB bounds.
    minX = FP_TO(trigger->positionX, Q12_SHIFT);
    maxX = FP_TO(trigger->positionX + trigger->sizeX, Q12_SHIFT);
    minZ = FP_TO(trigger->positionZ, Q12_SHIFT);
    maxZ = FP_TO(trigger->positionZ + trigger->sizeZ, Q12_SHIFT);

    if (posX < minX)
    {
        *offsetX = posX - minX;
    }
    else if (maxX >= posX)
    {
        *offsetX = Q12(0.0f);
    }
    else
    {
        *offsetX = posX - maxX;
    }

    if (posZ < minZ)
    {
        *offsetZ = posZ - minZ;
        return;
    }
    else if (maxZ >= posZ)
    {
        *offsetZ = Q12(0.0f);
        return;
    }
    else
    {
        *offsetZ = posZ - maxZ;
        return;
    }
}
