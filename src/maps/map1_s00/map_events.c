#include "bodyprog/bodyprog.h"
#include "maps/map1/map1_s00.h"

s_EventData MAP_EVENTS[101] = {
    // [0]
    {
        .completeFlag = EventFlag_M1S00_HandgunBullets0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 94,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M1S00_HandgunBullets1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 95,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M1S00_HandgunBullets2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 96,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M1S00_HealthDrink,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 97,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .completeFlag = EventFlag_M1S00_FirstAidKit,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 98,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [5]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 89,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 4,
    },
    // [6]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 91,
        .sysState       = SysState_EventCallback,
        .eventParam     = 21, // `func_800D9254`
    },
    // [7]
    {
        .completeFlag = EventFlag_M1S00_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 90,
        .sysState          = SysState_EventCallback,
        .eventParam        = 20, // `MapEvent_TownMapTake`
    },
    // [8]
    {
        .requiredFlag = EventFlag_73,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_EventCallback,
        .eventParam        = 23, // `MapEvent_Boiler2`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [9]
    {
        .requiredFlag = EventFlag_72,
        .completeFlag = EventFlag_73,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_EventCallback,
        .eventParam        = 18, // `MapEvent_Boiler0`
    },
    // [10]
    {
        .completeFlag = EventFlag_72,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_EventCallback,
        .eventParam        = 19, // `MapEvent_Boiler1`
    },
    // [11]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 31,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(32),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [12]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 32,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(33),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [13]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 29,
        .sysState       = SysState_EventCallback,
        .eventParam     = 17, // `func_800D8CC4`
    },
    // [14]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ReceptionQuestion,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 24,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `func_800D853C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [15]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ReceptionQuestion,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 25,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800D8570`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [16]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ReceptionQuestion,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_EventCallback,
        .eventParam        = 14, // `func_800D85A4`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [17]
    {
        .requiredFlag = EventFlag_73,
        .completeFlag = EventFlag_MapMark_FogSchool1F_ClockTowerCircle,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 20,
        .sfxPairIdx        = SfxPairIdx_3,
    },
    // [18]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ClockTowerCircle,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `MapEvent_ClockTowerInspect`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [19]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 20,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 21,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [20]
    {
        .completeFlag = EventFlag_184,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 19,
        .sysState          = SysState_EventCallback,
        .eventParam        = 22, // `func_800D928C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [21]
    {
        .requiredFlag = EventFlag_184,
        .completeFlag = EventFlag_78,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 23,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [22]
    {
        .requiredFlag = EventFlag_78,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `func_800D85D8`
    },
    // [23]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 16,
        .sysState       = SysState_EventCallback,
        .eventParam     = 16, // `func_800D8948`
    },
    // [24]
    {
        .requiredFlag = EventFlag_79,
        .completeFlag = EventFlag_82,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 19,
    },
    // [25]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 17,
        .sysState       = SysState_EventCallback,
        .eventParam     = 16, // `func_800D8948`
    },
    // [26]
    {
        .requiredFlag = EventFlag_80,
        .completeFlag = EventFlag_82,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 21,
    },
    // [27]
    {
        .completeFlag = EventFlag_185,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_EventCallback,
        .eventParam        = 22, // `func_800D928C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [28]
    {
        .requiredFlag = EventFlag_185,
        .completeFlag = EventFlag_81,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 23,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [29]
    {
        .requiredFlag = EventFlag_81,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `func_800D85D8`
    },
    // [30]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 22,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 18,
        .sfxPairIdx = SfxPairIdx_3,
        .mapIdx          = MapIdx_MAP1_S02,
    },
    // [31]
    {
        .requiredFlag = EventFlag_71,
        .completeFlag = EventFlag_MapMark_FogSchool1F_ClockTowerCircle,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_GoldenSunFilledReceptacleInspect`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [32]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ClockTowerCircle,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `MapEvent_GoldenSunEmptyReceptableInspect`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [33]
    {
        .completeFlag = EventFlag_71,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 14,
        .requiredItemId    = InvItemId_GoldMedallion,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_GoldenSunItemUse`
    },
    // [34]
    {
        .requiredFlag = EventFlag_72,
        .completeFlag = EventFlag_MapMark_FogSchool1F_ClockTowerCircle,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `MapEvent_SilverMoonFilledReceptacleInspect`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [35]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ClockTowerCircle,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_SilverMoonEmptyReceptableInspect`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [36]
    {
        .completeFlag = EventFlag_72,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 15,
        .requiredItemId    = InvItemId_SilverMedallion,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `MapEvent_SilverMoonItemUse`
    },
    // [37]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 1,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 26,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [38]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 2,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 26,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [39]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_LobbyArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 38,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 33,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [40]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_LobbyArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 33,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 38,
        .sfxPairIdx        = SfxPairIdx_2,
    },
    // [41]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_UntitledLobbyTopBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 49,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [42]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_CourtyardBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 3,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [43]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_CourtyardBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 5,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [44]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool1F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 50,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [45]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool1F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 50,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 34,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [46]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 50,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [47]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotRightCorridorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [48]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool1F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 35,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 65,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [49]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool1F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 65,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 35,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [50]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 65,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [51]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotLeftCorridorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 35,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [52]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_InfirmaryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 37,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 40,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [53]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_InfirmaryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 37,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [54]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ReceptionArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 36,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 39,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [55]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ReceptionArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 36,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [56]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool1F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 51,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [57]
    {
        .requiredFlag = EventFlag_MapMark_FogSchool1F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 41,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [58]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [59]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopRightCorridorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [60]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 66,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [61]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 42,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [62]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_StorageBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [63]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_UntitledLobbyBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 48,
        .sfxPairIdx        = SfxPairIdx_2,
    },
    // [64]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_UntitledLobbyBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 48,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 45,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [65]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_HallLeftBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [66]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_CourtyardTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [67]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_CourtyardTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 6,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [68]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 52,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 59,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [69]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 59,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 52,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [70]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 53,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 60,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [71]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 60,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 53,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [72]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 54,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 62,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [73]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 62,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 54,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [74]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 55,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 63,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [75]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 63,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 55,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [76]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 64,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 61,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [77]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 61,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 64,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [78]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_HallMidBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 56,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [79]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_WomensBathroomArrow,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 7,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [80]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_WomensBathroomArrow,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 67,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [81]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_MensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 68,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 8,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [82]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_MensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 68,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [83]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotTeachersRoomBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 69,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [84]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotTeachersRoomTopBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 70,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [85]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopTeachersRoomBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 71,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [86]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopTeachersRoomTopBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 72,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [87]
    {
        .completeFlag = EventFlag_MapMark_FogSchoolBF_StorageBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 82,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [88]
    {
        .completeFlag = EventFlag_MapMark_FogSchoolBF_BoilerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 83,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 85,
        .sfxPairIdx        = SfxPairIdx_17,
    },
    // [89]
    {
        .completeFlag = EventFlag_MapMark_FogSchoolBF_BoilerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 85,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 83,
        .sfxPairIdx        = SfxPairIdx_17,
        .setCameraRail     = true,
    },
    // [90]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 79,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 11,
        .mapIdx      = MapIdx_MAP1_S01,
    },
    // [91]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 80,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 10,
    },
    // [92]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 86,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 9,
    },
    // [93]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 81,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 12,
        .mapIdx      = MapIdx_MAP1_S01,
    },
    // [94]
    {
        .completeFlag = EventFlag_594,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 28,
        .sysState          = SysState_EventSetFlag,
    },
    // [95]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 26,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(35),
    },
    // [96]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 87,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(36),
    },
    // [97]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 88,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(36),
    },
    // [98]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 92,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(39),
    },
    // [99]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 93,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(39),
    },
    // [100]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
