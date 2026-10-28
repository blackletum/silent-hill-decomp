#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[44] = {
    // [0]
    {
        .completeFlag = EventFlag_M5S01_RifleShells0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M5S01_HandgunBullets,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M5S01_FirstAidKit,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M5S01_HealthDrink,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 43,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .completeFlag = EventFlag_M5S01_RifleShells1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_CommonItemTake`
    },
    // [5]
    {
        .completeFlag = EventFlag_378,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 8,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP5_S02,
    },
    // [6]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 7,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 8,
        .sfxPairIdx = SfxPairIdx_1,
        .mapIdx          = MapIdx_MAP5_S02,
    },
    // [7]
    {
        .requiredFlag = EventFlag_371,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 10,
        .sfxPairIdx        = SfxPairIdx_2,
        .mapIdx            = MapIdx_MAP5_S02,
    },
    // [8]
    {
        .completeFlag = EventFlag_371,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800EBF70`
    },
    // [9]
    {
        .completeFlag = EventFlag_360,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 6,
        .mapIdx            = MapIdx_MAP5_S00,
    },
    // [10]
    {
        .completeFlag = EventFlag_360,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 6,
        .mapIdx            = MapIdx_MAP5_S00,
    },
    // [11]
    {
        .completeFlag = EventFlag_360,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 6,
        .mapIdx            = MapIdx_MAP5_S00,
    },
    // [12]
    {
        .completeFlag = EventFlag_360,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 6,
        .mapIdx            = MapIdx_MAP5_S00,
    },
    // [13]
    {
        .completeFlag = EventFlag_387,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800EBA40`
    },
    // [14]
    {
        .completeFlag = EventFlag_387,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 22,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800EBA40`
    },
    // [15]
    {
        .requiredFlag = EventFlag_387,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 16,
    },
    // [16]
    {
        .requiredFlag = EventFlag_387,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 22,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 16,
    },
    // [17]
    {
        .requiredFlag = EventFlag_387,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 19,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 20,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP5_S03,
    },
    // [18]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 19,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [19]
    {
        .requiredFlag = EventFlag_388,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 18,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP5_S03,
    },
    // [20]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 17,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [21]
    {
        .requiredFlag = EventFlag_M5S01_KaufmannKeyUsed,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 16,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP5_S03,
    },
    // [22]
    {
        .requiredFlag = EventFlag_380,
        .completeFlag = EventFlag_M5S01_KaufmannKeyUsed,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800EC2D8`
    },
    // [23]
    {
        .requiredFlag = EventFlag_380,
        .completeFlag = EventFlag_M5S01_KaufmannKeyUsed,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 15,
        .requiredItemId    = InvItemId_KaufmannKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800EC2D8`
    },
    // [24]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 15,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [25]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 11,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 12,
    },
    // [26]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 13,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 14,
    },
    // [27]
    {
        .completeFlag = EventFlag_M5S01_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 25,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `MapEvent_PaperMapTake`
    },
    // [28]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 23,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 24,
        .mapIdx      = MapIdx_MAP6_S00,
    },
    // [29]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 26,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [30]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 27,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [31]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 28,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [32]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 29,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [33]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 30,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [34]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 31,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [35]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 32,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [36]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 33,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [37]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 34,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [38]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 35,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [39]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 36,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [40]
    {
        .completeFlag = EventFlag_MapMark_ResortTown_BachmanRdCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 37,
        .sysState          = SysState_EventSetFlag,
    },
    // [41]
    {
        .completeFlag = EventFlag_MapMark_ResortTown_CraigStBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 38,
        .sysState          = SysState_EventSetFlag,
    },
    // [42]
    {
        .completeFlag = EventFlag_458,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 39,
        .requiredItemId    = InvItemId_ChannelingStone,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `func_800EC42C`
    },
    // [43]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
