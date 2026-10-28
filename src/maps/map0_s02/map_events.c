#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[29] = {
    // [0]
    {
        .completeFlag = EventFlag_M0S02_FirstAidKit,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 29,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M0S02_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M0S02_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 31,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M0S02_HealthDrink2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 32,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .completeFlag = EventFlag_M0S02_HandgunBullets,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 33,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [5]
    {
        .completeFlag = EventFlag_M0S02_HealthDrink3,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [6]
    {
        .completeFlag = EventFlag_M0S02_HealthDrink4,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 35,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [7]
    {
        .requiredFlag = EventFlag_M0S02_UnlockedChannelingStone,
        .completeFlag = EventFlag_M0S02_PickupChannelingStone,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 27,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_ChannelingStoneItemTake`
    },
    // [8]
    {
        .requiredFlag = EventFlag_M0S02_UnlockedChannelingStone,
        .completeFlag = EventFlag_M0S02_PickupChannelingStone,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_ChannelingStoneItemTake`
    },
    // [9]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 24,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 26,
        .sfxPairIdx = SfxPairIdx_1,
        .mapIdx          = MapIdx_MAP2_S00,
    },
    // [10]
    {
        .completeFlag = EventFlag_M0S02_PickupKatana,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 25,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_KatanaItemTake`
    },
    // [11]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 3,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 4,
        .sfxPairIdx = SfxPairIdx_5,
        .mapIdx          = MapIdx_MAP2_S00,
    },
    // [12]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 5,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 2,
    },
    // [13]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 21,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 3,
    },
    // [14]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 22,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 3,
    },
    // [15]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 6,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 7,
        .sfxPairIdx = SfxPairIdx_21,
        .mapIdx          = MapIdx_MAP2_S00,
    },
    // [16]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 13,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 14,
        .sfxPairIdx = SfxPairIdx_24,
        .mapIdx          = MapIdx_MAP2_S00,
    },
    // [17]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 8,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 8,
    },
    // [18]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 9,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 8,
    },
    // [19]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 10,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 8,
    },
    // [20]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 11,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 8,
    },
    // [21]
    {
        .requiredFlag = EventFlag_M0S02_UnlockedGasolineTank,
        .completeFlag = EventFlag_M0S02_PickupGasolineTank,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 23,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `MapEvent_GasolineTankItemTake`
    },
    // [22]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 15,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 16,
    },
    // [23]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 16,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 17,
    },
    // [24]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 17,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 17,
    },
    // [25]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 18,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 17,
    },
    // [26]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 19,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 17,
    },
    // [27]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 20,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 18,
    },
    // [28]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
