#include "bodyprog/bodyprog.h"
#include "maps/map7/map7_s01.h"

s_EventData MAP_EVENTS[203] = {
    // [0]
    {
        .completeFlag = EventFlag_M7S01_RifleShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 170,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M7S01_HandgunBullets0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 171,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M7S01_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 172,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M7S01_HandgunBullets1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 173,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .completeFlag = EventFlag_M7S01_ShotgunShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 174,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [5]
    {
        .completeFlag = EventFlag_M7S01_FirstAidKit,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 175,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [6]
    {
        .completeFlag = EventFlag_M7S01_HandgunBullets2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 176,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [7]
    {
        .completeFlag = EventFlag_M7S01_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 177,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [8]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 140,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 22,
    },
    // [9]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 141,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 22,
    },
    // [10]
    {
        .requiredFlag = EventFlag_473,
        .completeFlag = EventFlag_479,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 45, // `func_800DCE20`
    },
    // [11]
    {
        .requiredFlag = EventFlag_479,
        .completeFlag = EventFlag_480,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
        .setCameraRail     = true,
        .mapIdx            = MapIdx_MAP2_S04,
    },
    // [12]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 3,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(88),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [13]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 4,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(88),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [14]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 118,
        .sysState          = SysState_EventCallback,
        .eventParam        = 46, // `func_800D8A04`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [15]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 119,
        .sysState          = SysState_EventCallback,
        .eventParam        = 46, // `func_800D8A04`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [16]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 120,
        .sysState          = SysState_EventCallback,
        .eventParam        = 46, // `func_800D8A04`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [17]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 121,
        .sysState          = SysState_EventCallback,
        .eventParam        = 46, // `func_800D8A04`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [18]
    {
        .requiredFlag = EventFlag_491,
        .completeFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 118,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800D89D8`
    },
    // [19]
    {
        .requiredFlag = EventFlag_491,
        .completeFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 119,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800D89D8`
    },
    // [20]
    {
        .requiredFlag = EventFlag_491,
        .completeFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 120,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800D89D8`
    },
    // [21]
    {
        .requiredFlag = EventFlag_491,
        .completeFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 121,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `func_800D89D8`
    },
    // [22]
    {
        .requiredFlag = EventFlag_M7S01_PickupBirdCageKey,
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 118,
        .requiredItemId    = InvItemId_BirdCageKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_BirdCageKeyUse`
    },
    // [23]
    {
        .requiredFlag = EventFlag_M7S01_PickupBirdCageKey,
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 118,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_BirdCageKeyUse`
    },
    // [24]
    {
        .requiredFlag = EventFlag_M7S01_PickupBirdCageKey,
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 119,
        .requiredItemId    = InvItemId_BirdCageKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_BirdCageKeyUse`
    },
    // [25]
    {
        .requiredFlag = EventFlag_M7S01_PickupBirdCageKey,
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 119,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_BirdCageKeyUse`
    },
    // [26]
    {
        .requiredFlag = EventFlag_M7S01_PickupBirdCageKey,
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 120,
        .requiredItemId    = InvItemId_BirdCageKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_BirdCageKeyUse`
    },
    // [27]
    {
        .requiredFlag = EventFlag_M7S01_PickupBirdCageKey,
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 120,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_BirdCageKeyUse`
    },
    // [28]
    {
        .requiredFlag = EventFlag_M7S01_PickupBirdCageKey,
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 121,
        .requiredItemId    = InvItemId_BirdCageKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_BirdCageKeyUse`
    },
    // [29]
    {
        .requiredFlag = EventFlag_M7S01_PickupBirdCageKey,
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 121,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_BirdCageKeyUse`
    },
    // [30]
    {
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 118,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `func_800D8958`
    },
    // [31]
    {
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 119,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `func_800D8958`
    },
    // [32]
    {
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 120,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `func_800D8958`
    },
    // [33]
    {
        .completeFlag = EventFlag_491,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 121,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `func_800D8958`
    },
    // [34]
    {
        .completeFlag = EventFlag_490,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 117,
        .requiredItemId    = InvItemId_Pliers,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `func_800D8A5C`
    },
    // [35]
    {
        .completeFlag = EventFlag_490,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 117,
        .sysState          = SysState_EventCallback,
        .eventParam        = 14, // `func_800D8A30`
    },
    // [36]
    {
        .requiredFlag = EventFlag_490,
        .completeFlag = EventFlag_525,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 103,
        .sysState          = SysState_EventCallback,
        .eventParam        = 16, // `func_800D8DB4`
    },
    // [37]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfHagith,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 116,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(89),
    },
    // [38]
    {
        .requiredFlag = EventFlag_489,
        .completeFlag = EventFlag_M7S01_PickupKeyOfHagith,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 116,
        .sysState          = SysState_EventCallback,
        .eventParam        = 19, // `func_800D93BC`
    },
    // [39]
    {
        .completeFlag = EventFlag_489,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 116,
        .requiredItemId    = InvItemId_StoneOfTime,
        .sysState          = SysState_EventCallback,
        .eventParam        = 18, // `func_800D8FF8`
    },
    // [40]
    {
        .completeFlag = EventFlag_489,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 116,
        .sysState          = SysState_EventCallback,
        .eventParam        = 17, // `func_800D8FCC`
    },
    // [41]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 122,
        .sysState       = SysState_EventCallback,
        .eventParam     = 20, // `func_800D93E8`
    },
    // [42]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 123,
        .sysState       = SysState_EventCallback,
        .eventParam     = 20, // `func_800D93E8`
    },
    // [43]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 124,
        .sysState       = SysState_EventCallback,
        .eventParam     = 20, // `func_800D93E8`
    },
    // [44]
    {
        .requiredFlag = EventFlag_M7S01_PickupScrewdriver,
        .completeFlag = EventFlag_M7S01_PickupPliers,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 105,
        .sysState          = SysState_EventCallback,
        .eventParam        = 21, // `func_800D9414`
    },
    // [45]
    {
        .completeFlag = EventFlag_M7S01_PickupPliers,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 104,
        .sysState          = SysState_EventCallback,
        .eventParam        = 21, // `func_800D9414`
    },
    // [46]
    {
        .requiredFlag = EventFlag_M7S01_PickupPliers,
        .completeFlag = EventFlag_M7S01_PickupScrewdriver,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 107,
        .sysState          = SysState_EventCallback,
        .eventParam        = 22, // `func_800D9440`
    },
    // [47]
    {
        .completeFlag = EventFlag_M7S01_PickupScrewdriver,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 106,
        .sysState          = SysState_EventCallback,
        .eventParam        = 22, // `func_800D9440`
    },
    // [48]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 115,
        .sysState       = SysState_EventCallback,
        .eventParam     = 23, // `func_800D946C`
    },
    // [49]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 114,
        .sysState       = SysState_EventCallback,
        .eventParam     = 24, // `func_800D94A4`
    },
    // [50]
    {
        .completeFlag = EventFlag_488,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 108,
        .sysState          = SysState_EventCallback,
        .eventParam        = 25, // `func_800D94DC`
    },
    // [51]
    {
        .completeFlag = EventFlag_M7S01_PickupAmuletOfSolomon,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 113,
        .sysState          = SysState_EventCallback,
        .eventParam        = 26, // `func_800D99DC`
    },
    // [52]
    {
        .requiredFlag = EventFlag_481,
        .completeFlag = EventFlag_482,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 27, // `func_800D725C`
    },
    // [53]
    {
        .requiredFlag = EventFlag_482,
        .completeFlag = EventFlag_483,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_Fmv,
        .eventParam        = 5,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [54]
    {
        .requiredFlag = EventFlag_483,
        .completeFlag = EventFlag_484,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 28, // `func_800D7A60`
    },
    // [55]
    {
        .requiredFlag = EventFlag_484,
        .completeFlag = EventFlag_569,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 169,
    },
    // [56]
    {
        .requiredFlag = EventFlag_569,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 112,
        .sysState          = SysState_EventCallback,
        .eventParam        = 29, // `func_800D9A08`
    },
    // [57]
    {
        .completeFlag = EventFlag_500,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 127,
        .sysState          = SysState_EventCallback,
        .eventParam        = 30, // `func_800D9C9C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [58]
    {
        .completeFlag = EventFlag_501,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 128,
        .sysState          = SysState_EventCallback,
        .eventParam        = 30, // `func_800D9C9C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [59]
    {
        .completeFlag = EventFlag_502,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 129,
        .sysState          = SysState_EventCallback,
        .eventParam        = 30, // `func_800D9C9C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [60]
    {
        .completeFlag = EventFlag_503,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 130,
        .sysState          = SysState_EventCallback,
        .eventParam        = 30, // `func_800D9C9C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [61]
    {
        .completeFlag = EventFlag_504,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 131,
        .sysState          = SysState_EventCallback,
        .eventParam        = 30, // `func_800D9C9C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [62]
    {
        .completeFlag = EventFlag_505,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 132,
        .sysState          = SysState_EventCallback,
        .eventParam        = 30, // `func_800D9C9C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [63]
    {
        .completeFlag = EventFlag_506,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 133,
        .sysState          = SysState_EventCallback,
        .eventParam        = 30, // `func_800D9C9C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [64]
    {
        .requiredFlag = EventFlag_487,
        .completeFlag = EventFlag_M7S01_PickupStoneOfTime,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 98,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DAB64`
    },
    // [65]
    {
        .requiredFlag = EventFlag_487,
        .completeFlag = EventFlag_M7S01_PickupStoneOfTime,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 99,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DAB64`
    },
    // [66]
    {
        .requiredFlag = EventFlag_487,
        .completeFlag = EventFlag_M7S01_PickupStoneOfTime,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 100,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DAB64`
    },
    // [67]
    {
        .requiredFlag = EventFlag_487,
        .completeFlag = EventFlag_M7S01_PickupStoneOfTime,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 101,
        .sysState          = SysState_EventCallback,
        .eventParam        = 31, // `func_800DAB64`
    },
    // [68]
    {
        .completeFlag = EventFlag_M7S01_PickupCrestOfMercury,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 134,
        .sysState          = SysState_EventCallback,
        .eventParam        = 32, // `func_800DAD7C`
    },
    // [69]
    {
        .completeFlag = EventFlag_M7S01_PickupCrestOfMercury,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 135,
        .sysState          = SysState_EventCallback,
        .eventParam        = 32, // `func_800DAD7C`
    },
    // [70]
    {
        .completeFlag = EventFlag_M7S01_PickupCrestOfMercury,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 136,
        .sysState          = SysState_EventCallback,
        .eventParam        = 32, // `func_800DAD7C`
    },
    // [71]
    {
        .completeFlag = EventFlag_M7S01_PickupRingOfContract,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 137,
        .sysState          = SysState_EventCallback,
        .eventParam        = 33, // `func_800DADA8`
    },
    // [72]
    {
        .completeFlag = EventFlag_M7S01_PickupRingOfContract,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 138,
        .sysState          = SysState_EventCallback,
        .eventParam        = 33, // `func_800DADA8`
    },
    // [73]
    {
        .completeFlag = EventFlag_M7S01_PickupRingOfContract,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 139,
        .sysState          = SysState_EventCallback,
        .eventParam        = 33, // `func_800DADA8`
    },
    // [74]
    {
        .completeFlag = EventFlag_M7S01_PickupCamera,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 97,
        .sysState          = SysState_EventCallback,
        .eventParam        = 34, // `MapEvent_CutsceneCherylRedirect3`
    },
    // [75]
    {
        .completeFlag = EventFlag_486,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 111,
        .requiredItemId    = InvItemId_Screwdriver,
        .sysState          = SysState_EventCallback,
        .eventParam        = 35, // `func_800DAE00`
    },
    // [76]
    {
        .requiredFlag = EventFlag_486,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 111,
        .sysState          = SysState_EventCallback,
        .eventParam        = 36, // `func_800DB13C`
    },
    // [77]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 111,
#if VERSION_EQUAL_OR_NEWER(JAP1) // @bugfix?
        .sysState        = SysState_EventCallback,
        .eventParam      = 36, // `func_800DB13C`
#else
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(87),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
#endif
    },
    // [78]
    {
        .requiredFlag = EventFlag_561,
        .completeFlag = EventFlag_562,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 37, // `func_800DB1F0`
    },
    // [79]
    {
        .completeFlag = EventFlag_496,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 125,
        .requiredItemId    = InvItemId_Camera,
        .sysState          = SysState_EventCallback,
        .eventParam        = 39, // `func_800DB3D0`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [80]
    {
        .completeFlag = EventFlag_497,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 126,
        .requiredItemId    = InvItemId_Camera,
        .sysState          = SysState_EventCallback,
        .eventParam        = 39, // `func_800DB3D0`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [81]
    {
        .completeFlag = EventFlag_496,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 125,
        .sysState          = SysState_EventCallback,
        .eventParam        = 38, // `func_800DB31C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [82]
    {
        .completeFlag = EventFlag_497,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 126,
        .sysState          = SysState_EventCallback,
        .eventParam        = 38, // `func_800DB31C`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [83]
    {
        .requiredFlag = EventFlag_M5S03_SeenSecondNewspaper,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 110,
        .sysState          = SysState_EventCallback,
        .eventParam        = 41, // `func_800DBDE0`
    },
    // [84]
    {
        .requiredFlag = EventFlag_M7S00_BotanyBookReadable,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 109,
        .sysState          = SysState_EventCallback,
        .eventParam        = 42, // `func_800DC028`
    },
    // [85]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 109,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(96),
    },
    // [86]
    {
        .completeFlag = EventFlag_M7S01_PickupBirdCageKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 96,
        .sysState          = SysState_EventCallback,
        .eventParam        = 43, // `func_800DC080`
    },
    // [87]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfHagith,
        .completeFlag = EventFlag_531,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `MapEvent_KeyOfHagithUse`
    },
    // [88]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfHagith,
        .completeFlag = EventFlag_531,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 5,
        .requiredItemId    = InvItemId_KeyOfHagith,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `MapEvent_KeyOfHagithUse`
    },
    // [89]
    {
        .requiredFlag = EventFlag_531,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 13,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [90]
    {
        .requiredFlag = EventFlag_531,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 5,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [91]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 5,
        .sysState       = SysState_EventCallback,
        .eventParam     = 5, // `func_800D8540`
    },
    // [92]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 5,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `func_800D82C4`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [93]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 6,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 16,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [94]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 16,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 6,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [95]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 7,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 17,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [96]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 17,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 7,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [97]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 8,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 18,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [98]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 18,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 8,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [99]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 9,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 19,
        .sfxPairIdx = SfxPairIdx_14,
    },
    // [100]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 19,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 9,
        .sfxPairIdx = SfxPairIdx_14,
        .setCameraRail      = 1,
    },
    // [101]
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
    // [102]
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
    // [103]
    {
        .completeFlag = EventFlag_546,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800D8358`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [104]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 10,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `func_800D82C4`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [105]
    {
        .requiredFlag = EventFlag_525,
        .completeFlag = EventFlag_530,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_KeyOfOphielUse`
    },
    // [106]
    {
        .requiredFlag = EventFlag_525,
        .completeFlag = EventFlag_530,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 11,
        .requiredItemId    = InvItemId_KeyOfOphiel,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_KeyOfOphielUse`
    },
    // [107]
    {
        .requiredFlag = EventFlag_530,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 11,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 53,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
        .mapIdx            = MapIdx_MAP0_S01,
    },
    // [108]
    {
        .requiredFlag = EventFlag_530,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 53,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 11,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
        .mapIdx            = MapIdx_MAP0_S01,
    },
    // [109]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 11,
        .sysState       = SysState_EventCallback,
        .eventParam     = 4, // `func_800D84AC`
    },
    // [110]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 11,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `func_800D82C4`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [111]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .completeFlag = EventFlag_532,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `MapEvent_KeyOfPhalegUse`
    },
    // [112]
    {
        .requiredFlag = EventFlag_M7S01_PickupKeyOfPhaleg,
        .completeFlag = EventFlag_532,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 12,
        .requiredItemId    = InvItemId_KeyOfPhaleg,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `MapEvent_KeyOfPhalegUse`
    },
    // [113]
    {
        .requiredFlag = EventFlag_532,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 12,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 71,
        .sfxPairIdx        = SfxPairIdx_12,
        .mapIdx            = MapIdx_MAP7_S02,
    },
    // [114]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 12,
        .sysState       = SysState_EventCallback,
        .eventParam     = 6, // `func_800D85D4`
    },
    // [115]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 12,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `func_800D82C4`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [116]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 20,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 26,
    },
    // [117]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 24,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 21,
    },
    // [118]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 23,
        .sysState       = SysState_EventCallback,
        .eventParam     = 44, // `sharedFunc_800D15F0_3_s01`
    },
    // [119]
    {
        .completeFlag = EventFlag_213,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 14,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [120]
    {
        .completeFlag = EventFlag_213,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 93,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [121]
    {
        .completeFlag = EventFlag_214,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [122]
    {
        .completeFlag = EventFlag_214,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 94,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [123]
    {
        .completeFlag = EventFlag_215,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [124]
    {
        .completeFlag = EventFlag_215,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 95,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 22,
        .sfxPairIdx        = SfxPairIdx_7,
    },
    // [125]
    {
        .requiredFlag = EventFlag_217,
        .completeFlag = EventFlag_221,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 93,
    },
    // [126]
    {
        .requiredFlag = EventFlag_218,
        .completeFlag = EventFlag_222,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 94,
    },
    // [127]
    {
        .requiredFlag = EventFlag_219,
        .completeFlag = EventFlag_561,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 95,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
        .setCameraRail     = true,
    },
    // [128]
    {
        .requiredFlag = EventFlag_219,
        .completeFlag = EventFlag_223,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 95,
    },
    // [129]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 25,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 27,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [130]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 27,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 25,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [131]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 28,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 29,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [132]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 29,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 28,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [133]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 31,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 39,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [134]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 39,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 31,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [135]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 32,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 51,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [136]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 51,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 32,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [137]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 33,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 52,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [138]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 52,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 33,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [139]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 40,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 48,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [140]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 48,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 40,
        .sfxPairIdx = SfxPairIdx_13,
        .setCameraRail      = 1,
    },
    // [141]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 41,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 49,
        .sfxPairIdx = SfxPairIdx_12,
    },
    // [142]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 49,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 41,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
    },
    // [143]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 54,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 62,
        .sfxPairIdx = SfxPairIdx_12,
        .setCameraRail      = 1,
        .mapIdx          = MapIdx_MAP0_S01,
    },
    // [144]
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
    // [145]
    {
        .requiredFlag = EventFlag_488,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 55,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 63,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [146]
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
    // [147]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 55,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `func_800D82C4`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [148]
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
    // [149]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 64,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 65,
        .sfxPairIdx = SfxPairIdx_13,
    },
    // [150]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 65,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 64,
        .sfxPairIdx = SfxPairIdx_13,
    },
    // [151]
    {
        .requiredFlag = EventFlag_492,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 69,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [152]
    {
        .requiredFlag = EventFlag_492,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 69,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 67,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [153]
    {
        .completeFlag = EventFlag_493,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_EventCallback,
        .eventParam        = 40, // `sharedFunc_800DB60C_7_s01`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [154]
    {
        .requiredFlag = EventFlag_494,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 68,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 70,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [155]
    {
        .requiredFlag = EventFlag_494,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 70,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 68,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [156]
    {
        .completeFlag = EventFlag_495,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 68,
        .sysState          = SysState_EventCallback,
        .eventParam        = 40, // `sharedFunc_800DB60C_7_s01`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [157]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 34,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [158]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 35,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [159]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 36,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [160]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 37,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [161]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 38,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [162]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 42,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [163]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 43,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [164]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 44,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [165]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 45,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [166]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 50,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [167]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 56,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [168]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 57,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [169]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 58,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [170]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 59,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [171]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 60,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [172]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 61,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [173]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 89,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [174]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 90,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [175]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 142,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(90),
    },
    // [176]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 143,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(91),
    },
    // [177]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 144,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(93),
    },
    // [178]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 145,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(93),
    },
    // [179]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 146,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(93),
    },
    // [180]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 147,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(93),
    },
    // [181]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 148,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(94),
    },
    // [182]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 149,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(94),
    },
    // [183]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 150,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(94),
    },
    // [184]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 151,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [185]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 152,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [186]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 153,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [187]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 154,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [188]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 155,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [189]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 156,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [190]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 157,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [191]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 158,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [192]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 159,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [193]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 160,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [194]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 161,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [195]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 162,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [196]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 163,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [197]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 164,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [198]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 165,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [199]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 166,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [200]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 167,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [201]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 168,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(95),
    },
    // [202]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
