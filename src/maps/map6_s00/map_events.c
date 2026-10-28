#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[24] = {
    // [0]
    {
        .completeFlag = EventFlag_M6S00_HealthDrink,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 22,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M6S00_ShotgunShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 23,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M6S00_FirstAidKit,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 24,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_402,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800EB11C`
    },
    // [4]
    {
        .requiredFlag = EventFlag_402,
        .completeFlag = EventFlag_403,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 2,
    },
    // [5]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 3,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 4,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP6_S01,
    },
    // [6]
    {
        .requiredFlag = EventFlag_410,
        .completeFlag = EventFlag_425,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 17,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 6,
        .mapIdx            = MapIdx_MAP6_S01,
    },
    // [7]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 5,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 6,
        .sfxPairIdx = SfxPairIdx_9,
        .mapIdx          = MapIdx_MAP6_S01,
    },
    // [8]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 7,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 8,
        .sfxPairIdx = SfxPairIdx_15,
        .mapIdx          = MapIdx_MAP6_S02,
    },
    // [9]
    {
        .requiredFlag = EventFlag_426,
        .completeFlag = EventFlag_411,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 24,
    },
    // [10]
    {
        .requiredFlag = EventFlag_424,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 24,
    },
    // [11]
    {
        .requiredFlag = EventFlag_426,
        .completeFlag = EventFlag_411,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 24,
    },
    // [12]
    {
        .requiredFlag = EventFlag_424,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 24,
    },
    // [13]
    {
        .requiredFlag = EventFlag_426,
        .completeFlag = EventFlag_411,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 24,
    },
    // [14]
    {
        .requiredFlag = EventFlag_424,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 24,
    },
    // [15]
    {
        .requiredFlag = EventFlag_426,
        .completeFlag = EventFlag_411,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 24,
    },
    // [16]
    {
        .requiredFlag = EventFlag_424,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 24,
    },
    // [17]
    {
        .requiredFlag = EventFlag_411,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 11,
        .mapIdx            = MapIdx_MAP6_S03,
    },
    // [18]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 16,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 26,
    },
    // [19]
    {
        .completeFlag = EventFlag_MapMark_ResortTown_EastGarageRightCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 18,
        .sysState          = SysState_EventSetFlag,
    },
    // [20]
    {
        .completeFlag = EventFlag_MapMark_ResortTown_EastGarageBotCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 19,
        .sysState          = SysState_EventSetFlag,
    },
    // [21]
    {
        .completeFlag = EventFlag_MapMark_ResortTown_SandfordStLeftBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 20,
        .sysState          = SysState_EventSetFlag,
    },
    // [22]
    {
        .completeFlag = EventFlag_MapMark_ResortTown_SandfordStRightCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 21,
        .sysState          = SysState_EventSetFlag,
    },
    // [23]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
