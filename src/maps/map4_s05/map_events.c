#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[18] = {
    // [0]
    {
        .requiredFlag = EventFlag_347,
        .completeFlag = EventFlag_349,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800D61AC`
    },
    // [1]
    {
        .requiredFlag = EventFlag_350,
        .completeFlag = EventFlag_352,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D6800`
    },
    // [2]
    {
        .requiredFlag = EventFlag_352,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 14,
        .transitionFlags   = 6,
        .mapIdx            = MapIdx_MAP2_S02,
    },
    // [3]
    {
        .completeFlag = EventFlag_346,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 11,
        .sysState          = SysState_EventSetFlag,
    },
    // [4]
    {
        .requiredFlag = EventFlag_346,
        .completeFlag = EventFlag_347,
        .triggerType       = EventTriggerType_TouchAabb,
        .mapPointIdx       = 12,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 13,
        .transitionFlags   = AreaTransitionFlag_SkipFadeIn,
    },
    // [5]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 2,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 5,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [6]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 3,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 5,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [7]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 4,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 5,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [8]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 6,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 1,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [9]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 7,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 1,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [10]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 8,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 1,
        .sfxPairIdx = SfxPairIdx_16,
    },
    // [11]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 9,
        .sysState        = SysState_EventCallback,
        .eventParam      = 1, // `MapEvent_DoorLocked`
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [12]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 10,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [13]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 15,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [14]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 16,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 17,
    },
    // [15]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 18,
        .sysState       = SysState_ReadMessage,
        .eventParam     = 18,
    },
    // [16]
    {
        .completeFlag = EventFlag_457,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 17,
        .requiredItemId    = InvItemId_ChannelingStone,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800D6BC0`
    },
    // [17]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
