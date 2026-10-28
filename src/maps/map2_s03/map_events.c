#include "bodyprog/bodyprog.h"

s_EventData MAP_EVENTS[2] = {
    // [0]
    {
        .triggerType     = EventTriggerType_Tick,
        .sysState        = SysState_ReadMessage,
        .eventParam      = 15,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [1]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
