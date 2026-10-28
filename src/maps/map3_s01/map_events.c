#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[111] = {
    // [0]
    {
        .completeFlag = EventFlag_M3S01_HealthDrink,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 101,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D14BC`
    },
    // [1]
    {
        .completeFlag = EventFlag_M3S00_FirstAidKit,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 100,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D1500`
    },
    // [2]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 67,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 10,
    },
    // [3]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 75,
        .sysState       = SysState_EventCallback,
        .eventParam     = 13, // `func_800D2A88`
    },
    // [4]
    {
        .completeFlag = EventFlag_M3S01_PickupUnknownLiquid,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 57,
        .requiredItemId    = InvItemId_PlasticBottle,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_UseBottleOnLiquid`
    },
    // [5]
    {
        .completeFlag = EventFlag_M3S01_PickupUnknownLiquid,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 58,
        .requiredItemId    = InvItemId_PlasticBottle,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_UseBottleOnLiquid`
    },
    // [6]
    {
        .completeFlag = EventFlag_M3S01_PickupUnknownLiquid,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 59,
        .requiredItemId    = InvItemId_PlasticBottle,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_UseBottleOnLiquid`
    },
    // [7]
    {
        .completeFlag = EventFlag_M3S01_PickupUnknownLiquid,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 60,
        .requiredItemId    = InvItemId_PlasticBottle,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_UseBottleOnLiquid`
    },
    // [8]
    {
        .completeFlag = EventFlag_M3S01_PickupUnknownLiquid,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 57,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_UnknownLiquidInteract`
    },
    // [9]
    {
        .completeFlag = EventFlag_M3S01_PickupUnknownLiquid,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 58,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_UnknownLiquidInteract`
    },
    // [10]
    {
        .completeFlag = EventFlag_M3S01_PickupUnknownLiquid,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 59,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_UnknownLiquidInteract`
    },
    // [11]
    {
        .completeFlag = EventFlag_M3S01_PickupUnknownLiquid,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 60,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_UnknownLiquidInteract`
    },
    // [12]
    {
        .triggerType     = EventTriggerType_TouchAabb,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 57,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 20,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [13]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 58,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 20,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [14]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 59,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 20,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [15]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 60,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 20,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [16]
    {
        .completeFlag = EventFlag_M3S01_PickupPlasticBottle,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 62,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `MapEvent_PlasticBottleTake`
    },
    // [17]
    {
        .completeFlag = EventFlag_M3S01_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 63,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `MapEvent_PaperMapTake1`
    },
    // [18]
    {
        .completeFlag = EventFlag_M3S01_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 64,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `MapEvent_PaperMapTake1`
    },
    // [19]
    {
        .completeFlag = EventFlag_M3S01_PickupBasementKey,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 65,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `func_800D279C`
    },
    // [20]
    {
        .completeFlag = EventFlag_M3S01_GeneratorOn,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_Generator0`
    },
    // [21]
    {
        .requiredFlag = EventFlag_M3S01_GeneratorOn,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_EventCallback,
        .eventParam        = 14, // `func_800D29A4`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [22]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 55,
        .sysState       = SysState_EventCallback,
        .eventParam     = 5, // `sharedFunc_800D15F0_3_s01`
    },
    // [23]
    {
        .requiredFlag = EventFlag_M3S01_GeneratorOn,
        .completeFlag = EventFlag_212,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 37,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [24]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 37,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 15,
    },
    // [25]
    {
        .requiredFlag = EventFlag_M3S01_GeneratorOn,
        .completeFlag = EventFlag_212,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 36,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [26]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 36,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 15,
    },
    // [27]
    {
        .requiredFlag = EventFlag_216,
        .completeFlag = EventFlag_220,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 36,
    },
    // [28]
    {
        .requiredFlag = EventFlag_M3S01_GeneratorOn,
        .completeFlag = EventFlag_213,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [29]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 12,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 15,
    },
    // [30]
    {
        .requiredFlag = EventFlag_M3S01_GeneratorOn,
        .completeFlag = EventFlag_213,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [31]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 11,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 15,
    },
    // [32]
    {
        .requiredFlag = EventFlag_217,
        .completeFlag = EventFlag_221,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 11,
    },
    // [33]
    {
        .completeFlag = EventFlag_214,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [34]
    {
        .completeFlag = EventFlag_214,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 38,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [35]
    {
        .requiredFlag = EventFlag_218,
        .completeFlag = EventFlag_222,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 38,
    },
    // [36]
    {
        .completeFlag = EventFlag_MapMark_AltHospital2F_OperatingPrepRoomArrow,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [37]
    {
        .completeFlag = EventFlag_215,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [38]
    {
        .completeFlag = EventFlag_215,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [39]
    {
        .requiredFlag = EventFlag_219,
        .completeFlag = EventFlag_223,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 41,
    },
    // [40]
    {
        .completeFlag = EventFlag_MapMark_AltHospital2F_CorridorMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 43,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [41]
    {
        .requiredFlag = EventFlag_224,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 56,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
        .mapIdx            = MapIdx_MAP3_S02,
    },
    // [42]
    {
        .requiredFlag = EventFlag_M3S01_PickupBasementKey,
        .completeFlag = EventFlag_M3S01_BasementDoorOpen,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D1524`
    },
    // [43]
    {
        .requiredFlag = EventFlag_M3S01_PickupBasementKey,
        .completeFlag = EventFlag_M3S01_BasementDoorOpen,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 10,
        .requiredItemId    = InvItemId_BasementKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D1524`
    },
    // [44]
    {
        .requiredFlag = EventFlag_MapMark_585,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 15,
        .sfxPairIdx        = SfxPairIdx_19,
    },
    // [45]
    {
        .requiredFlag = EventFlag_MapMark_585,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 10,
        .sfxPairIdx        = SfxPairIdx_19,
        .setCameraRail     = true,
    },
    // [46]
    {
        .completeFlag = EventFlag_1448,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [47]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 31,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 29,
    },
    // [48]
    {
        .completeFlag = EventFlag_M3S00_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 68,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `MapEvent_PaperMapTake0`
    },
    // [49]
    {
        .completeFlag = EventFlag_1435,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 25,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [50]
    {
        .completeFlag = EventFlag_1435,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 25,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 3,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [51]
    {
        .completeFlag = EventFlag_1452,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [52]
    {
        .completeFlag = EventFlag_1436,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [53]
    {
        .completeFlag = EventFlag_1438,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [54]
    {
        .completeFlag = EventFlag_1443,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 20,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [55]
    {
        .completeFlag = EventFlag_1443,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 20,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 7,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [56]
    {
        .completeFlag = EventFlag_1445,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 19,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [57]
    {
        .completeFlag = EventFlag_1445,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 19,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 8,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [58]
    {
        .completeFlag = EventFlag_MapMark_AltHospital1F_CorridorLeftBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 18,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [59]
    {
        .completeFlag = EventFlag_MapMark_AltHospital1F_CorridorLeftBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 9,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [60]
    {
        .completeFlag = EventFlag_MapMark_AltHospital1F_ExaminationMedicineArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [61]
    {
        .completeFlag = EventFlag_1441,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [62]
    {
        .completeFlag = EventFlag_1441,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 22,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 21,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [63]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_RightEntranceBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 27,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [64]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_RightEntranceBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 27,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 26,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [65]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_CorridorMidBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 34,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [66]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_CorridorMidBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 28,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [67]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_StairsBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 32,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 35,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [68]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_StairsBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 35,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 32,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [69]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_StairsLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 29,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 30,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [70]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_StairsLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 29,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [71]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_KitchenArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 33,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [72]
    {
        .completeFlag = EventFlag_1513,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 49,
        .sfxPairIdx        = SfxPairIdx_19,
        .setCameraRail     = true,
    },
    // [73]
    {
        .completeFlag = EventFlag_1513,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 49,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 44,
        .sfxPairIdx        = SfxPairIdx_19,
    },
    // [74]
    {
        .completeFlag = EventFlag_MapMark_AltHospitalBF_MorgueArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 47,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [75]
    {
        .completeFlag = EventFlag_MapMark_AltHospitalBF_StoreroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 48,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [76]
    {
        .completeFlag = EventFlag_MapMark_AltHospitalBF_BoilerRoomBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 50,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 53,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [77]
    {
        .completeFlag = EventFlag_MapMark_AltHospitalBF_BoilerRoomBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 53,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 50,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [78]
    {
        .completeFlag = EventFlag_1520,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [79]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 16,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 46,
    },
    // [80]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 45,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 17,
    },
    // [81]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 69,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 30,
    },
    // [82]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 70,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 31,
    },
    // [83]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 71,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 32,
    },
    // [84]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 72,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [85]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 73,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 34,
    },
    // [86]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 76,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 38,
    },
    // [87]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 77,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 35,
    },
    // [88]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 78,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 34,
    },
    // [89]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 79,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 35,
    },
    // [90]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 80,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 39,
    },
    // [91]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 81,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 34,
    },
    // [92]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 82,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 35,
    },
    // [93]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 83,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 40,
    },
    // [94]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 84,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 40,
    },
    // [95]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 85,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 39,
    },
    // [96]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 86,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 39,
    },
    // [97]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 87,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 39,
    },
    // [98]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 88,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 39,
    },
    // [99]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 89,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 39,
    },
    // [100]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 90,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 39,
    },
    // [101]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 91,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 35,
    },
    // [102]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 92,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 35,
    },
    // [103]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 93,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 40,
    },
    // [104]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 94,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 40,
    },
    // [105]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 95,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 40,
    },
    // [106]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 96,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 34,
    },
    // [107]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 97,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 40,
    },
    // [108]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 98,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 40,
    },
    // [109]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 99,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 35,
    },
    // [110]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
