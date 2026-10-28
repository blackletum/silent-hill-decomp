#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[104] = {
    // [0]
    {
        .completeFlag = EventFlag_M3S05_Ampoule,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 96,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D5934`
    },
    // [1]
    {
        .completeFlag = EventFlag_M3S05_HealthDrink,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 97,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D5934`
    },
    // [2]
    {
        .completeFlag = EventFlag_M3S05_HandgunBullets,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 98,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D5934`
    },
    // [3]
    {
        .completeFlag = EventFlag_M3S05_ShotgunShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 99,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D5934`
    },
    // [4]
    {
        .completeFlag = EventFlag_212,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 36,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [5]
    {
        .completeFlag = EventFlag_212,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 36,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [6]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 92,
        .sysState       = SysState_EventCallback,
        .eventParam     = 16, // `sharedFunc_800D15F0_3_s01`
    },
    // [7]
    {
        .requiredFlag = EventFlag_216,
        .completeFlag = EventFlag_220,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 2,
    },
    // [8]
    {
        .requiredFlag = EventFlag_217,
        .completeFlag = EventFlag_221,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 95,
        .mapIdx            = MapIdx_MAP3_S04,
    },
    // [9]
    {
        .requiredFlag = EventFlag_218,
        .completeFlag = EventFlag_222,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 93,
        .mapIdx            = MapIdx_MAP3_S03,
    },
    // [10]
    {
        .requiredFlag = EventFlag_219,
        .completeFlag = EventFlag_223,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 94,
        .mapIdx            = MapIdx_MAP3_S03,
    },
    // [11]
    {
        .requiredFlag = EventFlag_284,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 19,
    },
    // [12]
    {
        .requiredFlag = EventFlag_M3S05_AlcoholPouredOnVines,
        .completeFlag = EventFlag_284,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 18,
        .requiredItemId    = InvItemId_Lighter,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `func_800D64E0`
    },
    // [13]
    {
        .requiredFlag = EventFlag_M3S05_AlcoholPouredOnVines,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `func_800D63C4`
    },
    // [14]
    {
        .completeFlag = EventFlag_M3S05_AlcoholPouredOnVines,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 18,
        .requiredItemId    = InvItemId_DisinfectingAlcohol,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D5FC4`
    },
    // [15]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Item,
        .mapPointIdx    = 18,
        .requiredItemId = InvItemId_Lighter,
        .sysState       = SysState_EventCallback,
        .eventParam     = 5, // `func_800D5C98`
    },
    // [16]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 18,
        .sysState       = SysState_EventCallback,
        .eventParam     = 4, // `func_800D5A98`
    },
    // [17]
    {
        .completeFlag = EventFlag_M3S05_CabinetPushed,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800D72AC`
    },
    // [18]
    {
        .requiredFlag = EventFlag_259,
        .completeFlag = EventFlag_260,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `func_800D6D1C`
    },
    // [19]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 39,
        .sysState       = SysState_EventCallback,
        .eventParam     = 10, // `func_800D6BE0`
    },
    // [20]
    {
        .completeFlag = EventFlag_M3S05_PickupExaminationRoomKey,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `func_800D6CF0`
    },
    // [21]
    {
        .completeFlag = EventFlag_M3S05_PickupVideoTape,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 38,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `func_800D6BB4`
    },
    // [22]
    {
        .completeFlag = EventFlag_M3S05_PickupHammer,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_EventCallback,
        .eventParam        = 14, // `func_800D7280`
    },
    // [23]
    {
        .completeFlag = EventFlag_1533,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 7,
        .sfxPairIdx        = SfxPairIdx_14,
        .setCameraRail     = true,
    },
    // [24]
    {
        .completeFlag = EventFlag_1533,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
        .sfxPairIdx        = SfxPairIdx_14,
    },
    // [25]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 5,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 6,
        .mapIdx      = MapIdx_MAP3_S04,
    },
    // [26]
    {
        .completeFlag = EventFlag_1539,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 12,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [27]
    {
        .completeFlag = EventFlag_1539,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 8,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [28]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 42,
        .sysState        = SysState_EventCallback,
        .eventParam      = 15, // `func_800D719C`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [29]
    {
        .completeFlag = EventFlag_1540,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [30]
    {
        .completeFlag = EventFlag_1535,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [31]
    {
        .completeFlag = EventFlag_1535,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 10,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [32]
    {
        .requiredFlag = EventFlag_M3S03_PickupBasementStoreroomKey,
        .completeFlag = EventFlag_256,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D59D4`
    },
    // [33]
    {
        .requiredFlag = EventFlag_M3S03_PickupBasementStoreroomKey,
        .completeFlag = EventFlag_256,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 11,
        .requiredItemId    = InvItemId_BasementStoreroomKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D59D4`
    },
    // [34]
    {
        .requiredFlag = EventFlag_MapMark_FogHospital3F_NearElevatorBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 15,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [35]
    {
        .requiredFlag = EventFlag_MapMark_FogHospital3F_NearElevatorBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 11,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [36]
    {
        .completeFlag = EventFlag_1536,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [37]
    {
        .requiredFlag = EventFlag_M3S05_CabinetPushed,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 17,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [38]
    {
        .requiredFlag = EventFlag_M3S05_CabinetPushed,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 16,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [39]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 20,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 18,
    },
    // [40]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 22,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 23,
        .sfxPairIdx = SfxPairIdx_14,
        .setCameraRail      = 1,
    },
    // [41]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 23,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 22,
        .sfxPairIdx = SfxPairIdx_14,
    },
    // [42]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 25,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [43]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 24,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 26,
        .sfxPairIdx = SfxPairIdx_14,
        .setCameraRail      = 1,
    },
    // [44]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 26,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 24,
        .sfxPairIdx = SfxPairIdx_14,
        .setCameraRail      = 1,
    },
    // [45]
    {
        .completeFlag = EventFlag_259,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 29,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 34,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [46]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 29,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 34,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [47]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 34,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 29,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [48]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 27,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 33,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [49]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 33,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 27,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [50]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 28,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [51]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 30,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 35,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [52]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 35,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 30,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [53]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 31,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [54]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 32,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [55]
    {
        .requiredFlag = EventFlag_288,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 43,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 30,
    },
    // [56]
    {
        .requiredFlag = EventFlag_288,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 30,
    },
    // [57]
    {
        .requiredFlag = EventFlag_288,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 30,
    },
    // [58]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 47,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 32,
    },
    // [59]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 48,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 32,
    },
    // [60]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 49,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 32,
    },
    // [61]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 50,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 32,
    },
    // [62]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 51,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [63]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 52,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [64]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 53,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [65]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 54,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [66]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 55,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [67]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 56,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [68]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 57,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [69]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 58,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [70]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 59,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [71]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 60,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [72]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 61,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [73]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 62,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [74]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 63,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [75]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 64,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [76]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 65,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [77]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 66,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [78]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 67,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [79]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 68,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 33,
    },
    // [80]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 69,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 37,
    },
    // [81]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 70,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 37,
    },
    // [82]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 71,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 37,
    },
    // [83]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 72,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 37,
    },
    // [84]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 73,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 37,
    },
    // [85]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 74,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 37,
    },
    // [86]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 75,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 37,
    },
    // [87]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 76,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 37,
    },
    // [88]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 77,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 36,
    },
    // [89]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 78,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 36,
    },
    // [90]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 79,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 36,
    },
    // [91]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 80,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 36,
    },
    // [92]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 81,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 36,
    },
    // [93]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 82,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 36,
    },
    // [94]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 83,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 36,
    },
    // [95]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 84,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 36,
    },
    // [96]
    {
        .requiredFlag = EventFlag_288,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 85,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 39,
    },
    // [97]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 86,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 38,
    },
    // [98]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 87,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 38,
    },
    // [99]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 88,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 35,
    },
    // [100]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 89,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 35,
    },
    // [101]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 90,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 35,
    },
    // [102]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 91,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 38,
    },
    // [103]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
