#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[25] = {
    // [0]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 10,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 9,
        .sfxPairIdx = SfxPairIdx_1,
        .mapIdx          = MapIdx_MAP2_S02,
    },
    // [1]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 11,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 9,
        .sfxPairIdx = SfxPairIdx_12,
        .mapIdx          = MapIdx_MAP4_S02,
    },
    // [2]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 12,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 15,
    },
    // [3]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 13,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 15,
    },
    // [4]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 21,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 15,
    },
    // [5]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 22,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 15,
    },
    // [6]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 23,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 15,
    },
    // [7]
    {
        .completeFlag = EventFlag_302,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D1FF0`
    },
    // [8]
    {
        .completeFlag = EventFlag_302,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D1FF0`
    },
    // [9]
    {
        .requiredFlag = EventFlag_302,
        .completeFlag = EventFlag_303,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D2408`
    },
    // [10]
    {
        .requiredFlag = EventFlag_303,
        .completeFlag = EventFlag_315,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 18,
    },
    // [11]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 18,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 115,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [12]
    {
        .completeFlag = EventFlag_304,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [13]
    {
        .requiredFlag = EventFlag_304,
        .completeFlag = EventFlag_305,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D2F74`
    },
    // [14]
    {
        .completeFlag = EventFlag_M4S01_InspectedChalice,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 94,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [15]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 7,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 94,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [16]
    {
        .completeFlag = EventFlag_M4S01_PickupAxe,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `func_800D496C`
    },
    // [17]
    {
        .completeFlag = EventFlag_306,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800D3420`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [18]
    {
        .requiredFlag = EventFlag_306,
        .completeFlag = EventFlag_337,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 14,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
        .mapIdx            = MapIdx_MAP4_S04,
    },
    // [19]
    {
        .requiredFlag = EventFlag_308,
        .completeFlag = EventFlag_309,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `func_800D4410`
    },
    // [20]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 15,
        .sysState       = SysState_EventCallback,
        .eventParam     = 9, // `func_800D4998`
    },
    // [21]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 16,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [22]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 19,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 116,
    },
    // [23]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 20,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 117,
    },
    // [24]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
