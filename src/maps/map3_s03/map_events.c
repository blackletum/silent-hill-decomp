#include "bodyprog/bodyprog.h"
#include "maps/map3/map3_s03.h"

s_EventData MAP_EVENTS[136] = {
    // [0]
    {
        .completeFlag = EventFlag_M3S03_FirstAidKit0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 126,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D151C`
    },
    // [1]
    {
        .completeFlag = EventFlag_M3S03_HealthDrink,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 127,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D151C`
    },
    // [2]
    {
        .completeFlag = EventFlag_M3S03_HandgunBullets,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 128,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D151C`
    },
    // [3]
    {
        .completeFlag = EventFlag_M3S03_FirstAidKit1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 129,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D151C`
    },
    // [4]
    {
        .completeFlag = EventFlag_M3S03_ShotgunShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 130,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D151C`
    },
    // [5]
    {
        .completeFlag = EventFlag_214,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 38,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 73,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [6]
    {
        .completeFlag = EventFlag_214,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 73,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [7]
    {
        .completeFlag = EventFlag_215,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 1,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 73,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [8]
    {
        .completeFlag = EventFlag_215,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 73,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [9]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 125,
        .sysState       = SysState_EventCallback,
        .eventParam     = 20, // `sharedFunc_800D15F0_3_s01`
    },
    // [10]
    {
        .requiredFlag = EventFlag_216,
        .completeFlag = EventFlag_220,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 124,
        .mapIdx            = MapIdx_MAP3_S05,
    },
    // [11]
    {
        .requiredFlag = EventFlag_217,
        .completeFlag = EventFlag_221,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 123,
        .mapIdx            = MapIdx_MAP3_S04,
    },
    // [12]
    {
        .requiredFlag = EventFlag_218,
        .completeFlag = EventFlag_222,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 38,
    },
    // [13]
    {
        .requiredFlag = EventFlag_219,
        .completeFlag = EventFlag_223,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 1,
    },
    // [14]
    {
        .completeFlag = EventFlag_250,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 87,
        .requiredItemId    = InvItemId_BloodPack,
        .sysState          = SysState_EventCallback,
        .eventParam        = 17, // `func_800D2CDC`
    },
    // [15]
    {
        .completeFlag = EventFlag_M3S03_PickupPlateOfHatter,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 78,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D1774`
    },
    // [16]
    {
        .completeFlag = EventFlag_M3S03_PickupPlateOfCat,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 77,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800D17A0`
    },
    // [17]
    {
        .completeFlag = EventFlag_M3S03_PickupPlateOfTurtle,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 76,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D17CC`
    },
    // [18]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 92,
        .sysState        = SysState_EventCallback,
        .eventParam      = 19, // `func_800D3128`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [19]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 79,
        .sysState       = SysState_EventCallback,
        .eventParam     = 8, // `func_800D26D0`
    },
    // [20]
    {
        .requiredFlag = EventFlag_254,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 74,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 26,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [21]
    {
        .completeFlag = EventFlag_254,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 74,
        .requiredItemId    = InvItemId_VideoTape,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `func_800D27F4`
    },
    // [22]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 74,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(54),
    },
    // [23]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 85,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 11,
    },
    // [24]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 86,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 11,
    },
    // [25]
    {
        .completeFlag = EventFlag_M3S03_PickupBloodPack,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 75,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800D2C2C`
    },
    // [26]
    {
        .completeFlag = EventFlag_M3S03_PickupDisinfectingAlcohol,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 93,
        .sysState          = SysState_EventCallback,
        .eventParam        = 14, // `func_800D2C58`
    },
    // [27]
    {
        .completeFlag = EventFlag_M3S03_PickupLighter,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 80,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `func_800D2C84`
    },
    // [28]
    {
        .completeFlag = EventFlag_M3S03_PickupBasementStoreroomKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 81,
        .sysState          = SysState_EventCallback,
        .eventParam        = 16, // `func_800D2CB0`
    },
    // [29]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 82,
        .sysState       = SysState_EventCallback,
        .eventParam     = 9, // `func_800D2708`
    },
    // [30]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 83,
        .sysState       = SysState_EventCallback,
        .eventParam     = 10, // `func_800D2740`
    },
    // [31]
    {
        .requiredFlag = EventFlag_1611,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [32]
    {
        .requiredFlag = EventFlag_1611,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 3,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [33]
    {
        .completeFlag = EventFlag_1611,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [34]
    {
        .completeFlag = EventFlag_MapMark_AltHospital3F_StairsArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [35]
    {
        .completeFlag = EventFlag_MapMark_AltHospital3F_Room301Arrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [36]
    {
        .completeFlag = EventFlag_MapMark_AltHospital3F_Room303Broken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 32,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [37]
    {
        .completeFlag = EventFlag_MapMark_AltHospital3F_Room303Broken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 32,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 6,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [38]
    {
        .completeFlag = EventFlag_1616,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [39]
    {
        .completeFlag = EventFlag_1619,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 30,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [40]
    {
        .completeFlag = EventFlag_1619,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 8,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [41]
    {
        .completeFlag = EventFlag_MapMark_AltHospital3F_LinenRoomLeftArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 31,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [42]
    {
        .completeFlag = EventFlag_1623,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 33,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [43]
    {
        .completeFlag = EventFlag_1623,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 33,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 9,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [44]
    {
        .completeFlag = EventFlag_1625,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 11,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [45]
    {
        .completeFlag = EventFlag_1625,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 10,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [46]
    {
        .completeFlag = EventFlag_1628,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [47]
    {
        .completeFlag = EventFlag_1627,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 28,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [48]
    {
        .completeFlag = EventFlag_1627,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 13,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [49]
    {
        .completeFlag = EventFlag_1631,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 20,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [50]
    {
        .completeFlag = EventFlag_1631,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 20,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 14,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [51]
    {
        .completeFlag = EventFlag_1633,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 27,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [52]
    {
        .completeFlag = EventFlag_1633,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 27,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 15,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [53]
    {
        .completeFlag = EventFlag_1635,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 26,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [54]
    {
        .completeFlag = EventFlag_1635,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 16,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [55]
    {
        .completeFlag = EventFlag_1636,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [56]
    {
        .completeFlag = EventFlag_1639,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 25,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [57]
    {
        .completeFlag = EventFlag_1639,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 25,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 18,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [58]
    {
        .completeFlag = EventFlag_1641,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 19,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 34,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [59]
    {
        .completeFlag = EventFlag_1641,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 19,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [60]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 21,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 22,
    },
    // [61]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 23,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 24,
    },
    // [62]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 35,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 36,
    },
    // [63]
    {
        .requiredFlag = EventFlag_1565,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 41,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [64]
    {
        .requiredFlag = EventFlag_1565,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 40,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [65]
    {
        .completeFlag = EventFlag_1565,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [66]
    {
        .completeFlag = EventFlag_MapMark_AltHospital2F_StairsArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [67]
    {
        .completeFlag = EventFlag_MapMark_AltHospital2F_Room202Broken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 70,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [68]
    {
        .completeFlag = EventFlag_MapMark_AltHospital2F_Room202Broken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 70,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 42,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [69]
    {
        .completeFlag = EventFlag_1568,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 43,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [70]
    {
        .completeFlag = EventFlag_1571,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 69,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [71]
    {
        .completeFlag = EventFlag_1571,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 69,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 44,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [72]
    {
        .completeFlag = EventFlag_1573,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 66,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [73]
    {
        .completeFlag = EventFlag_1573,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 45,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [74]
    {
        .completeFlag = EventFlag_1575,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 68,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [75]
    {
        .completeFlag = EventFlag_1575,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 68,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 67,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [76]
    {
        .requiredFlag = EventFlag_MapMark_713,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 71,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [77]
    {
        .requiredFlag = EventFlag_MapMark_713,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 71,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 46,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [78]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Item,
        .mapPointIdx     = 71,
        .requiredItemId  = InvItemId_PlateOfTurtle,
        .sysState        = SysState_EventCallback,
        .eventParam      = 7, // `func_800D1A58`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [79]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Item,
        .mapPointIdx     = 71,
        .requiredItemId  = InvItemId_PlateOfHatter,
        .sysState        = SysState_EventCallback,
        .eventParam      = 7, // `func_800D1A58`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [80]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Item,
        .mapPointIdx     = 71,
        .requiredItemId  = InvItemId_PlateOfCat,
        .sysState        = SysState_EventCallback,
        .eventParam      = 7, // `func_800D1A58`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [81]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Item,
        .mapPointIdx     = 71,
        .requiredItemId  = InvItemId_PlateOfQueen,
        .sysState        = SysState_EventCallback,
        .eventParam      = 7, // `func_800D1A58`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [82]
    {
        .completeFlag = EventFlag_281,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 71,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `func_800D1A58`
    },
    // [83]
    {
        .requiredFlag = EventFlag_1579,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 47,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 48,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [84]
    {
        .requiredFlag = EventFlag_1579,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 48,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 47,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [85]
    {
        .completeFlag = EventFlag_1579,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 47,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [86]
    {
        .completeFlag = EventFlag_1578,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 48,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [87]
    {
        .completeFlag = EventFlag_1580,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 49,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [88]
    {
        .completeFlag = EventFlag_1582,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 50,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [89]
    {
        .completeFlag = EventFlag_1585,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 57,
        .sfxPairIdx        = SfxPairIdx_13,
    },
    // [90]
    {
        .completeFlag = EventFlag_1585,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 57,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 51,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [91]
    {
        .completeFlag = EventFlag_1587,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 52,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 63,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [92]
    {
        .completeFlag = EventFlag_1587,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 63,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 52,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [93]
    {
        .completeFlag = EventFlag_1588,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 53,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [94]
    {
        .completeFlag = EventFlag_MapMark_AltHospital3F_NearElevatorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 54,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [95]
    {
        .completeFlag = EventFlag_1593,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 55,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 62,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [96]
    {
        .completeFlag = EventFlag_1593,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 62,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 55,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [97]
    {
        .completeFlag = EventFlag_MapMark_AltHospital3F_Room305Broken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 56,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 72,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [98]
    {
        .completeFlag = EventFlag_MapMark_AltHospital3F_Room305Broken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 72,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 56,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [99]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 58,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 59,
    },
    // [100]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 60,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 61,
        .mapIdx      = MapIdx_MAP3_S04,
    },
    // [101]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 88,
        .sysState       = SysState_EventCallback,
        .eventParam     = 18, // `func_800D30FC`
    },
    // [102]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 89,
        .sysState       = SysState_EventCallback,
        .eventParam     = 18, // `func_800D30FC`
    },
    // [103]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 90,
        .sysState       = SysState_EventCallback,
        .eventParam     = 18, // `func_800D30FC`
    },
    // [104]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 91,
        .sysState       = SysState_EventCallback,
        .eventParam     = 18, // `func_800D30FC`
    },
    // [105]
    {
        .requiredFlag = EventFlag_M3S03_PickupDisinfectingAlcohol,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 93,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(46),
    },
    // [106]
    {
        .requiredFlag = EventFlag_M3S03_PickupDisinfectingAlcohol,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 94,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(46),
    },
    // [107]
    {
        .requiredFlag = EventFlag_M3S03_PickupDisinfectingAlcohol,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 95,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(46),
    },
    // [108]
    {
        .requiredFlag = EventFlag_M3S03_PickupDisinfectingAlcohol,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 96,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(46),
    },
    // [109]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 97,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(56),
    },
    // [110]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 98,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(56),
    },
    // [111]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 99,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(56),
    },
    // [112]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 100,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(57),
    },
    // [113]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 101,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(57),
    },
    // [114]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 102,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(59),
    },
    // [115]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 103,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(59),
    },
    // [116]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 104,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(59),
    },
    // [117]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 105,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(59),
    },
    // [118]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 106,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(60),
    },
    // [119]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 107,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(60),
    },
    // [120]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 108,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(58),
    },
    // [121]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 109,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(58),
    },
    // [122]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 110,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(58),
    },
    // [123]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 111,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(61),
    },
    // [124]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 112,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(61),
    },
    // [125]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 113,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(61),
    },
    // [126]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 114,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(61),
    },
    // [127]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 115,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(60),
    },
    // [128]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 116,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(60),
    },
    // [129]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 117,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(60),
    },
    // [130]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 118,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(60),
    },
    // [131]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 119,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(58),
    },
    // [132]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 120,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(58),
    },
    // [133]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 121,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(58),
    },
    // [134]
    {
        .completeFlag = EventFlag_1642,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 122,
        .sysState          = SysState_EventSetFlag,
    },
    // [135]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
