#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[17] = {
    // [0]
    {
        .completeFlag = EventFlag_M6S01_RifleShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M6S01_HandgunBullets,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M6S01_HealthDrink,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_423,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
        .sfxPairIdx        = SfxPairIdx_10,
    },
    // [4]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 3,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 4,
        .sfxPairIdx = SfxPairIdx_10,
    },
    // [5]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 4,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 3,
        .sfxPairIdx = SfxPairIdx_10,
    },
    // [6]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 2,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 6,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP6_S00,
    },
    // [7]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 5,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 7,
        .sfxPairIdx = SfxPairIdx_9,
        .mapIdx          = MapIdx_MAP6_S00,
    },
    // [8]
    {
        .requiredFlag = EventFlag_423,
        .completeFlag = EventFlag_424,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D13D8`
    },
    // [9]
    {
        .requiredFlag = EventFlag_425,
        .completeFlag = EventFlag_426,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D236C`
    },
    // [10]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 8,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 17,
    },
    // [11]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 9,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 87,
    },
    // [12]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 10,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 88,
    },
    // [13]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 11,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 88,
    },
    // [14]
    {
        .requiredFlag = EventFlag_426,
        .completeFlag = EventFlag_459,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventSetFlag,
    },
    // [15]
    {
        .completeFlag = EventFlag_459,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 12,
        .requiredItemId    = InvItemId_ChannelingStone,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800D2658`
    },
    // [16]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
