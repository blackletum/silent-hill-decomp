#include "bodyprog/bodyprog.h"
#include "maps/map2/map2_s00.h"

s_EventData MAP_EVENTS[201] = {
    // [0]
    {
        .completeFlag = EventFlag_M2S00_FirstAidKit0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 139,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [1]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 140,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [2]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 141,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [3]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 142,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [4]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 143,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [5]
    {
        .completeFlag = EventFlag_M2S00_ShotgunShells0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 144,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [6]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 145,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [7]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets3,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 146,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [8]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets4,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 147,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [9]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets5,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 148,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [10]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets6,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 149,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [11]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets7,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 150,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [12]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets8,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 151,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [13]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 152,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [14]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink3,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 153,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [15]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink4,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 154,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [16]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets9,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 155,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [17]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink5,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 156,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [18]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets10,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 157,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [19]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink6,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 158,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [20]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink7,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 159,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [21]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink8,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 160,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [22]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink9,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 161,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [23]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink10,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 162,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [24]
    {
        .completeFlag = EventFlag_M2S00_HealthDrink11,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 163,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [25]
    {
        .completeFlag = EventFlag_M2S00_ShotgunShells1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 164,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [26]
    {
        .completeFlag = EventFlag_M2S00_FirstAidKit1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 165,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [27]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets11,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 166,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [28]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets12,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 167,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [29]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets13,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 168,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [30]
    {
        .completeFlag = EventFlag_M2S00_HandgunBullets14,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 169,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [31]
    {
        .completeFlag = EventFlag_M2S00_FirstAidKit2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 170,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E7B74`
    },
    // [32]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 107,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 5,
    },
    // [33]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 108,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 5,
    },
    // [34]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 109,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 6,
    },
    // [35]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 110,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 6,
    },
    // [36]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 111,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 18,
    },
    // [37]
    {
        .requiredFlag = EventFlag_193,
        .completeFlag = EventFlag_M2S00_WaterWorksCutscene,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `MapEvent_AtWaterWorks`
    },
    // [38]
    {
        .completeFlag = EventFlag_M2S00_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 115,
        .sysState          = SysState_EventCallback,
        .eventParam        = 25, // `MapEvent_PaperMapTake`
    },
    // [39]
    {
        .completeFlag = EventFlag_M2S00_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 116,
        .sysState          = SysState_EventCallback,
        .eventParam        = 25, // `MapEvent_PaperMapTake`
    },
    // [40]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 1,
        .sysState        = SysState_LoadOverlay,
        .sfxPairIdx = SfxPairIdx_1,
        .mapIdx          = MapIdx_MAP0_S01,
    },
    // [41]
    {
        .completeFlag = EventFlag_147,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `MapEvent_CherylsSketchbook`
    },
    // [42]
    {
        .triggerType    = EventTriggerType_TouchFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 11,
        .sysState       = SysState_EventCallback,
        .eventParam     = 10, // `func_800E9470`
    },
    // [43]
    {
        .completeFlag = EventFlag_M2S00_PickupSteelPipe,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_SteelPipeTake`
    },
    // [44]
    {
        .completeFlag = EventFlag_M2S00_PickupSteelPipe,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_SteelPipeTake`
    },
    // [45]
    {
        .completeFlag = EventFlag_M2S00_PickupSteelPipe,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_SteelPipeTake`
    },
    // [46]
    {
        .completeFlag = EventFlag_M2S00_PickupSteelPipe,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_SteelPipeTake`
    },
    // [47]
    {
        .completeFlag = EventFlag_146,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `MapEvent_CutsceneExitCafe`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [48]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 6,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 7,
        .sfxPairIdx = SfxPairIdx_4,
    },
    // [49]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 7,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 6,
        .sfxPairIdx = SfxPairIdx_4,
    },
    // [50]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 8,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 9,
        .sfxPairIdx = SfxPairIdx_4,
    },
    // [51]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 9,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 8,
        .sfxPairIdx = SfxPairIdx_4,
    },
    // [52]
    {
        .completeFlag = EventFlag_M2S00_DogHouseNoteFound,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `MapEvent_DoghouseNote`
    },
    // [53]
    {
        .completeFlag = EventFlag_M2S00_DogHouseNoteFound,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `MapEvent_DoghouseNote`
    },
    // [54]
    {
        .completeFlag = EventFlag_M2S00_DogHouseNoteFound,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `MapEvent_DoghouseNote`
    },
    // [55]
    {
        .completeFlag = EventFlag_M2S00_DogHouseNoteFound,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `MapEvent_DoghouseNote`
    },
    // [56]
    {
        .requiredFlag = EventFlag_M2S00_PickupDogHouseKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 24,
    },
    // [57]
    {
        .requiredFlag = EventFlag_M2S00_DogHouseNoteFound,
        .completeFlag = EventFlag_M2S00_PickupDogHouseKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_DoghouseKeyTake`
    },
    // [58]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 16,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 25,
    },
    // [59]
    {
        .completeFlag = EventFlag_M2S00_PickupKeyOfLion,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800E9A0C`
    },
    // [60]
    {
        .completeFlag = EventFlag_M2S00_PickupKeyOfWoodman,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_EventCallback,
        .eventParam        = 14, // `func_800E9A74`
    },
    // [61]
    {
        .completeFlag = EventFlag_M2S00_PickupKeyOfScarecrow,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 19,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `func_800E9CB4`
    },
    // [62]
    {
        .completeFlag = EventFlag_M2S00_PickupKeyOfScarecrow,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 20,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `func_800E9CB4`
    },
    // [63]
    {
        .completeFlag = EventFlag_M2S00_PickupKeyOfScarecrow,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `func_800E9CB4`
    },
    // [64]
    {
        .requiredFlag = EventFlag_M2S00_PickupDogHouseKey,
        .completeFlag = EventFlag_153,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 22,
        .sysState          = SysState_EventCallback,
        .eventParam        = 16, // `MapEvent_HouseKeyUse`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [65]
    {
        .requiredFlag = EventFlag_M2S00_PickupDogHouseKey,
        .completeFlag = EventFlag_153,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 22,
        .requiredItemId    = InvItemId_HouseKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 16, // `MapEvent_HouseKeyUse`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [66]
    {
        .requiredFlag = EventFlag_153,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 22,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 23,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [67]
    {
        .requiredFlag = EventFlag_153,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 23,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [68]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 22,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [69]
    {
        .requiredFlag = EventFlag_159,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 24,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 25,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [70]
    {
        .requiredFlag = EventFlag_159,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 25,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 24,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [71]
    {
        .requiredFlag = EventFlag_158,
        .completeFlag = EventFlag_159,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 18, // `MapEvent_DoorOfEclipseEnter`
    },
    // [72]
    {
        .requiredFlag = EventFlag_M2S00_DoorOfEclypseOpen,
        .completeFlag = EventFlag_158,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 24,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 25,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [73]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 24,
        .sysState       = SysState_EventCallback,
        .eventParam     = 17, // `func_800E9DD8`
    },
    // [74]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Item,
        .mapPointIdx    = 24,
        .requiredItemId = InvItemId_KeyOfLion,
        .sysState       = SysState_EventCallback,
        .eventParam     = 17, // `func_800E9DD8`
    },
    // [75]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Item,
        .mapPointIdx    = 24,
        .requiredItemId = InvItemId_KeyOfWoodman,
        .sysState       = SysState_EventCallback,
        .eventParam     = 17, // `func_800E9DD8`
    },
    // [76]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Item,
        .mapPointIdx    = 24,
        .requiredItemId = InvItemId_KeyOfScarecrow,
        .sysState       = SysState_EventCallback,
        .eventParam     = 17, // `func_800E9DD8`
    },
    // [77]
    {
        .requiredFlag = EventFlag_M2S00_UnlockedKatanaRoom,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 134,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP0_S02,
    },
    // [78]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 28,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [79]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 26,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 27,
        .sfxPairIdx = SfxPairIdx_11,
    },
    // [80]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 27,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 26,
        .sfxPairIdx = SfxPairIdx_11,
    },
    // [81]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 124,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(64),
    },
    // [82]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 125,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(65),
    },
    // [83]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 126,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(66),
    },
    // [84]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 127,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(66),
    },
    // [85]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 128,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(67),
    },
    // [86]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 29,
        .sysState       = SysState_EventCallback,
        .eventParam     = 19, // `func_800EA6E0`
    },
    // [87]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 30,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 35,
        .sfxPairIdx = SfxPairIdx_6,
    },
    // [88]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 31,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 35,
        .sfxPairIdx = SfxPairIdx_6,
    },
    // [89]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 33,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 32,
        .sfxPairIdx = SfxPairIdx_6,
    },
    // [90]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 34,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 32,
        .sfxPairIdx = SfxPairIdx_6,
    },
    // [91]
    {
        .triggerType     = EventTriggerType_TouchFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 36,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 38,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [92]
    {
        .requiredFlag = EventFlag_MapMark_OldTown_KGordonArrowsOnly,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 39,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [93]
    {
        .requiredFlag = EventFlag_MapMark_OldTown_KGordonArrowsOnly,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 40,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [94]
    {
        .requiredFlag = EventFlag_M1S06_PickupKGordonKey,
        .completeFlag = EventFlag_M2S00_KGordonDoorOpen,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventCallback,
        .eventParam        = 20, // `MapEvent_KGordonKeyUse`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [95]
    {
        .requiredFlag = EventFlag_M1S06_PickupKGordonKey,
        .completeFlag = EventFlag_M2S00_KGordonDoorOpen,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 40,
        .requiredItemId    = InvItemId_KGordonKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 20, // `MapEvent_KGordonKeyUse`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [96]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 40,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [97]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 37,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 38,
        .sfxPairIdx = SfxPairIdx_1,
    },
    // [98]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 38,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 37,
        .sfxPairIdx = SfxPairIdx_1,
    },
    // [99]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 41,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 42,
        .sfxPairIdx = SfxPairIdx_11,
    },
    // [100]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 42,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 41,
        .sfxPairIdx = SfxPairIdx_11,
    },
    // [101]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 43,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [102]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 118,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(64),
    },
    // [103]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 119,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(65),
    },
    // [104]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 120,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(66),
    },
    // [105]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 121,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(67),
    },
    // [106]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 122,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(68),
    },
    // [107]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 123,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(69),
    },
    // [108]
    {
        .requiredFlag = EventFlag_M2S00_KGordonDoorOpen,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 41,
    },
    // [109]
    {
        .requiredFlag = EventFlag_134,
        .completeFlag = EventFlag_140,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
    },
    // [110]
    {
        .requiredFlag = EventFlag_134,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 48,
        .sfxPairIdx        = SfxPairIdx_2,
        .mapIdx            = MapIdx_MAP1_S06,
    },
    // [111]
    {
        .requiredFlag = EventFlag_134,
        .completeFlag = EventFlag_141,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
    },
    // [112]
    {
        .requiredFlag = EventFlag_134,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 47,
        .sfxPairIdx        = SfxPairIdx_2,
        .mapIdx            = MapIdx_MAP1_S06,
    },
    // [113]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 45,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 47,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP1_S00,
    },
    // [114]
    {
        .requiredFlag = EventFlag_M2S00_KGordonDoorOpen,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 41,
    },
    // [115]
    {
        .requiredFlag = EventFlag_134,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 48,
        .sfxPairIdx        = SfxPairIdx_2,
        .mapIdx            = MapIdx_MAP1_S06,
    },
    // [116]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 46,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 48,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP1_S00,
    },
    // [117]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 44,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 40,
    },
    // [118]
    {
        .completeFlag = EventFlag_163,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 50,
        .sysState          = SysState_EventSetFlag,
    },
    // [119]
    {
        .requiredFlag = EventFlag_163,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 49,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 51,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [120]
    {
        .requiredFlag = EventFlag_163,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 49,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [121]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 49,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 52,
        .sfxPairIdx = SfxPairIdx_18,
    },
    // [122]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 52,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 49,
        .sfxPairIdx = SfxPairIdx_18,
    },
    // [123]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 53,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(48),
    },
    // [124]
    {
        .completeFlag = EventFlag_164,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 54,
        .requiredItemId    = InvItemId_DrawbridgeKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 21, // `func_800EA960`
    },
    // [125]
    {
        .requiredFlag = EventFlag_164,
        .completeFlag = EventFlag_165,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 54,
        .sysState          = SysState_EventCallback,
        .eventParam        = 22, // `func_800EAD2C`
    },
    // [126]
    {
        .requiredFlag = EventFlag_165,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 54,
        .sysState          = SysState_EventCallback,
        .eventParam        = 29, // `func_800EB090`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [127]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 54,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 43,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [128]
    {
        .requiredFlag = EventFlag_164,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 117,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(62),
    },
    // [129]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 117,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(63),
    },
    // [130]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 55,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 56,
        .mapIdx      = MapIdx_MAP2_S02,
    },
    // [131]
    {
        .requiredFlag = EventFlag_169,
        .completeFlag = EventFlag_170,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 58,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 59,
        .sfxPairIdx        = SfxPairIdx_4,
    },
    // [132]
    {
        .requiredFlag = EventFlag_170,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 59,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 58,
        .sfxPairIdx        = SfxPairIdx_4,
    },
    // [133]
    {
        .requiredFlag = EventFlag_170,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 58,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 59,
        .sfxPairIdx        = SfxPairIdx_4,
    },
    // [134]
    {
        .requiredFlag = EventFlag_340,
        .completeFlag = EventFlag_169,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 57,
        .sysState          = SysState_EventCallback,
        .eventParam        = 23, // `func_800EB174`
    },
    // [135]
    {
        .requiredFlag = EventFlag_168,
        .completeFlag = EventFlag_169,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 24, // `func_800EB3F4`
    },
    // [136]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 58,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [137]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 61,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [138]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 62,
        .sysState       = SysState_LoadOverlay,
        .eventParam     = 66,
        .mapIdx         = MapIdx_MAP5_S00,
    },
    // [139]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 63,
        .sysState       = SysState_LoadOverlay,
        .eventParam     = 66,
        .mapIdx         = MapIdx_MAP5_S00,
    },
    // [140]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 64,
        .sysState       = SysState_LoadOverlay,
        .eventParam     = 66,
        .mapIdx         = MapIdx_MAP5_S00,
    },
    // [141]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 65,
        .sysState       = SysState_LoadOverlay,
        .eventParam     = 66,
        .mapIdx         = MapIdx_MAP5_S00,
    },
    // [142]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 60,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(49),
    },
    // [143]
    {
        .completeFlag = EventFlag_M2S00_PickupHealthDrink,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800E7D54`
    },
    // [144]
    {
        .completeFlag = EventFlag_M2S00_PickupHealthDrink,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 68,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800E7D54`
    },
    // [145]
    {
        .completeFlag = EventFlag_M2S00_PickupHealthDrink,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 69,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800E7D54`
    },
    // [146]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 67,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 46,
    },
    // [147]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 68,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 46,
    },
    // [148]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 69,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 46,
    },
    // [149]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 70,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [150]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 71,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [151]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 72,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [152]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 73,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [153]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 74,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [154]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 75,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [155]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 76,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [156]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 77,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [157]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 78,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [158]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 79,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [159]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 80,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [160]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 81,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [161]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 82,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [162]
    {
        .completeFlag = EventFlag_MapMark_OldTown_BachmanRdTopCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 83,
        .sysState          = SysState_EventSetFlag,
    },
    // [163]
    {
        .completeFlag = EventFlag_MapMark_OldTown_FinneyStRightCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 84,
        .sysState          = SysState_EventSetFlag,
    },
    // [164]
    {
        .completeFlag = EventFlag_MapMark_OldTown_FinneyStLeftCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 85,
        .sysState          = SysState_EventSetFlag,
    },
    // [165]
    {
        .completeFlag = EventFlag_MapMark_OldTown_MidwitchStTopCross,
        .triggerType       = EventTriggerType_TouchObb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 86,
        .sysState          = SysState_EventSetFlag,
    },
    // [166]
    {
        .completeFlag = EventFlag_MapMark_OldTown_UntitledStLeftCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 87,
        .sysState          = SysState_EventSetFlag,
    },
    // [167]
    {
        .completeFlag = EventFlag_MapMark_OldTown_MidwitchStBotCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 88,
        .sysState          = SysState_EventSetFlag,
    },
    // [168]
    {
        .completeFlag = EventFlag_MapMark_OldTown_BradburyStMidCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 89,
        .sysState          = SysState_EventSetFlag,
    },
    // [169]
    {
        .completeFlag = EventFlag_MapMark_OldTown_BradburyStLeftCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 90,
        .sysState          = SysState_EventSetFlag,
    },
    // [170]
    {
        .completeFlag = EventFlag_MapMark_OldTown_BachmanRdBotCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 91,
        .sysState          = SysState_EventSetFlag,
    },
    // [171]
    {
        .completeFlag = EventFlag_MapMark_OldTown_ElroyStBotCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 92,
        .sysState          = SysState_EventSetFlag,
    },
    // [172]
    {
        .completeFlag = EventFlag_MapMark_OldTown_ElroyStMidCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 93,
        .sysState          = SysState_EventSetFlag,
    },
    // [173]
    {
        .completeFlag = EventFlag_MapMark_OldTown_BachmanRdMidCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 94,
        .sysState          = SysState_EventSetFlag,
    },
    // [174]
    {
        .completeFlag = EventFlag_MapMark_OldTown_BlochStLeftCross,
        .triggerType       = EventTriggerType_TouchObb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 95,
        .sysState          = SysState_EventSetFlag,
    },
    // [175]
    {
        .completeFlag = EventFlag_MapMark_OldTown_LevinStTopCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 96,
        .sysState          = SysState_EventSetFlag,
    },
    // [176]
    {
        .completeFlag = EventFlag_MapMark_OldTown_BlochStRightCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 97,
        .sysState          = SysState_EventSetFlag,
    },
    // [177]
    {
        .completeFlag = EventFlag_MapMark_OldTown_LevinStBotCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 98,
        .sysState          = SysState_EventSetFlag,
    },
    // [178]
    {
        .completeFlag = EventFlag_MapMark_OldTown_MathesonStCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 99,
        .sysState          = SysState_EventSetFlag,
    },
    // [179]
    {
        .requiredFlag = EventFlag_MapMark_61,
        .completeFlag = EventFlag_MapMark_OldTown_BotBridgeCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 100,
        .sysState          = SysState_EventSetFlag,
    },
    // [180]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 101,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 102,
        .sfxPairIdx = SfxPairIdx_5,
        .mapIdx          = MapIdx_MAP0_S02,
    },
    // [181]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 103,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 104,
        .sfxPairIdx = SfxPairIdx_22,
        .mapIdx          = MapIdx_MAP0_S02,
    },
    // [182]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 105,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 106,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP2_S01,
    },
    // [183]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 112,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 114,
        .sfxPairIdx = SfxPairIdx_24,
        .mapIdx          = MapIdx_MAP0_S02,
    },
    // [184]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 113,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 114,
        .sfxPairIdx = SfxPairIdx_24,
        .mapIdx          = MapIdx_MAP0_S02,
    },
    // [185]
    {
        .requiredFlag = EventFlag_M2S00_UsedGasolineOnRockDrill,
        .completeFlag = EventFlag_M2S00_PickupRockDrill,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 131,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800E816C`
    },
    // [186]
    {
        .requiredFlag = EventFlag_M2S00_UsedGasolineOnRockDrill,
        .completeFlag = EventFlag_M2S00_PickupRockDrill,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 132,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800E816C`
    },
    // [187]
    {
        .completeFlag = EventFlag_M2S00_UsedGasolineOnRockDrill,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 131,
        .requiredItemId    = InvItemId_GasolineTank,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(77),
    },
    // [188]
    {
        .completeFlag = EventFlag_M2S00_UsedGasolineOnRockDrill,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 132,
        .requiredItemId    = InvItemId_GasolineTank,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(77),
    },
    // [189]
    {
        .requiredFlag = EventFlag_66,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 131,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(71),
    },
    // [190]
    {
        .requiredFlag = EventFlag_66,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 132,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(71),
    },
    // [191]
    {
        .requiredFlag = EventFlag_M2S00_UsedGasolineOnChainsaw,
        .completeFlag = EventFlag_M2S00_PickupChainsaw,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 133,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800E8198`
    },
    // [192]
    {
        .completeFlag = EventFlag_M2S00_UsedGasolineOnChainsaw,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 133,
        .requiredItemId    = InvItemId_GasolineTank,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(77),
    },
    // [193]
    {
        .requiredFlag = EventFlag_65,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 133,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(74),
    },
    // [194]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 129,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(70),
    },
    // [195]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 130,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(70),
    },
    // [196]
    {
        .completeFlag = EventFlag_172,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 135,
        .sysState          = SysState_EventCallback,
        .eventParam        = 26, // `func_800EB758`
    },
    // [197]
    {
        .completeFlag = EventFlag_173,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 136,
        .sysState          = SysState_EventCallback,
        .eventParam        = 27, // `func_800EB79C`
    },
    // [198]
    {
        .completeFlag = EventFlag_173,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 138,
        .sysState          = SysState_EventCallback,
        .eventParam        = 27, // `func_800EB79C`
    },
    // [199]
    {
        .completeFlag = EventFlag_174,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 137,
        .sysState          = SysState_EventCallback,
        .eventParam        = 28, // `func_800EB7E0`
    },
    // [200]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
