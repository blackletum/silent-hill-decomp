#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[52] = {
    // [0]
    {
        .completeFlag = EventFlag_M5S00_ShotgunShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 38,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M5S00_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M5S00_HandgunBullets0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M5S00_RifleShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .completeFlag = EventFlag_M5S00_FirstAidKit0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [5]
    {
        .completeFlag = EventFlag_M5S00_FirstAidKit1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 43,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [6]
    {
        .completeFlag = EventFlag_M5S00_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [7]
    {
        .completeFlag = EventFlag_M5S00_HandgunBullets1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [8]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 34,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 21,
    },
    // [9]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 35,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 21,
    },
    // [10]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 36,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 21,
    },
    // [11]
    {
        .completeFlag = EventFlag_355,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D732C`
    },
    // [12]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 22,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 19,
    },
    // [13]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 23,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `func_800D75FC`
    },
    // [14]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 24,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `func_800D75FC`
    },
    // [15]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 25,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `func_800D75FC`
    },
    // [16]
    {
        .requiredFlag = EventFlag_356,
        .completeFlag = EventFlag_357,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 26,
    },
    // [17]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 26,
        .sysState       = SysState_EventCallback,
        .eventParam     = 8, // `func_800D7940`
    },
    // [18]
    {
        .requiredFlag = EventFlag_357,
        .completeFlag = EventFlag_356,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 23,
    },
    // [19]
    {
        .requiredFlag = EventFlag_360,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `func_800D7F88`
    },
    // [20]
    {
        .requiredFlag = EventFlag_359,
        .completeFlag = EventFlag_358,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 27,
    },
    // [21]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 27,
        .sysState       = SysState_EventCallback,
        .eventParam     = 9, // `func_800D7C84`
    },
    // [22]
    {
        .requiredFlag = EventFlag_358,
        .completeFlag = EventFlag_359,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 31,
        .mapIdx            = MapIdx_MAP5_S01,
    },
    // [23]
    {
        .completeFlag = EventFlag_M5S00_PickupSewerKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 29,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `MapEvent_SewerKeyTake`
    },
    // [24]
    {
        .completeFlag = EventFlag_354,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800D6B00`
    },
    // [25]
    {
        .requiredFlag = EventFlag_MapMark_FogSewer1F_RightMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 6,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [26]
    {
        .requiredFlag = EventFlag_MapMark_FogSewer1F_RightMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 5,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [27]
    {
        .completeFlag = EventFlag_MapMark_FogSewer1F_RightMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D69DC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [28]
    {
        .completeFlag = EventFlag_MapMark_FogSewer1F_RightMidLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `func_800D6888`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [29]
    {
        .requiredFlag = EventFlag_MapMark_FogSewer1F_MidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 9,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [30]
    {
        .requiredFlag = EventFlag_MapMark_FogSewer1F_MidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 10,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [31]
    {
        .requiredFlag = EventFlag_M5S00_PickupSewerKey,
        .completeFlag = EventFlag_MapMark_FogSewer1F_MidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D69DC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [32]
    {
        .requiredFlag = EventFlag_M5S00_PickupSewerKey,
        .completeFlag = EventFlag_MapMark_FogSewer1F_MidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 10,
        .requiredItemId    = InvItemId_SewerKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D69DC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [33]
    {
        .completeFlag = EventFlag_MapMark_FogSewer1F_MidLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `func_800D6888`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [34]
    {
        .requiredFlag = EventFlag_MapMark_527,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 15,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [35]
    {
        .requiredFlag = EventFlag_MapMark_527,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [36]
    {
        .requiredFlag = EventFlag_354,
        .completeFlag = EventFlag_MapMark_527,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D69DC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [37]
    {
        .requiredFlag = EventFlag_354,
        .completeFlag = EventFlag_MapMark_527,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 14,
        .requiredItemId    = InvItemId_SewerExitKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D69DC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [38]
    {
        .completeFlag = EventFlag_1390,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `func_800D6888`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [39]
    {
        .completeFlag = EventFlag_M5S00_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 32,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `MapEvent_PaperMapTake`
    },
    // [40]
    {
        .completeFlag = EventFlag_MapMark_FogSewer1F_RightTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [41]
    {
        .completeFlag = EventFlag_MapMark_FogSewer1F_RightTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 3,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [42]
    {
        .completeFlag = EventFlag_MapMark_FogSewer1F_RightBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 8,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [43]
    {
        .completeFlag = EventFlag_MapMark_FogSewer1F_RightBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 7,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [44]
    {
        .completeFlag = EventFlag_MapMark_AltSewer_BigCross,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 17,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [45]
    {
        .completeFlag = EventFlag_MapMark_AltSewer_BigCross,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 16,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [46]
    {
        .completeFlag = EventFlag_1395,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 19,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [47]
    {
        .completeFlag = EventFlag_1395,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 19,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 18,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [48]
    {
        .completeFlag = EventFlag_1397,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 20,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 21,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [49]
    {
        .completeFlag = EventFlag_1397,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 20,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [50]
    {
        .completeFlag = EventFlag_1398,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 37,
        .sysState          = SysState_EventSetFlag,
    },
    // [51]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
