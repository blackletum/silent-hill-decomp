#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[16] = {
    // [0]
    {
        .completeFlag = EventFlag_M6S03_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M6S03_HandgunBullets,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M6S03_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .requiredFlag = EventFlag_426,
        .completeFlag = EventFlag_438,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 9,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [4]
    {
        .completeFlag = EventFlag_431,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D822C`
    },
    // [5]
    {
        .requiredFlag = EventFlag_431,
        .completeFlag = EventFlag_432,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
    },
    // [6]
    {
        .completeFlag = EventFlag_433,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D84EC`
    },
    // [7]
    {
        .completeFlag = EventFlag_433,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D84EC`
    },
    // [8]
    {
        .completeFlag = EventFlag_433,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D84EC`
    },
    // [9]
    {
        .requiredFlag = EventFlag_433,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 7,
        .mapIdx            = MapIdx_MAP6_S04,
    },
    // [10]
    {
        .completeFlag = EventFlag_434,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventSetFlag,
    },
    // [11]
    {
        .completeFlag = EventFlag_435,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 6,
        .sysState          = SysState_EventSetFlag,
    },
    // [12]
    {
        .completeFlag = EventFlag_M6S03_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_PaperMapTake`
    },
    // [13]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 16,
    },
    // [14]
    {
        .requiredFlag = EventFlag_435,
        .completeFlag = EventFlag_MapMark_FogHospital1F_MedicineRoomBotArrows,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 9,
        .sysState          = SysState_EventSetFlag,
    },
    // [15]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
