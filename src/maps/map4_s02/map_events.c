#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[35] = {
    // [0]
    {
        .completeFlag = EventFlag_346,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 25,
        .sysState          = SysState_EventSetFlag,
    },
    // [1]
    {
        .requiredFlag = EventFlag_346,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 26,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 27,
    },
    // [2]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 28,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 29,
    },
    // [3]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 2,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 3,
    },
    // [4]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 4,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 5,
    },
    // [5]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 6,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 7,
        .sfxPairIdx = SfxPairIdx_12,
        .mapIdx          = MapIdx_MAP4_S01,
    },
    // [6]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 19,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 34,
        .sfxPairIdx = SfxPairIdx_13,
        .mapIdx          = MapIdx_MAP2_S04,
    },
    // [7]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 20,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 34,
        .sfxPairIdx = SfxPairIdx_13,
        .mapIdx          = MapIdx_MAP2_S04,
    },
    // [8]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 21,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 34,
        .sfxPairIdx = SfxPairIdx_13,
        .mapIdx          = MapIdx_MAP2_S04,
    },
    // [9]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 9,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 12,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [10]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 10,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 12,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [11]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 11,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 12,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [12]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 13,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 8,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [13]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 14,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 8,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [14]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 15,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 8,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [15]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 16,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 18,
        .sfxPairIdx = SfxPairIdx_13,
        .mapIdx          = MapIdx_MAP4_S04,
    },
    // [16]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 17,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [17]
    {
        .completeFlag = EventFlag_319,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 30,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 31,
        .mapIdx            = MapIdx_MAP4_S03,
    },
    // [18]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 30,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 31,
        .mapIdx      = MapIdx_MAP4_S03,
    },
    // [19]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 32,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 33,
        .mapIdx      = MapIdx_MAP4_S03,
    },
    // [20]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 46,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 15,
    },
    // [21]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_CrichtonStTopBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 35,
        .sysState          = SysState_EventSetFlag,
    },
    // [22]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_CrichtonStBotBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 36,
        .sysState          = SysState_EventSetFlag,
    },
    // [23]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_SimmonsStTopBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 37,
        .sysState          = SysState_EventSetFlag,
    },
    // [24]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_SimmonsStMidCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 38,
        .sysState          = SysState_EventSetFlag,
    },
    // [25]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_SimmonsStBotCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 39,
        .sysState          = SysState_EventSetFlag,
    },
    // [26]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_WilsonStCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 40,
        .sysState          = SysState_EventSetFlag,
    },
    // [27]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_KoontzStBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventSetFlag,
    },
    // [28]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_SaganStRightBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 42,
        .sysState          = SysState_EventSetFlag,
    },
    // [29]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_SaganStLeftBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 43,
        .sysState          = SysState_EventSetFlag,
    },
    // [30]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_ParkingLotBigCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 44,
        .sysState          = SysState_EventSetFlag,
    },
    // [31]
    {
        .completeFlag = EventFlag_MapMark_AltCentralTown_UntatiledStBotCross,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 45,
        .sysState          = SysState_EventSetFlag,
    },
    // [32]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 47,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [33]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 48,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 16,
    },
    // [34]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
