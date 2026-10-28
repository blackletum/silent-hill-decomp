#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[19] = {
    // [0]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 5,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 16,
    },
    // [1]
    {
        .completeFlag = EventFlag_440,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 7,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
        .sfxPairIdx        = SfxPairIdx_23,
        .mapIdx            = MapIdx_MAP7_S00,
    },
    // [2]
    {
        .completeFlag = EventFlag_440,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 7,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
        .sfxPairIdx        = SfxPairIdx_23,
        .mapIdx            = MapIdx_MAP7_S00,
    },
    // [3]
    {
        .requiredFlag = EventFlag_451,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 8,
        .mapIdx            = MapIdx_MAP7_S00,
    },
    // [4]
    {
        .requiredFlag = EventFlag_440,
        .completeFlag = EventFlag_441,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800E1D50`
    },
    // [5]
    {
        .requiredFlag = EventFlag_441,
        .completeFlag = EventFlag_442,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 8,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [6]
    {
        .requiredFlag = EventFlag_442,
        .completeFlag = EventFlag_443,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800E219C`
    },
    // [7]
    {
        .requiredFlag = EventFlag_443,
        .completeFlag = EventFlag_467,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800E2724`
    },
    // [8]
    {
        .requiredFlag = EventFlag_444,
        .completeFlag = EventFlag_445,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800E2950`
    },
    // [9]
    {
        .requiredFlag = EventFlag_446,
        .completeFlag = EventFlag_470,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 7,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [10]
    {
        .requiredFlag = EventFlag_470,
        .completeFlag = EventFlag_447,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_CutsceneCybilDeath`
    },
    // [11]
    {
        .requiredFlag = EventFlag_448,
        .completeFlag = EventFlag_449,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `func_800E3244`
    },
    // [12]
    {
        .requiredFlag = EventFlag_450,
        .completeFlag = EventFlag_468,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `func_800E558C`
    },
    // [13]
    {
        .requiredFlag = EventFlag_468,
        .completeFlag = EventFlag_451,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `func_800E3EF4`
    },
    // [14]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 1,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 15,
    },
    // [15]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 2,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 15,
    },
    // [16]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 3,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 15,
    },
    // [17]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 4,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 15,
    },
    // [18]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
