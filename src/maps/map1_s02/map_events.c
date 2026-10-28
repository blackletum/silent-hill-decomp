#include "bodyprog/bodyprog.h"
#include "maps/map1/map1_s02.h"

s_EventData MAP_EVENTS[121] = {
    // [0]
    {
        .completeFlag = EventFlag_M1S02_Ampoule0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 107,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M1S02_ShotgunShells0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 108,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M1S02_ShotgunShells1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 109,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M1S02_FirstAidKit0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 110,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .completeFlag = EventFlag_M1S02_HandgunBullets0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 111,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [5]
    {
        .completeFlag = EventFlag_M1S02_HandgunBullets1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 112,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [6]
    {
        .completeFlag = EventFlag_M1S02_HandgunBullets2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 113,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [7]
    {
        .completeFlag = EventFlag_M1S02_Ampoule1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 114,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [8]
    {
        .completeFlag = EventFlag_M1S02_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 115,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [9]
    {
        .completeFlag = EventFlag_M1S02_FirstAidKit1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 116,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [10]
    {
        .completeFlag = EventFlag_M1S02_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 117,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [11]
    {
        .completeFlag = EventFlag_91,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 1,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800DA384`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [12]
    {
        .requiredFlag = EventFlag_225,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 21, // `func_800DD420`
    },
    // [13]
    {
        .requiredFlag = EventFlag_M1S03_KeyDownTheDrain,
        .completeFlag = EventFlag_M1S02_PickupClassroomKey,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 103,
        .sysState          = SysState_EventCallback,
        .eventParam        = 20, // `MapEvent_ClassroomKeyItemTake`
    },
    // [14]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 101,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 4,
    },
    // [15]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 102,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 4,
    },
    // [16]
    {
        .completeFlag = EventFlag_118,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventCallback,
        .eventParam        = 18, // `func_800DC1E0`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [17]
    {
        .completeFlag = EventFlag_119,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_EventCallback,
        .eventParam        = 18, // `func_800DC1E0`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [18]
    {
        .completeFlag = EventFlag_120,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventCallback,
        .eventParam        = 19, // `func_800DCF00`
    },
    // [19]
    {
        .requiredFlag = EventFlag_120,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 18,
        .mapIdx            = MapIdx_MAP1_S05,
    },
    // [20]
    {
        .completeFlag = EventFlag_96,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 37,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `func_800DBB7C`
    },
    // [21]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 38,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(52),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [22]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 36,
        .sysState       = SysState_EventCallback,
        .eventParam     = 16, // `func_800DBF88`
    },
    // [23]
    {
        .requiredFlag = EventFlag_96,
        .completeFlag = EventFlag_M1S02_PickupShotgun,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 35,
        .sysState          = SysState_EventCallback,
        .eventParam        = 17, // `func_800DBFC8`
    },
    // [24]
    {
        .completeFlag = EventFlag_M1S02_PickupRubberBall,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 33,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800DB33C`
    },
    // [25]
    {
        .completeFlag = EventFlag_M1S02_PickupRubberBall,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800DB33C`
    },
    // [26]
    {
        .completeFlag = EventFlag_98,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 91,
        .sysState          = SysState_EventCallback,
        .eventParam        = 14, // `MapEvent_CutscenePhoneCall`
    },
    // [27]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 42,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(50),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [28]
    {
        .completeFlag = EventFlag_M1S02_PickupPictureCard,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 29,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `func_800DB310`
    },
    // [29]
    {
        .completeFlag = EventFlag_M1S02_PickupPictureCard,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `func_800DB310`
    },
    // [30]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 31,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 45,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [31]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 32,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 45,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [32]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_SecretDoorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 26,
        .sfxPairIdx        = SfxPairIdx_2,
    },
    // [33]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_SecretDoorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 12,
        .sfxPairIdx        = SfxPairIdx_2,
        .setCameraRail     = true,
    },
    // [34]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_SecretDoorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `MapEvent_DoorWithHorizontalSlotInteract`
    },
    // [35]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Item,
        .mapPointIdx    = 26,
        .requiredItemId = InvItemId_PictureCard,
        .sysState       = SysState_EventCallback,
        .eventParam     = 11, // `func_800DB058`
    },
    // [36]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 19,
        .sysState       = SysState_EventCallback,
        .eventParam     = 8, // `func_800DA8F8`
    },
    // [37]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 20,
        .sysState       = SysState_EventCallback,
        .eventParam     = 6, // `func_800DA9D4`
    },
    // [38]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 21,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `func_800DAA00`
    },
    // [39]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_LobbyTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 47,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 52,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [40]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_LobbyTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 52,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 47,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [41]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_LobbyBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [42]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_LobbyBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [43]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_CourtyardBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 6,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [44]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_CourtyardBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 8,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [45]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_CourtyardBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [46]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_CourtyardBotLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [47]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 48,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 64,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [48]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 64,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 48,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [49]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 49,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 79,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [50]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 79,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 49,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [51]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 79,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [52]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotLeftCorridorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 49,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [53]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_InfirmaryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 54,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [54]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_InfirmaryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 54,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 51,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [55]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_ReceptionArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 50,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 53,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [56]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_ReceptionArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 53,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 50,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [57]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 65,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 55,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [58]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 55,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 65,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [59]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 65,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [60]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopRightCorridorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 55,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [61]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_TopLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 56,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 80,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [62]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_TopLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 80,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 56,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [63]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 80,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [64]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopLeftCorridorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 56,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [65]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_StorageArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 58,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 61,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [66]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_StorageArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 61,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 58,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [67]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_UntitledLobbyBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 59,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 62,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [68]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_UntitledLobbyBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 62,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 59,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [69]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_HallLeftArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 60,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 72,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [70]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_HallLeftArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 72,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 60,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [71]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_CourtyardTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 7,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [72]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_CourtyardTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 9,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [73]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 73,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [74]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 73,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 66,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [75]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotClassRoomTopBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [76]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotClassRoomTopBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 74,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [77]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 68,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 76,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [78]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 76,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 68,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [79]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 69,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 77,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [80]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 77,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 69,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [81]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_ClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 78,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 75,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [82]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_ClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 75,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 78,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [83]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_HallMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 70,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 71,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [84]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_HallMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 71,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 70,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [85]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_WomensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 81,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 10,
        .sfxPairIdx        = SfxPairIdx_12,
        .mapIdx            = MapIdx_MAP1_S03,
    },
    // [86]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_WomensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 81,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [87]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_MensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 82,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 11,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [88]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_MensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 82,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [89]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotTeachersRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 83,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 87,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [90]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotTeachersRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 87,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 83,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [91]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotTeachersRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 84,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 88,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [92]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_BotTeachersRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 88,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 84,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [93]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopTeachersRoomBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 85,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [94]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopTeachersRoomBotBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 90,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [95]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopTeachersRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 86,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 91,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [96]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TopTeachersRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 91,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 86,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [97]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TeacherMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 89,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 92,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [98]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_TeacherMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 92,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 89,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [99]
    {
        .completeFlag = EventFlag_MapMark_AltSchoolBF_StorageArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 96,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 98,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [100]
    {
        .completeFlag = EventFlag_MapMark_AltSchoolBF_StorageArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 98,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 96,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [101]
    {
        .completeFlag = EventFlag_MapMark_AltSchoolBF_BoilerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 97,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 17,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [102]
    {
        .completeFlag = EventFlag_MapMark_AltSchoolBF_BoilerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 97,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [103]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_RightCorridorBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 27,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 28,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [104]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool1F_RightCorridorBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 27,
        .sfxPairIdx        = SfxPairIdx_8,
    },
    // [105]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_RightCorridorBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [106]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_RightCorridorBotLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 27,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [107]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 93,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 15,
        .mapIdx      = MapIdx_MAP1_S03,
    },
    // [108]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 94,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 14,
    },
    // [109]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 100,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 13,
    },
    // [110]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 95,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 16,
        .mapIdx      = MapIdx_MAP1_S03,
    },
    // [111]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_LeftMidCorridorBroken,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 22,
        .sysState          = SysState_EventSetFlag,
    },
    // [112]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_RightCorridorMidBroken,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 23,
        .sysState          = SysState_EventSetFlag,
    },
    // [113]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_UntitledLobbyTopCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 25,
        .sysState          = SysState_EventSetFlag,
    },
    // [114]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 43,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 46,
    },
    // [115]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 44,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 46,
    },
    // [116]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 46,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 48,
    },
    // [117]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 105,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(54),
    },
    // [118]
    {
        .triggerType    = EventTriggerType_TouchFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 104,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(53),
    },
    // [119]
    {
        .completeFlag = EventFlag_MapMark_AltSchool1F_RightCorridorBotDots,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 106,
        .sysState          = SysState_EventSetFlag,
    },
    // [120]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
