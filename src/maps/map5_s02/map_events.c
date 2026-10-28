#include "bodyprog/bodyprog.h"
#include "maps/map5/map5_s02.h"

s_EventData MAP_EVENTS[21] = {
    // [0]
    {
        .completeFlag = EventFlag_M5S02_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M5S02_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M5S02_RifleShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M5S02_HealthDrink2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .requiredFlag = EventFlag_378,
        .completeFlag = EventFlag_379,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `MapEvent_KaufmannBarFightCutscene`
    },
    // [5]
    {
        .requiredFlag = EventFlag_379,
        .completeFlag = EventFlag_380,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `func_800D54D0`
    },
    // [6]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 1,
        .sfxPairIdx = SfxPairIdx_1,
        .mapIdx          = MapIdx_MAP5_S01,
    },
    // [7]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 3,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 4,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP5_S01,
    },
    // [8]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 2,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [9]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 5,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 14,
    },
    // [10]
    {
        .completeFlag = EventFlag_375,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D4B58`
    },
    // [11]
    {
        .requiredFlag = EventFlag_375,
        .completeFlag = EventFlag_M5S02_PickupSafeKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D4DF8`
    },
    // [12]
    {
        .requiredFlag = EventFlag_375,
        .completeFlag = EventFlag_M5S02_PickupSafeKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D4DF8`
    },
    // [13]
    {
        .requiredFlag = EventFlag_375,
        .completeFlag = EventFlag_M5S02_PickupSafeKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D4DF8`
    },
    // [14]
    {
        .requiredFlag = EventFlag_M5S02_UsedSafeKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `func_800D519C`
    },
    // [15]
    {
        .requiredFlag = EventFlag_M5S02_PickupSafeKey,
        .completeFlag = EventFlag_M5S02_UsedSafeKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 11,
        .requiredItemId    = InvItemId_SafeKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D4E64`
    },
    // [16]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 11,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(48),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [17]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 10,
        .sysState       = SysState_EventCallback,
        .eventParam     = 5, // `func_800D4E24`
    },
    // [18]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 12,
        .sysState       = SysState_EventCallback,
        .eventParam     = 8, // `func_800D5478`
    },
    // [19]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 13,
        .sysState       = SysState_EventCallback,
        .eventParam     = 9, // `func_800D54A4`
    },
    // [20]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
