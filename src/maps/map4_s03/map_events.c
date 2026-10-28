#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[31] = {
    // [0]
    {
        .completeFlag = EventFlag_M4S03_FirstAidKit,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 27,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M4S03_RifleShells0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M4S03_RifleShells1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 29,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_330,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 24,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D8FC0`
    },
    // [4]
    {
        .requiredFlag = EventFlag_330,
        .completeFlag = EventFlag_331,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 11,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [5]
    {
        .requiredFlag = EventFlag_331,
        .completeFlag = EventFlag_332,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `func_800D960C`
    },
    // [6]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 22,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 13,
    },
    // [7]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 23,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 13,
    },
    // [8]
    {
        .completeFlag = EventFlag_M4S03_PickupHuntingRifle,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D6704`
    },
    // [9]
    {
        .completeFlag = EventFlag_M4S03_PickupHuntingRifle,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D6704`
    },
    // [10]
    {
        .completeFlag = EventFlag_M4S03_PickupHuntingRifle,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D6704`
    },
    // [11]
    {
        .completeFlag = EventFlag_M4S03_PickupHuntingRifle,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D6704`
    },
    // [12]
    {
        .completeFlag = EventFlag_320,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 10,
        .sysState          = SysState_EventSetFlag,
    },
    // [13]
    {
        .requiredFlag = EventFlag_321,
        .completeFlag = EventFlag_323,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 1,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [14]
    {
        .requiredFlag = EventFlag_323,
        .completeFlag = EventFlag_324,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D6774`
    },
    // [15]
    {
        .requiredFlag = EventFlag_335,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `func_800D9824`
    },
    // [16]
    {
        .requiredFlag = EventFlag_326,
        .completeFlag = EventFlag_327,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800D6F24`
    },
    // [17]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 2,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 3,
    },
    // [18]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 4,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 5,
    },
    // [19]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 6,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 7,
    },
    // [20]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 8,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 9,
    },
    // [21]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 15,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 16,
        .mapIdx      = MapIdx_MAP4_S02,
    },
    // [22]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 17,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 18,
        .mapIdx      = MapIdx_MAP4_S02,
    },
    // [23]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 19,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 20,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [24]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 20,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 19,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [25]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 21,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [26]
    {
        .requiredFlag = EventFlag_332,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 25,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 19,
    },
    // [27]
    {
        .requiredFlag = EventFlag_332,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 19,
    },
    // [28]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 25,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 18,
    },
    // [29]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 26,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 18,
    },
    // [30]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
