#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[50] = {
    // [0]
    {
        .completeFlag = EventFlag_M3S00_FirstAidKit,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 59,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 2,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 10,
    },
    // [2]
    {
        .requiredFlag = EventFlag_297,
        .completeFlag = EventFlag_M3S06_PickupAntiqueShopKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 37,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D17D8`
    },
    // [3]
    {
        .requiredFlag = EventFlag_297,
        .completeFlag = EventFlag_M3S06_PickupAntiqueShopKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 38,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D17D8`
    },
    // [4]
    {
        .completeFlag = EventFlag_295,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D0C14`
    },
    // [5]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 41,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `func_800D0B10`
    },
    // [6]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 11,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 34,
    },
    // [7]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 12,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 34,
    },
    // [8]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 31,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 1,
        .sfxPairIdx = SfxPairIdx_2,
        .mapIdx          = MapIdx_MAP2_S02,
    },
    // [9]
    {
        .completeFlag = EventFlag_M3S00_PickupMap,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 36,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_PaperMapTake`
    },
    // [10]
    {
        .requiredFlag = EventFlag_317,
        .completeFlag = EventFlag_MapMark_FogCentralTown_AntiqueWholeSign,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 38,
    },
    // [11]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 39,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 37,
    },
    // [12]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 40,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 40,
    },
    // [13]
    {
        .completeFlag = EventFlag_MapMark_AltHospital1F_ExaminationRoomLeftArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [14]
    {
        .completeFlag = EventFlag_1435,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 3,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 25,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [15]
    {
        .completeFlag = EventFlag_1435,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 25,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 3,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
    },
    // [16]
    {
        .completeFlag = EventFlag_1452,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 4,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [17]
    {
        .completeFlag = EventFlag_1436,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [18]
    {
        .completeFlag = EventFlag_1438,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [19]
    {
        .completeFlag = EventFlag_1442,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [20]
    {
        .completeFlag = EventFlag_1444,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 8,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [21]
    {
        .completeFlag = EventFlag_1446,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [22]
    {
        .completeFlag = EventFlag_MapMark_AltHospital1F_ExaminationMedicineArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 13,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [23]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_RightEntranceBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 27,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP3_S01,
    },
    // [24]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_RightEntranceBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 27,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 26,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP3_S01,
    },
    // [25]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_CorridorMidBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 34,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP3_S01,
    },
    // [26]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_CorridorMidBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 28,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP3_S01,
    },
    // [27]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_StairsBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 32,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 35,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [28]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_StairsBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 35,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 32,
        .sfxPairIdx        = SfxPairIdx_1,
    },
    // [29]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_StairsLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 29,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 30,
        .sfxPairIdx        = SfxPairIdx_1,
        .setCameraRail     = true,
        .mapIdx            = MapIdx_MAP3_S01,
    },
    // [30]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_StairsLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 29,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP3_S01,
    },
    // [31]
    {
        .completeFlag = EventFlag_MapMark_FogHospital1F_KitchenArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 33,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [32]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 42,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 43,
    },
    // [33]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 43,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 43,
    },
    // [34]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 44,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 43,
    },
    // [35]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 45,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 43,
    },
    // [36]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 46,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 43,
    },
    // [37]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 47,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 43,
    },
    // [38]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 48,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 44,
    },
    // [39]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 49,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 44,
    },
    // [40]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 50,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [41]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 51,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [42]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 52,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [43]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 53,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 46,
    },
    // [44]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 54,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 44,
    },
    // [45]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 55,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [46]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 56,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [47]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 57,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [48]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 58,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 45,
    },
    // [49]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
