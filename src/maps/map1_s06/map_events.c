#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[49] = {
    // [0]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 49,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 4,
    },
    // [1]
    {
        .completeFlag = EventFlag_133,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 14,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [2]
    {
        .completeFlag = EventFlag_134,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D5614`
    },
    // [3]
    {
        .completeFlag = EventFlag_M1S06_PickupKGordonKey,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800D5B98`
    },
    // [4]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 11,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 19,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [5]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 12,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 20,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [6]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 13,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 21,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [7]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 50,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `func_800D6338`
    },
    // [8]
    {
        .completeFlag = EventFlag_M1S00_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `MapEvent_PaperMapTake`
    },
    // [9]
    {
        .completeFlag = EventFlag_140,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 1,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [10]
    {
        .requiredFlag = EventFlag_140,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 1,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 4,
        .sfxPairIdx        = SfxPairIdx_2,
        .mapIdx            = MapIdx_MAP2_S00,
    },
    // [11]
    {
        .completeFlag = EventFlag_141,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [12]
    {
        .requiredFlag = EventFlag_141,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 3,
        .sfxPairIdx        = SfxPairIdx_2,
        .mapIdx            = MapIdx_MAP2_S00,
    },
    // [13]
    {
        .completeFlag = EventFlag_139,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [14]
    {
        .requiredFlag = EventFlag_139,
        .completeFlag = EventFlag_MapMark_FogSchool1F_LobbyArrows,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventSetFlag,
    },
    // [15]
    {
        .requiredFlag = EventFlag_139,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 19,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [16]
    {
        .requiredFlag = EventFlag_139,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 19,
        .sfxPairIdx        = SfxPairIdx_2,
    },
    // [17]
    {
        .completeFlag = EventFlag_138,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 22,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [18]
    {
        .requiredFlag = EventFlag_138,
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventSetFlag,
    },
    // [19]
    {
        .requiredFlag = EventFlag_138,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [20]
    {
        .requiredFlag = EventFlag_138,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 22,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 15,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [21]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotRightCorridorBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [22]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_CourtyardBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [23]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotLeftCorridorBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [24]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_InfirmaryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 21,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [25]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_InfirmaryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 18,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [26]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_ReceptionBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [27]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopRightCorridorBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 23,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [28]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopRightCorridorBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [29]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotClassRoomBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 24,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [30]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotRightClassRoomBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [31]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_BotClassRoomTopBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 25,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [32]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_BotRightClassRoomTopBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [33]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopClassRoomBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [34]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopRightClassRoomBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 43,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [35]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_TopClassRoomTopBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 27,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [36]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_TopRightClassRoomTopBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [37]
    {
        .completeFlag = EventFlag_MapMark_FogSchool1F_HallMidBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [38]
    {
        .completeFlag = EventFlag_MapMark_FogSchool2F_LibraryBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [39]
    {
        .completeFlag = EventFlag_MapMark_FogSchoolBF_StorageBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [40]
    {
        .completeFlag = EventFlag_MapMark_FogSchoolBF_BoilerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 35,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 37,
        .sfxPairIdx        = SfxPairIdx_17,
    },
    // [41]
    {
        .completeFlag = EventFlag_MapMark_FogSchoolBF_BoilerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 37,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 35,
        .sfxPairIdx        = SfxPairIdx_17,
        .setCameraRail     = true,
    },
    // [42]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 32,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 7,
    },
    // [43]
    {
        .completeFlag = EventFlag_135,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 38,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 6,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [44]
    {
        .requiredFlag = EventFlag_135,
        .completeFlag = EventFlag_M1S06_ChurchMarkedOnMap,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D5DD8`
    },
    // [45]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 38,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 6,
    },
    // [46]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 31,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 8,
    },
    // [47]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 46,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 9,
    },
    // [48]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
