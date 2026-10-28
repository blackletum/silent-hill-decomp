#include "bodyprog/bodyprog.h"

// JAP0 merges "I better take it with me." into the message before it, so the messages after it shift down by 1.
#if VERSION_REGION_IS(NTSCJ)
    #define MAP_MSG_MORE_IMPORTANT_STUFF 74
    #define MAP_MSG_TV                   73
    #define MAP_MSG_PINBALL              72
#elif VERSION_REGION_IS(NTSC)
    #define MAP_MSG_MORE_IMPORTANT_STUFF 75
    #define MAP_MSG_TV                   74
    #define MAP_MSG_PINBALL              73
#endif

s_EventData MAP_EVENTS[23] = {
    // [0]
    {
        .completeFlag = EventFlag_M0S01_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M0S01_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M0S01_FmvStarted,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 15,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [3]
    {
        .requiredFlag = EventFlag_M0S01_FmvStarted,
        .completeFlag = EventFlag_M0S01_CafeCutsceneStarted,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CafeCutscene`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [4]
    {
        .requiredFlag = EventFlag_M0S01_PickedUpKnifeAndMap,
        .completeFlag = EventFlag_M0S01_AirScreamerIntroCutsceneStarted,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_AirScreamerIntroCutscene`
    },
    // [5]
    {
        .requiredFlag = EventFlag_M0S01_AirScreamerDied,
        .completeFlag = EventFlag_M0S01_AirScreamerDeathPlayed,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `MapEvent_AirScreamerDeath`
    },
    // [6]
    {
        .requiredFlag = EventFlag_M0S01_PickupPocketRadio,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 7,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP2_S00,
    },
    // [7]
    {
        .requiredFlag = EventFlag_M0S01_AirScreamerDied,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 71,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [8]
    {
        .requiredFlag = EventFlag_50,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 70,
    },
    // [9]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 6,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 67,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [10]
    {
        .completeFlag = EventFlag_M0S01_PickupKitchenKnife,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 1,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_KitchenKnifeItemTake`
    },
    // [11]
    {
        .completeFlag = EventFlag_M0S01_PickupFlashlight,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_FlashlightItemTake`
    },
    // [12]
    {
        .completeFlag = EventFlag_M0S01_PickupMap,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `MapEvent_MapItemTake`
    },
    // [13]
    {
        .requiredFlag = EventFlag_M0S01_AirScreamerDied,
        .completeFlag = EventFlag_M0S01_PickupPocketRadio,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `MapEvent_PocketRadioItemTake`
    },
    // [14]
    {
        .requiredFlag = EventFlag_50,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 69,
    },
    // [15]
    {
        .requiredFlag = EventFlag_49,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 65,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [16]
    {
        .requiredFlag = EventFlag_50,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG_MORE_IMPORTANT_STUFF,
    },
    // [17]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 10,
        .sysState       = SysState_SaveMenu0,
        .eventParam     = 1,
    },
    // [18]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 8,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG_PINBALL,
    },
    // [19]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 11,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG_PINBALL,
    },
    // [20]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 12,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG_PINBALL,
    },
    // [21]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 9,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG_TV,
    },
    // [22]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
