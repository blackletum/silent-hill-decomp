#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[12] = {
    // [0]
    {
        .requiredFlag = EventFlag_416,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_SaveMenu1,
        .eventParam        = 20,
    },
    // [1]
    {
        .requiredFlag = EventFlag_416,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_SaveMenu1,
        .eventParam        = 20,
    },
    // [2]
    {
        .requiredFlag = EventFlag_416,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 7,
        .sysState          = SysState_SaveMenu1,
        .eventParam        = 20,
    },
    // [3]
    {
        .requiredFlag = EventFlag_416,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 1,
        .sfxPairIdx        = SfxPairIdx_15,
        .mapIdx            = MapIdx_MAP6_S00,
    },
    // [4]
    {
        .requiredFlag = EventFlag_405,
        .completeFlag = EventFlag_409,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 3,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [5]
    {
        .requiredFlag = EventFlag_405,
        .completeFlag = EventFlag_406,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 3,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [6]
    {
        .requiredFlag = EventFlag_407,
        .completeFlag = EventFlag_408,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 4,
    },
    // [7]
    {
        .requiredFlag = EventFlag_409,
        .completeFlag = EventFlag_410,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `func_800CF0B8`
    },
    // [8]
    {
        .requiredFlag = EventFlag_588,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 6, // `func_800D32D0`
    },
    // [9]
    {
        .completeFlag = EventFlag_460,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 8,
        .requiredItemId    = InvItemId_ChannelingStone,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800CFC34`
    },
    // [10]
    {
        .requiredFlag = EventFlag_469,
        .triggerType       = EventTriggerType_Tick,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800D0500`
    },
    // [11]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
