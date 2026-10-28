#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[21] = {
    // [0]
    {
        .requiredFlag = EventFlag_337,
        .completeFlag = EventFlag_338,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D1910`
    },
    // [1]
    {
        .requiredFlag = EventFlag_338,
        .completeFlag = EventFlag_308,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 11,
        .mapIdx            = MapIdx_MAP4_S01,
    },
    // [2]
    {
        .requiredFlag = EventFlag_339,
        .completeFlag = EventFlag_340,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D23E4`
    },
    // [3]
    {
        .requiredFlag = EventFlag_340,
        .completeFlag = EventFlag_341,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 1,
    },
    // [4]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 10,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 10,
    },
    // [5]
    {
        .completeFlag = EventFlag_MapMark_AltHospital1F_WomensBathroomBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 8,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [6]
    {
        .completeFlag = EventFlag_MapMark_AltHospital1F_WomensBathroomBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [7]
    {
        .completeFlag = EventFlag_1472,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [8]
    {
        .completeFlag = EventFlag_339,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 1,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 6,
        .sfxPairIdx        = SfxPairIdx_20,
    },
    // [9]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 6,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 1,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [10]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 1,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 6,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [11]
    {
        .requiredFlag = EventFlag_340,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 9,
        .sfxPairIdx        = SfxPairIdx_2,
        .mapIdx            = MapIdx_MAP4_S05,
    },
    // [12]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 2,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 9,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP4_S02,
    },
    // [13]
    {
        .completeFlag = EventFlag_MapMark_AltHospital1F_StairsArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [14]
    {
        .completeFlag = EventFlag_1476,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [15]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 12,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 80,
    },
    // [16]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 13,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 80,
    },
    // [17]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 14,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 80,
    },
    // [18]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 15,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 80,
    },
    // [19]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 16,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 81,
    },
    // [20]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
