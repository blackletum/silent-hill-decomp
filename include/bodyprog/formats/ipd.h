#ifndef _BODYPROG_FORMATS_IPD_H
#define _BODYPROG_FORMATS_IPD_H

#include "bodyprog/formats/lm.h"
#include "bodyprog/formats/model.h"

/** @brief GLOSSARY OF TERMS
 *
 * Chunk:    40x40 cell or 5x5 subchunk area. 1 per IPD file.
 * Subchunk: 8x8 cell area. 25 per chunk.
 * Cell:     1x1 collision unit.
 * Surface:  Cell split containing fine-grained collision attributes. 2 per cell.
 */

#define IPD_HEADER_MAGIC 20

#define CHUNK_SIZE    40.0f /** 40x40 meters. */
#define SUBCHUNK_SIZE 8.0f  /** 8x8 meters. */

/** @brief Collision trigger flags. Pplied per cell. */
typedef enum _CollisionTriggerFlags
{
    CollisionTriggerFlag_None    = 0,
    CollisionTriggerFlag_Map     = 1 << 0,
    CollisionTriggerFlag_Objects = 1 << 1,
    CollisionTriggerFlag_Block   = 1 << 2, /** Blocks select passages, e.g. the gate to the Split Head boss elevator. */
    CollisionTriggerFlag_3       = 1 << 3, /** @unused Secondary block? Only ever called in `MAP6_S05`. */
    CollisionTriggerFlag_All     = 0xFFFF
} e_CollisionTriggerFlags;

/** @brief Floor material types. TODO: SH2 suggests "material"? */
typedef enum _FloorType
{
    FloorType_Default = 0,
    FloorType_1       = 1,  // Uses concrete sound.
    FloorType_2       = 2,
    FloorType_Grass   = 3,
    FloorType_4       = 4,
    FloorType_5       = 5,
    FloorType_6       = 6,  // Uses metal sound.
    FloorType_7       = 7,  // Uses concrete sound.
    FloorType_8       = 8,
    FloorType_9       = 9,
    FloorType_10      = 10, // Uses metal sound.
    FloorType_11      = 11, // Uses metal sound.
    FloorType_None    = 12
} e_FloorType;

/** @brief IPD collision cell surface split. */
typedef struct _IpdCellSurface
{
    /* 0x0    */ q7_8 positionX;          // Relative X.
    /* 0x2    */ q7_8 baseFloorHeight;    // Base floor height with slope unaccounted for?
    /* 0x4    */ q7_8 positionZ;          // Relative Z.
    /* 0x6+0  */ u16  floorType      : 5; /** `e_FloorType` */
    /* 0x6+5  */ u16  disableHeight  : 3; /** `bool` */
    /* 0x6+8  */ u16  field_6_8      : 3; // Some slot index. Causes special collision triggers to behave differently.
                                          // The properties should be based upon a value set at
                                          // `s_CollisionState::field_A0::s_0::field_8` and it shouldn't
                                          // be bigger than 3.
                                          // Side note: Maybe the bits number is incorrect as in reality
                                          // it gives values up to 7 when it should have been `2` as it would
                                          // only ever give a value up to 4, but some dev didn't paid attention
                                          // and assigned 3 instead.
    /* 0x6+11 */ u16  triggerFlagIdx : 4; /** `e_CollisionTriggerFlags` index. */
    /* 0x8    */ q7_8 tiltAngleX;
    /* 0xA    */ q7_8 tiltAngleZ;
} s_IpdCellSurface;
STATIC_ASSERT_SIZEOF(s_IpdCellSurface, 12);

// TODO: Confusing "grid cells" with "collision geometry data items", so this name might be wrong.
/** @brief IPD collision cell with two cell surfaces. */
typedef struct _IpdCell
{
    /* 0x0+0  */ q7_8 offsetX          : 14;
    /* 0x0+14 */ u16  triggerFlagsLow  : 2; /** Combined with `triggerFlagsHigh` for complete field. */
    /* 0x2+0  */ q7_8 offsetY          : 14;
    /* 0x2+14 */ u16  triggerFlagsHigh : 2; /** Combined with `triggerFlagsLow` for complete field. */
    /* 0x4    */ q7_8 offsetZ;
    /* 0x6    */ u8   splitVertexIdx0; // `s_IpdCollisionData::cellSplitVertices` index.
    /* 0x7    */ u8   splitVertexIdx1; // `s_IpdCollisionData::cellSplitVertices` index.
    /* 0x8    */ u8   surfaceIdx0;     // `s_IpdCollisionData::cellSurfaces` index.
    /* 0x9    */ u8   surfaceIdx1;     // `s_IpdCollisionData::cellSurfaces` index.
} s_IpdCell;
STATIC_ASSERT_SIZEOF(s_IpdCell, 10);

/** @brief IPD collision cell attributes. TODO: Name uncertain. */
typedef struct _IpdCellAttribs
{
    /* 0x0+0  */ u16      floorType      : 5; /** `e_FloorType` */
    /* 0x0+5  */ u16      disableHeight  : 3; /** `bool` */
    /* 0x0+8  */ u16      triggerFlagIdx : 4; /** `e_CollisionTriggerFlags` index. */
    /* 0x0+12 */ u16      field_0_12     : 3; // Unused?
    /* 0x0+15 */ u16      field_0_15     : 1; // `bool` | Unused?
    /* 0x2    */ SVECTOR3 offset;             /** Q7.8 */
    /* 0x8    */ q7_8     radiusOffset;
} s_IpdCellAttribs;
STATIC_ASSERT_SIZEOF(s_IpdCellAttribs, 10);

typedef struct _CellRange
{
    /* 0x0 */ s16 cellLutIdx;    /** Index into `s_IpdCollisionData::cellLut`.  */
    /* 0x2 */ s16 surfaceLutIdx; /** Index into `s_IpdCollisionData::surfaceLut`.  */
} s_CellRange;
STATIC_ASSERT_SIZEOF(s_CellRange, 4);

/** @brief IPD collision data. */
typedef struct _IpdCollisionData
{
    /* 0x0    */ q23_8             positionX;
    /* 0x4    */ q23_8             positionZ;
    /* 0x8+0  */ u32               cellSplitVertexCount : 8; /** `cellSplitVertices` size. */
    /* 0x8+8  */ u32               cellSurfaceCount     : 8; /** `cellSurfaces` size. */
    /* 0x8+16 */ u32               cellCount            : 8; /** `cells` size. */
    /* 0x8+24 */ u32               cellAttribsCount     : 8; /** `cellAttribs` size. */
    /* 0xC    */ SVECTOR3*         cellSplitVertices;        /** Q7.8 | Pairs define a cell line split. */
    /* 0x10   */ s_IpdCellSurface* cellSurfaces;             /** Unique tangible collision cell surfaces. */
    /* 0x14   */ s_IpdCell*        cells;                    /** Unique tangible collision cells. NOT 1 per grid cell??? */
    /* 0x18   */ s_IpdCellAttribs* cellAttribs;              /** Collision cell attributes. */
    /* 0x1C   */ q7_8              cellSize;                 /** `Q8(2.0f)` in most IPD files, sometimes `Q8(0.0f)`. */
    /* 0x1E   */ u8                cellCountX;               /** 20 in most IPD files, sometimes 0. */
    /* 0x1F   */ u8                cellCountZ;               /** 20 in most IPD files, sometimes 0. */
    /* 0x20   */ s_CellRange*      cellRanges;               /** TODO: There's a difference between "grid cells" and "collision cells"? Very confusing.
                                                              * Level grid cells contain multiple collision cells/geom items. Terms used seem very wrong.
                                                              */
    /* 0x24   */ u16               cellLutSize;
    /* 0x26   */ u16               surfaceLutSize;
    /* 0x28   */ u8*               cellLut;                  /** Indices into `cells` and `cellCheckIdxBuffer`. */
    /* 0x2C   */ u8*               surfaceLut;               /** Indices into `cellSurfaces`. */
    /* 0x30   */ u8                cellCheckCount;
    /* 0x31   */ s8                __pad_31[3];
    /* 0x34   */ u8                cellCheckIdxBuffer[256]; // Cell indices, unkown purpose. Contains `s_IpdCollisionData::cellCount` valid entries.
} s_IpdCollisionData;
STATIC_ASSERT_SIZEOF(s_IpdCollisionData, 308);

/** @brief IPD model info. */
typedef struct _IpdModelInfo
{
    /* 0x0 */ u8             isGlobalPlm; // `false` if loaded from inside `IPD`, `true` if loaded from `*_GLB.PLM`.
    /* 0x1 */ s8             __pad_1[3];
    /* 0x4 */ u_Filename     name;
    /* 0xC */ s_ModelHeader* modelHdr;
} s_IpdModelInfo;
STATIC_ASSERT_SIZEOF(s_IpdModelInfo, 16);

/** @brief IPD transformed model instance. TODO: Unsure. */
typedef struct _IpdModelInstance
{
    /* 0x0 */ s_ModelHeader* modelHdr; // TODO: Stores index at first before being updated to functional pointer.
    /* 0x4 */ MATRIX         mat;      // TODO: Base transform matrix?
} s_IpdModelInstance;
STATIC_ASSERT_SIZEOF(s_IpdModelInstance, 36);

// TODO: Name uncertain.
typedef struct _SubchunkRange
{
    /* 0x0 */ q7_8 minX;
    /* 0x2 */ q7_8 maxX;
    /* 0x4 */ q7_8 minZ;
    /* 0x6 */ q7_8 maxZ;
} s_SubchunkRange;

/** @brief IPD model buffer. */
typedef struct _IpdModelBuffer
{
    /* 0x0  */ u8                  modelInstanceCount; /** `modelInstances` size. */
    /* 0x1  */ u8                  field_1;
    /* 0x2  */ u8                  cellCount;
    /* 0x3  */ s8                  __pad_3;
    /* 0x4  */ q7_8                minX; // } `s_SubchunkRange`?
    /* 0x6  */ q7_8                maxX; // }
    /* 0x8  */ q7_8                minZ; // }
    /* 0xA  */ q7_8                maxZ; // }
    /* 0xC  */ s_IpdModelInstance* modelInstances;
    /* 0x10 */ SVECTOR*            field_10;       // Q7.8 | Pointer to unknown collision data. `s_SubchunkRange`?
    /* 0x14 */ s_SubchunkRange*    subchunkRanges; // TODO: Not sure about name.
} s_IpdModelBuffer;
STATIC_ASSERT_SIZEOF(s_IpdModelBuffer, 24);

/** @brief IPD header. */
typedef struct _IpdHeader
{
    /* 0x0  */ u8                 magic;
    /* 0x1  */ u8                 isLoaded; /** `bool` */
    /* 0x3  */ s8                 chunkX;
    /* 0x3  */ s8                 chunkZ;
    /* 0x4  */ s_LmHeader*        lmHdr;
    /* 0x8  */ u8                 modelCount;
    /* 0x9  */ u8                 modelBufferCount;
    /* 0xA  */ u8                 modelOrderCount;
    /* 0xB  */ s8                 __pad_B[9];
    /* 0x14 */ s_IpdModelInfo*    modelInfos;
    /* 0x18 */ s_IpdModelBuffer*  modelBuffers;
    /* 0x1C */ u8                 textureCount; // TODO: Should it be `u32`? Referenced once, likely not texture count.
                                                // "`u8` - Relative pointer to textures list"
                                                // "`u32` - Relative pointer to object order"
    /* 0x1D */ s8                 unk_1D[51];   // TODO: Actual texture data array?
    /* 0x50 */ u8*                modelOrderList;
    /* 0x54 */ s_IpdCollisionData collisionData;
} s_IpdHeader;

#endif
