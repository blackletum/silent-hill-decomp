#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[13] = {
    // [0]
    {
        .completeFlag = EventFlag_476,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 6,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [1]
    {
        .requiredFlag = EventFlag_476,
        .completeFlag = EventFlag_471,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D0B64`
    },
    // [2]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 10,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 22,
    },
    // [3]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 1,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [4]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 2,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [5]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 3,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 4,
        .sfxPairIdx = SfxPairIdx_12,
        .mapIdx          = MapIdx_MAP3_S00,
    },
    // [6]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 4,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 3,
        .sfxPairIdx = SfxPairIdx_12,
        .mapIdx          = MapIdx_MAP3_S00,
    },
    // [7]
    {
        .completeFlag = EventFlag_472,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D1604`
    },
    // [8]
    {
        .requiredFlag = EventFlag_472,
        .completeFlag = EventFlag_473,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 6,
        .mapIdx            = MapIdx_MAP7_S01,
    },
    // [9]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 7,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 47,
    },
    // [10]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 8,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 48,
    },
    // [11]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 9,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 48,
    },
    // [12]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
