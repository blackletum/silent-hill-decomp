#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[17] = {
    // [0]
    {
        .completeFlag = EventFlag_M3S00_FirstAidKit,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_FirstAidKitTake`
    },
    // [1]
    {
        .requiredFlag = EventFlag_195,
        .completeFlag = EvnetFlag_196,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 13,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [2]
    {
        .requiredFlag = EvnetFlag_196,
        .completeFlag = EventFlag_197,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D0CF8`
    },
    // [3]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 12,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 10,
    },
    // [4]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 4,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 47,
    },
    // [5]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_KitchenArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [6]
    {
        .completeFlag = EventFlag_195,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 2,
        .sfxPairIdx        = SfxPairIdx_20,
        .mapIdx            = MapIdx_MAP6_S01,
    },
    // [7]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_StairsLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 3,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP3_S01,
    },
    // [8]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_CorridorMidBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 1,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 7,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP3_S01,
    },
    // [9]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_RightEntranceBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 6,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP3_S01,
    },
    // [10]
    {
        .completeFlag = EventFlag_M3S00_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_PaperMapTake`
    },
    // [11]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 15,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 49,
    },
    // [12]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 8,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 50,
    },
    // [13]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 9,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 50,
    },
    // [14]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 10,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 51,
    },
    // [15]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 11,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 51,
    },
    // [16]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
