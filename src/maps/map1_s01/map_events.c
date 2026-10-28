#include "bodyprog/bodyprog.h"
#include "maps/map1/map1_s01.h"

s_EventData MAP_EVENTS[104] = {
    // [0]
    {
        .completeFlag = EventFlag_M1S01_HandgunBullets0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 96,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M1S01_FirstAidKit,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 97,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M1S01_HealthDrink,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 98,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M1S01_HandgunBullets1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 99,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .completeFlag = EventFlag_M1S01_HandgunBullets2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 100,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [5]
    {
        .requiredFlag = EventFlag_M1S01_PianoPuzzleSolved,
        .completeFlag = EventFlag_M1S01_PickupSilverMedallion,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `func_800D857C`
    },
    // [6]
    {
        .requiredFlag = EventFlag_M1S01_PianoPuzzleSolved,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `func_800D7EEC`
    },
    // [7]
    {
        .requiredFlag = EventFlag_71,
        .completeFlag = EventFlag_M1S01_PianoPuzzleSolved,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `MapEvent_PianoPuzzleInteract`
    },
    // [8]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 16,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(26),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [9]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 15,
        .sysState       = SysState_EventCallback,
        .eventParam     = 8, // `func_800D7830`
    },
    // [10]
    {
        .requiredFlag = EventFlag_74,
        .completeFlag = EventFlag_M1S01_PickupGoldMedallion,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_GoldMedallionItemPickup`
    },
    // [11]
    {
        .requiredFlag = EventFlag_M1S01_PickupGoldMedallion,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 20,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [12]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 12,
        .sysState       = SysState_EventCallback,
        .eventParam     = 4, // `MapEvent_HandStatueInspect`
    },
    // [13]
    {
        .completeFlag = EventFlag_74,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 12,
        .requiredItemId    = InvItemId_Chemical,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D7308`
    },
    // [14]
    {
        .requiredFlag = EventFlag_M1S01_PickupChemical,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 19,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [15]
    {
        .completeFlag = EventFlag_M1S01_PickupChemical,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_ChemicalItemTake`
    },
    // [16]
    {
        .requiredFlag = EventFlag_77,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `func_800D8794`
    },
    // [17]
    {
        .completeFlag = EventFlag_76,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800D87C0`
    },
    // [18]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 36,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [19]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 36,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 51,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [20]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 52,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 42,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [21]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 52,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [22]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotRightClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 53,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 58,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [23]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotRightClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 58,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 53,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [24]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 54,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 59,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [25]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 59,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 54,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [26]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopRightClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 55,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 61,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [27]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopRightClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 61,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 55,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [28]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 56,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 62,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [29]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 62,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 56,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [30]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LibraryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 57,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 64,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [31]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LibraryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 64,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 57,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [32]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_RightClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 60,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 63,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [33]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_RightClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 63,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 60,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [34]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LockerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 38,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 40,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [35]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LockerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 38,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [36]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_MusicRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 41,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [37]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_MusicRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 39,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [38]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool2F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 37,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [39]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool2F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 37,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 66,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [40]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [41]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotLeftCorridorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 37,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [42]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopLeftArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 43,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [43]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopLeftArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 43,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 67,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [44]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_WomensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 68,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 3,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [45]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_WomensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 68,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [46]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_MensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 69,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [47]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_MensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 69,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [48]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotLeftClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 70,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 74,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [49]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotLeftClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 74,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 70,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [50]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotLeftClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 71,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 75,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [51]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotLeftClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 75,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 71,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [52]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopLeftClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 72,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 77,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [53]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopLeftClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 77,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 72,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [54]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopLeftClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 73,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 78,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [55]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopLeftClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 78,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 73,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [56]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LeftClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 76,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 79,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [57]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LeftClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 79,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 76,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [58]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_ReserveLibraryMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 65,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 48,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [59]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_ReserveLibraryMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 48,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 65,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [60]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool2F_LibraryReserveArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 47,
        .sfxPairIdx        = SfxPairIdx_2,
    },
    // [61]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool2F_LibraryReserveArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 47,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 44,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [62]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LibraryReserveArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 47,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [63]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LibraryReserveLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [64]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_ChemistryLabArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 49,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [65]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_ChemistryLabArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 49,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 45,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [66]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LabEquipmentRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 50,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [67]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LabEquipmentRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 50,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 46,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [68]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 82,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 11,
    },
    // [69]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 10,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 7,
    },
    // [70]
    {
        .completeFlag = EventFlag_MapMark_FogSchoolRF_RoofBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [71]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 80,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 5,
        .mapIdx      = MapIdx_MAP1_S00,
    },
    // [72]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 81,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 6,
        .mapIdx      = MapIdx_MAP1_S00,
    },
    // [73]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_StatueOfHandSign,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 18,
        .sysState          = SysState_EventSetFlag,
    },
    // [74]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_PianoSign,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 19,
        .sysState          = SysState_EventSetFlag,
    },
    // [75]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 21,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(34),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [76]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 22,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(35),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [77]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 23,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(35),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [78]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 24,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(35),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [79]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 25,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(36),
    },
    // [80]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 26,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(37),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [81]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 27,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(37),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [82]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 28,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(38),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [83]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 29,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(39),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [84]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 30,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(41),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [85]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 31,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(41),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [86]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 32,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(42),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [87]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 33,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(42),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [88]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 34,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(42),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [89]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 35,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(36),
    },
    // [90]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 94,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(36),
    },
    // [91]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 95,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(36),
    },
    // [92]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 83,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(44),
    },
    // [93]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 84,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(44),
    },
    // [94]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 85,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(45),
    },
    // [95]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 86,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(45),
    },
    // [96]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 87,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(46),
    },
    // [97]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 88,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(44),
    },
    // [98]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 89,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(45),
    },
    // [99]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 90,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(45),
    },
    // [100]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 91,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(44),
    },
    // [101]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 92,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(46),
    },
    // [102]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 93,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(46),
    },
    // [103]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
