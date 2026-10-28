#include "bodyprog/bodyprog.h"
#include "maps/map7/map7_s02.h"

s_EventData MAP_EVENTS[251] = {
    // [0]
    {
        .completeFlag = EventFlag_M7S01_RifleShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 212,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M7S01_HandgunBullets0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 213,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M7S01_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 214,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M7S01_HandgunBullets1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 215,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .completeFlag = EventFlag_M7S01_ShotgunShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 216,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [5]
    {
        .completeFlag = EventFlag_M7S01_FirstAidKit,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 217,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [6]
    {
        .completeFlag = EventFlag_M7S01_HandgunBullets2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 218,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [7]
    {
        .completeFlag = EventFlag_M7S01_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 219,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [8]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 143,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 22,
    },
    // [9]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 144,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 22,
    },
    // [10]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 157,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 23,
    },
    // [11]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 158,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 23,
    },
    // [12]
    {
        .completeFlag = EventFlag_488,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 109,
        .sysState          = SysState_EventCallback,
        .eventParam        = 45, // `func_800E32E0`
    },
    // [13]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Item,
        .mapPointIdx    = 102,
        .requiredItemId = InvItemId_VideoTape,
        .sysState       = SysState_EventCallback,
        .eventParam     = 8, // `func_800DB738`
    },
    // [14]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 102,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(151),
    },
    // [15]
    {
        .requiredFlag = EventFlag_547,
        .completeFlag = EventFlag_548,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `func_800DBB34`
    },
    // [16]
    {
        .completeFlag = EventFlag_M7S02_PickupAnkh,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 100,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `MapEvent_AnkhTake`
    },
    // [17]
    {
        .completeFlag = EventFlag_M7S02_PickupAnkh,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 101,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `MapEvent_AnkhTake`
    },
    // [18]
    {
        .completeFlag = EventFlag_556,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 99,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `func_800DC14C`
    },
    // [19]
    {
        .requiredFlag = EventFlag_556,
        .completeFlag = EventFlag_M7S02_PickupKeyOfBethor,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 98,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `func_800DC778`
    },
    // [20]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Item,
        .mapPointIdx    = 96,
        .requiredItemId = InvItemId_RingOfContract,
        .sysState       = SysState_EventCallback,
        .eventParam     = 14, // `func_800DC954`
    },
    // [21]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 96,
        .sysState       = SysState_EventCallback,
        .eventParam     = 15, // `func_800DCD00`
    },
    // [22]
    {
        .requiredFlag = EventFlag_553,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 104,
        .sysState          = SysState_EventCallback,
        .eventParam        = 16, // `func_800DD2D4`
    },
    // [23]
    {
        .requiredFlag = EventFlag_554,
        .completeFlag = EventFlag_555,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 104,
        .sysState          = SysState_EventCallback,
        .eventParam        = 17, // `func_800DD9E8`
    },
    // [24]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 95,
        .sysState       = SysState_EventCallback,
        .eventParam     = 18, // `func_800DDEC8`
    },
    // [25]
    {
        .requiredFlag = EventFlag_550,
        .completeFlag = EventFlag_551,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 20, // `func_800DE1FC`
    },
    // [26]
    {
        .completeFlag = EventFlag_M7S02_PickupDiskOfOuroboros,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 93,
        .sysState          = SysState_EventCallback,
        .eventParam        = 21, // `MapEvent_DiskOfOuroborosTake`
    },
    // [27]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 94,
        .sysState       = SysState_EventCallback,
        .eventParam     = 43, // `func_800E2DC0`
    },
    // [28]
    {
        .requiredFlag = EventFlag_559,
        .completeFlag = EventFlag_560,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 22, // `func_800DF21C`
    },
    // [29]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 3,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(132),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [30]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 4,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(132),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [31]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 5,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 13,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [32]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 13,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 5,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [33]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 6,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 16,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [34]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 16,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 6,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [35]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 7,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 17,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [36]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 17,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 7,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [37]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 8,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 18,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [38]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 18,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 8,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [39]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 9,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 19,
        .sfxPairIdx = SfxPairIdx_14,
    },
    // [40]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 19,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 9,
        .sfxPairIdx = SfxPairIdx_14,
        .setCameraRail      = 1,
    },
    // [41]
    {
        .requiredFlag = EventFlag_546,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 30,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [42]
    {
        .requiredFlag = EventFlag_546,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 10,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [43]
    {
        .completeFlag = EventFlag_546,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [44]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 10,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [45]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 11,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 53,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
        .mapIdx          = MapIdx_MAP0_S01,
    },
    // [46]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 53,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 11,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
        .mapIdx          = MapIdx_MAP0_S01,
    },
    // [47]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 12,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 71,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [48]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 71,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 12,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [49]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 20,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 26,
    },
    // [50]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 24,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 21,
    },
    // [51]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 25,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 27,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [52]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 27,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 25,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [53]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 28,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 29,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [54]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 29,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 28,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [55]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 31,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 39,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [56]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 39,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 31,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [57]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 32,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 51,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [58]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 51,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 32,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [59]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 33,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 52,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [60]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 52,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 33,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [61]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 40,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 48,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [62]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 48,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 40,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [63]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 41,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 49,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [64]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 49,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 41,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [65]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 54,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 62,
        .sfxPairIdx = SfxPairIdx_12,
        .mapIdx          = MapIdx_MAP0_S01,
    },
    // [66]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 62,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 54,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
        .mapIdx          = MapIdx_MAP0_S01,
    },
    // [67]
    {
        .requiredFlag = EventFlag_488,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 55,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 63,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [68]
    {
        .requiredFlag = EventFlag_488,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 63,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 55,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [69]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 55,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [70]
    {
        .requiredFlag = EventFlag_M7S01_PickupAmuletOfSolomon,
        .completeFlag = EventFlag_481,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 65,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 92,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [71]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 64,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 65,
        .sfxPairIdx = SfxPairIdx_13,
    },
    // [72]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 65,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 64,
        .sfxPairIdx = SfxPairIdx_13,
    },
    // [73]
    {
        .requiredFlag = EventFlag_492,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 69,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [74]
    {
        .requiredFlag = EventFlag_492,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 69,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 67,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [75]
    {
        .completeFlag = EventFlag_493,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_EventCallback,
        .eventParam        = 39, // `sharedFunc_800DB60C_7_s01`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [76]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 68,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 70,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [77]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 70,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 68,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [78]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 72,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 78,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [79]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 78,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 72,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [80]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 73,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 79,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [81]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 79,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 73,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [82]
    {
        .requiredFlag = EventFlag_M7S02_PickupKeyOfAratron,
        .completeFlag = EventFlag_534,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 74,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_KeyOfAratronUse`
    },
    // [83]
    {
        .requiredFlag = EventFlag_M7S02_PickupKeyOfAratron,
        .completeFlag = EventFlag_534,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 74,
        .requiredItemId    = InvItemId_KeyOfAratron,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_KeyOfAratronUse`
    },
    // [84]
    {
        .requiredFlag = EventFlag_534,
        .completeFlag = EventFlag_550,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 74,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 82,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [85]
    {
        .requiredFlag = EventFlag_534,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 74,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 82,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [86]
    {
        .requiredFlag = EventFlag_534,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 82,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 74,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [87]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 74,
        .sysState       = SysState_EventCallback,
        .eventParam     = 5, // `func_800DB52C`
    },
    // [88]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 74,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [89]
    {
        .requiredFlag = EventFlag_M7S02_PickupKeyOfBethor,
        .completeFlag = EventFlag_533,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 75,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_KeyOfBethorUse`
    },
    // [90]
    {
        .requiredFlag = EventFlag_M7S02_PickupKeyOfBethor,
        .completeFlag = EventFlag_533,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 75,
        .requiredItemId    = InvItemId_KeyOfBethor,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `MapEvent_KeyOfBethorUse`
    },
    // [91]
    {
        .requiredFlag = EventFlag_533,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 75,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 83,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [92]
    {
        .requiredFlag = EventFlag_533,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 83,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 75,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [93]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 75,
        .sysState       = SysState_EventCallback,
        .eventParam     = 4, // `func_800DB498`
    },
    // [94]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 75,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [95]
    {
        .completeFlag = EventFlag_547,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 76,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 84,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [96]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 76,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 84,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [97]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 84,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 76,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [98]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 77,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 85,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [99]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 85,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 77,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [100]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 80,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 81,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [101]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 81,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 80,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [102]
    {
        .requiredFlag = EventFlag_545,
        .completeFlag = EventFlag_559,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 86,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 87,
        .sfxPairIdx        = SfxPairIdx_14,
    },
    // [103]
    {
        .requiredFlag = EventFlag_545,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 86,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 87,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [104]
    {
        .requiredFlag = EventFlag_545,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 87,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 86,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [105]
    {
        .completeFlag = EventFlag_564,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 86,
        .requiredItemId    = InvItemId_AmuletOfSolomon,
        .sysState          = SysState_EventCallback,
        .eventParam        = 44, // `func_800E2DEC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [106]
    {
        .completeFlag = EventFlag_565,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 86,
        .requiredItemId    = InvItemId_CrestOfMercury,
        .sysState          = SysState_EventCallback,
        .eventParam        = 44, // `func_800E2DEC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [107]
    {
        .completeFlag = EventFlag_566,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 86,
        .requiredItemId    = InvItemId_Ankh,
        .sysState          = SysState_EventCallback,
        .eventParam        = 44, // `func_800E2DEC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [108]
    {
        .completeFlag = EventFlag_567,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 86,
        .requiredItemId    = InvItemId_DaggerOfMelchior,
        .sysState          = SysState_EventCallback,
        .eventParam        = 44, // `func_800E2DEC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [109]
    {
        .completeFlag = EventFlag_568,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 86,
        .requiredItemId    = InvItemId_DiskOfOuroboros,
        .sysState          = SysState_EventCallback,
        .eventParam        = 44, // `func_800E2DEC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [110]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 86,
        .sysState       = SysState_EventCallback,
        .eventParam     = 44, // `func_800E2DEC`
    },
    // [111]
    {
        .triggerType     = EventTriggerType_TouchAabb,
        .mapPointIdx     = 88,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 91,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
        .mapIdx          = MapIdx_MAP7_S03,
    },
    // [112]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 118,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(109),
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [113]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 119,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(109),
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [114]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 120,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(109),
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [115]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 121,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(109),
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [116]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 122,
        .sysState       = SysState_EventCallback,
        .eventParam     = 23, // `func_800DFA54`
    },
    // [117]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 123,
        .sysState       = SysState_EventCallback,
        .eventParam     = 23, // `func_800DFA54`
    },
    // [118]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 124,
        .sysState       = SysState_EventCallback,
        .eventParam     = 23, // `func_800DFA54`
    },
    // [119]
    {
        .requiredFlag = EventFlag_M7S01_PickupPliers,
        .completeFlag = EventFlag_M7S01_PickupScrewdriver,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 108,
        .sysState          = SysState_EventCallback,
        .eventParam        = 24, // `MapEvent_ScrewdriverTake`
    },
    // [120]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 115,
        .sysState       = SysState_EventCallback,
        .eventParam     = 25, // `func_800DFAAC`
    },
    // [121]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 114,
        .sysState       = SysState_EventCallback,
        .eventParam     = 26, // `func_800DFAE4`
    },
    // [122]
    {
        .completeFlag = EventFlag_M7S01_PickupAmuletOfSolomon,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 113,
        .sysState          = SysState_EventCallback,
        .eventParam        = 27, // `MapEvent_AmuletOfSolomonTake`
    },
    // [123]
    {
        .requiredFlag = EventFlag_481,
        .completeFlag = EventFlag_482,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 28, // `func_800DA248`
    },
    // [124]
    {
        .requiredFlag = EventFlag_482,
        .completeFlag = EventFlag_483,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 5,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [125]
    {
        .requiredFlag = EventFlag_483,
        .completeFlag = EventFlag_484,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 29, // `func_800DAA4C`
    },
    // [126]
    {
        .requiredFlag = EventFlag_484,
        .completeFlag = EventFlag_569,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 211,
    },
    // [127]
    {
        .requiredFlag = EventFlag_569,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 112,
        .sysState          = SysState_EventCallback,
        .eventParam        = 30, // `func_800DFB48`
    },
    // [128]
    {
        .completeFlag = EventFlag_500,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 127,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DFDDC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [129]
    {
        .completeFlag = EventFlag_501,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 128,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DFDDC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [130]
    {
        .completeFlag = EventFlag_502,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 129,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DFDDC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [131]
    {
        .completeFlag = EventFlag_503,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 130,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DFDDC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [132]
    {
        .completeFlag = EventFlag_504,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 131,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DFDDC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [133]
    {
        .completeFlag = EventFlag_505,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 132,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DFDDC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [134]
    {
        .completeFlag = EventFlag_506,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 133,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DFDDC`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [135]
    {
        .completeFlag = EventFlag_M7S01_PickupCrestOfMercury,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 134,
        .sysState          = SysState_EventCallback,
        .eventParam        = 32, // `MapEvent_CrestOfMercuryTake`
    },
    // [136]
    {
        .completeFlag = EventFlag_M7S01_PickupCrestOfMercury,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 135,
        .sysState          = SysState_EventCallback,
        .eventParam        = 32, // `MapEvent_CrestOfMercuryTake`
    },
    // [137]
    {
        .completeFlag = EventFlag_M7S01_PickupCrestOfMercury,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 136,
        .sysState          = SysState_EventCallback,
        .eventParam        = 32, // `MapEvent_CrestOfMercuryTake`
    },
    // [138]
    {
        .completeFlag = EventFlag_M7S01_PickupRingOfContract,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 137,
        .sysState          = SysState_EventCallback,
        .eventParam        = 33, // `MapEvent_RingOfContractTake`
    },
    // [139]
    {
        .completeFlag = EventFlag_M7S01_PickupRingOfContract,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 138,
        .sysState          = SysState_EventCallback,
        .eventParam        = 33, // `MapEvent_RingOfContractTake`
    },
    // [140]
    {
        .completeFlag = EventFlag_M7S01_PickupRingOfContract,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 139,
        .sysState          = SysState_EventCallback,
        .eventParam        = 33, // `MapEvent_RingOfContractTake`
    },
    // [141]
    {
        .completeFlag = EventFlag_M7S01_PickupCamera,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 106,
        .sysState          = SysState_EventCallback,
        .eventParam        = 34, // `MapEvent_CameraTake`
    },
    // [142]
    {
        .requiredFlag = EventFlag_M7S02_PickupKeyOfAratron,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 103,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(131),
    },
    // [143]
    {
        .completeFlag = EventFlag_486,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 103,
        .requiredItemId    = InvItemId_Screwdriver,
        .sysState          = SysState_EventCallback,
        .eventParam        = 35, // `func_800E0CB4`
    },
    // [144]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 103,
        .sysState       = SysState_EventCallback,
        .eventParam     = 36, // `func_800E0FF0`
    },
    // [145]
    {
        .completeFlag = EventFlag_496,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 125,
        .requiredItemId    = InvItemId_Camera,
        .sysState          = SysState_EventCallback,
        .eventParam        = 38, // `func_800E1398`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [146]
    {
        .completeFlag = EventFlag_497,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 126,
        .requiredItemId    = InvItemId_Camera,
        .sysState          = SysState_EventCallback,
        .eventParam        = 38, // `func_800E1398`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [147]
    {
        .completeFlag = EventFlag_496,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 125,
        .sysState          = SysState_EventCallback,
        .eventParam        = 37, // `func_800E12E4`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [148]
    {
        .completeFlag = EventFlag_497,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 126,
        .sysState          = SysState_EventCallback,
        .eventParam        = 37, // `func_800E12E4`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [149]
    {
        .requiredFlag = EventFlag_M5S03_SeenSecondNewspaper,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 111,
        .sysState          = SysState_EventCallback,
        .eventParam        = 40, // `func_800E1DAC`
    },
    // [150]
    {
        .requiredFlag = EventFlag_M7S00_BotanyBookReadable,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 110,
        .sysState          = SysState_EventCallback,
        .eventParam        = 41, // `func_800E1FF4`
    },
    // [151]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 110,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(158),
    },
    // [152]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 116,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(133),
    },
    // [153]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 23,
        .sysState       = SysState_EventCallback,
        .eventParam     = 42, // `sharedFunc_800D15F0_3_s01`
    },
    // [154]
    {
        .requiredFlag = EventFlag_549,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(132),
    },
    // [155]
    {
        .requiredFlag = EventFlag_420,
        .completeFlag = EventFlag_213,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [156]
    {
        .requiredFlag = EventFlag_549,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 140,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(132),
    },
    // [157]
    {
        .requiredFlag = EventFlag_420,
        .completeFlag = EventFlag_213,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 140,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [158]
    {
        .requiredFlag = EventFlag_549,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(132),
    },
    // [159]
    {
        .requiredFlag = EventFlag_420,
        .completeFlag = EventFlag_214,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [160]
    {
        .requiredFlag = EventFlag_549,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 141,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(132),
    },
    // [161]
    {
        .requiredFlag = EventFlag_420,
        .completeFlag = EventFlag_214,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 141,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [162]
    {
        .requiredFlag = EventFlag_420,
        .completeFlag = EventFlag_215,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [163]
    {
        .requiredFlag = EventFlag_420,
        .completeFlag = EventFlag_215,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 142,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [164]
    {
        .requiredFlag = EventFlag_217,
        .completeFlag = EventFlag_221,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 140,
    },
    // [165]
    {
        .requiredFlag = EventFlag_218,
        .completeFlag = EventFlag_222,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 141,
    },
    // [166]
    {
        .requiredFlag = EventFlag_219,
        .completeFlag = EventFlag_561,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 142,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [167]
    {
        .requiredFlag = EventFlag_219,
        .completeFlag = EventFlag_223,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 142,
    },
    // [168]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 34,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [169]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 35,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [170]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 36,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [171]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 37,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [172]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 38,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [173]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 42,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [174]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 43,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [175]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 44,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [176]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 45,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [177]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 50,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [178]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 56,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [179]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 57,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [180]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 58,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [181]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 59,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [182]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 60,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [183]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 61,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [184]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 89,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [185]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 90,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [186]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 145,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(135),
    },
    // [187]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 146,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(136),
    },
    // [188]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 147,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(137),
    },
    // [189]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 148,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(138),
    },
    // [190]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 150,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(141),
    },
    // [191]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 151,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(141),
    },
    // [192]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 154,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(143),
    },
    // [193]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 155,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(144),
    },
    // [194]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 156,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(145),
    },
    // [195]
    {
        .triggerType    = EventTriggerType_TouchAabb,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 149,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(140),
    },
    // [196]
    {
        .triggerType    = EventTriggerType_TouchAabb,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 152,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(142),
    },
    // [197]
    {
        .triggerType    = EventTriggerType_TouchAabb,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 153,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(142),
    },
    // [198]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 159,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [199]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 160,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [200]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 161,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [201]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 162,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [202]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 163,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(149),
    },
    // [203]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 164,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(149),
    },
    // [204]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 165,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(149),
    },
    // [205]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 166,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(150),
    },
    // [206]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 167,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(150),
    },
    // [207]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 168,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(150),
    },
    // [208]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 169,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(150),
    },
    // [209]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 170,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(150),
    },
    // [210]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 171,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(150),
    },
    // [211]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 172,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(150),
    },
    // [212]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 173,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [213]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 174,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [214]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 175,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [215]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 176,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [216]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 177,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [217]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 178,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [218]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 179,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [219]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 180,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [220]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 181,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [221]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 182,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [222]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 183,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [223]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 184,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [224]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 185,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [225]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 186,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [226]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 187,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [227]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 188,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [228]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 189,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [229]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 190,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(152),
    },
    // [230]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 191,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(157),
    },
    // [231]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 192,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(157),
    },
    // [232]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 193,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(157),
    },
    // [233]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 194,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(157),
    },
    // [234]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 195,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(153),
    },
    // [235]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 196,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(153),
    },
    // [236]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 197,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [237]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 198,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [238]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 199,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [239]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 200,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(154),
    },
    // [240]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 201,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(154),
    },
    // [241]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 202,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(154),
    },
    // [242]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 203,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(154),
    },
    // [243]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 204,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(153),
    },
    // [244]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 205,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(153),
    },
    // [245]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 206,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(153),
    },
    // [246]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 207,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(153),
    },
    // [247]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 208,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [248]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 209,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [249]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 210,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(148),
    },
    // [250]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
