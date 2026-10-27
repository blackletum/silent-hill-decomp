#ifndef _BODYPROG_COLLISION_TRIGGER_H
#define _BODYPROG_COLLISION_TRIGGER_H

// TODO: Probably doesn't belong in this header.
/** @brief Collision cylinder with a character collision state. */
typedef struct _CollisionCylinder
{
    /* 0x0  */ VECTOR3 position; /** Q19.12 */
    /* 0xC  */ q3_12   bottom;
    /* 0xE  */ q3_12   top;
    /* 0x10 */ q3_12   radius;
    /* 0x14 */ s8      collisionState; /** `e_CharaCollisionState` */
} s_CollisionCylinder;
STATIC_ASSERT_SIZEOF(s_CollisionCylinder, 20);

/** @brief Collision trigger line intersection. */
typedef struct _CollisionTriggerIntersect
{
    /* 0x0  */ q19_12 startX;         /** } Line start. */
    /* 0x4  */ q19_12 startZ;         /** } */
    /* 0x8  */ q19_12 endX;           /** } Line end (start + offset). */
    /* 0xC  */ q19_12 endZ;           /** } */
    /* 0x10 */ q19_12 offsetX;        /** } Offset from start to end. */
    /* 0x14 */ q19_12 offsetZ;        /** } */
    /* 0x18 */ q19_12 aabbMinX;       /** } AABB encompassing the line. */
    /* 0x1C */ q19_12 aabbMaxX;       /** } */
    /* 0x20 */ q19_12 aabbMinZ;       /** } */
    /* 0x24 */ q19_12 aabbMaxZ;       /** } */
    /* 0x28 */ q19_12 intersectAlpha; /** Intersection alpha along the line with a collided trigger. */
    /* 0x2C */ q19_12 triggerHeight;  /** Collided trigger height. */
} s_CollisionTriggerIntersect;

/** @brief World-space collision trigger used to inform uneven terrain such as walls and stairs. */
typedef struct _CollisionTrigger
{
    /* 0x0+0  */ u8  isEndOfArray : 1;  /** `bool` | Marks last entry. */
    /* 0x0+1  */ s32 positionX    : 10; /** Meter steps. */
    /* 0x0+11 */ s32 positionZ    : 10; /** Meter steps. */
    /* 0x0+21 */ u32 sizeX        : 4;  /** Meter steps. */
    /* 0x0+25 */ u32 sizeZ        : 4;  /** Meter steps. */
    /* 0x0+29 */ u32 height       : 3;  /** Half-meter steps. Used to set `s_CollisionTriggerIntersect::field_2C` which is then copied by `Collision_TriggerQuery`. */
} s_CollisionTrigger;
STATIC_ASSERT_SIZEOF(s_CollisionTrigger, 4);

/** @brief Collection of nearby collision triggers. */
typedef struct _ActiveCollisionTriggers
{
    /* 0x0 */ u16                       flags;                 /** `e_CollisionTriggerFlags` */
    /* 0x2 */ u8                        collisionTriggerCount; /** `collisionTrigger` array size. */
    /* 0x4 */ const s_CollisionTrigger* collisionTriggers[20]; // TODO: Guessed size.
} s_ActiveCollisionTriggers;

/** @brief Queries a line intersection with the first collided active collision trigger.
 *
 * @param result Output [0]: movement distance from the collided trigger and [1]: trigger height.
 * @param posX Start line position X.
 * @param posZ Start line position Z.
 * @param offsetX Line end offset from start position X.
 * @param offsetZ Line end offset from start position Z.
 */
void Collision_TriggerQuery(q19_12* result, q19_12 posX, q19_12 posZ, q19_12 offsetX, q19_12 offsetZ);

/** @brief Initializes a collision trigger line intersection.
 *
 * @param intersect Line intersection to initialize.
 * @param posX Start line position X.
 * @param posZ Start line position Z.
 * @param offsetX Line end offset from start X.
 * @param offsetZ Line end offset from start Z.
 */
void Collision_TriggerIntersectInit(s_CollisionTriggerIntersect* intersect,
                                    q19_12 posX, q19_12 posZ, q19_12 offsetX, q19_12 offsetZ);

/** @brief Stores a line-trigger intersection, storing the trigger height.
 *
 * @param intersect Line intersection to check.
 * @param trigger Trigger to check for intersection.
 * @return `true` if an intersection was made, `false` otherwise.
 */
bool Collision_TriggerIntersectGet(s_CollisionTriggerIntersect* intersect, const s_CollisionTrigger* trigger);

/** @brief Gets the ceiling height, derived from active collision triggers.
 *
 * @param moveOffset Movement offset.
 * @param cylinder Collision cylinder.
 * @param cylinderRadius Cylinder radius.
 * @param cylinderHeight Cylinder height.
 * @return Trigger ceiling height, or `DEFAULT_CEILING_HEIGHT` if no ceiling exists.
 */
q19_12 Collision_TriggerCeilingHeightGet(VECTOR3* moveOffset,
                                         const s_CollisionCylinder* cylinder, q19_12 cylinderRadius, q19_12 cylinderHeight);

/** @brief Gets the offset from a world position to the edge of a collision trigger.
 * If the position is inside the trigger, the offset is (0, 0).
 *
 * @param offsetX Output offset X.
 * @param offsetZ Output offset Z.
 * @param posX Reference position X.
 * @param posZ Reference position Z.
 * @param trigger Reference collision trigger.
 */
void Collision_TriggerOffsetGet(q19_12* offsetX, q19_12* offsetZ, q19_12 posX, q19_12 posZ,
                                const s_CollisionTrigger* trigger);

#endif
