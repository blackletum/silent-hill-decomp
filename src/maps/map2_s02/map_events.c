#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[42] = {
    // [0]
    {
        .completeFlag = EventFlag_M2S02_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800E9E10`
    },
    // [1]
    {
        .completeFlag = EventFlag_M2S02_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800E9E10`
    },
    // [2]
    {
        .completeFlag = EventFlag_M2S02_HandgunBullets0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 43,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800E9E10`
    },
    // [3]
    {
        .completeFlag = EventFlag_M2S02_HandgunBullets1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800E9E10`
    },
    // [4]
    {
        .completeFlag = EventFlag_M2S02_HealthDrink2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800E9E10`
    },
    // [5]
    {
        .requiredFlag = EventFlag_352,
        .completeFlag = EventFlag_191,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800E9EAC`
    },
    // [6]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 3,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 4,
    },
    // [7]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 5,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 6,
    },
    // [8]
    {
        .requiredFlag = EventFlag_351,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [9]
    {
        .requiredFlag = EventFlag_M3S06_PickupAntiqueShopKey,
        .completeFlag = EventFlag_M2S02_AntiqueShopOpen,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E9D54`
    },
    // [10]
    {
        .requiredFlag = EventFlag_M3S06_PickupAntiqueShopKey,
        .completeFlag = EventFlag_M2S02_AntiqueShopOpen,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 7,
        .requiredItemId    = InvItemId_AntiqueShopKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `func_800E9D54`
    },
    // [11]
    {
        .requiredFlag = EventFlag_M2S02_AntiqueShopOpen,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 8,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP4_S01,
    },
    // [12]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 7,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [13]
    {
        .requiredFlag = EventFlag_191,
        .completeFlag = EventFlag_193,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 24,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 33,
        .mapIdx            = MapIdx_MAP2_S00,
    },
    // [14]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 24,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 25,
        .mapIdx      = MapIdx_MAP2_S00,
    },
    // [15]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 20,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 23,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP2_S04,
    },
    // [16]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 21,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 23,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP2_S04,
    },
    // [17]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 22,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 23,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP2_S04,
    },
    // [18]
    {
        .requiredFlag = EventFlag_295,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 19,
        .sfxPairIdx        = SfxPairIdx_2,
        .mapIdx            = MapIdx_MAP3_S06,
    },
    // [19]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 17,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 19,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP3_S00,
    },
    // [20]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 10,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 13,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [21]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 11,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 13,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [22]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 12,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 13,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [23]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 14,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 9,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [24]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 15,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 9,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [25]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 16,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 9,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [26]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 18,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [27]
    {
        .completeFlag = EventFlag_346,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 26,
        .sysState          = SysState_EventSetFlag,
    },
    // [28]
    {
        .requiredFlag = EventFlag_346,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 27,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 28,
    },
    // [29]
    {
        .requiredFlag = EventFlag_191,
        .completeFlag = EventFlag_194,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 29,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 30,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [30]
    {
        .requiredFlag = EventFlag_194,
        .completeFlag = EventFlag_189,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800E9FDC`
    },
    // [31]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 29,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 30,
    },
    // [32]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 31,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 16,
    },
    // [33]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 34,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 17,
    },
    // [34]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 32,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [35]
    {
        .completeFlag = EventFlag_MapMark_FogCentralTown_CrichtonStTotBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 36,
        .sysState          = SysState_EventSetFlag,
    },
    // [36]
    {
        .completeFlag = EventFlag_MapMark_FogCentralTown_CrichtonStBotBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 37,
        .sysState          = SysState_EventSetFlag,
    },
    // [37]
    {
        .completeFlag = EventFlag_MapMark_FogCentralTown_SaganStBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 38,
        .sysState          = SysState_EventSetFlag,
    },
    // [38]
    {
        .completeFlag = EventFlag_MapMark_FogCentralTown_KoontzStBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 39,
        .sysState          = SysState_EventSetFlag,
    },
    // [39]
    {
        .completeFlag = EventFlag_MapMark_FogCentralTown_SimmonsStBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventSetFlag,
    },
    // [40]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 35,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [41]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
