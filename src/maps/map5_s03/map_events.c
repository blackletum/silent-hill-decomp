#include "bodyprog/bodyprog.h"
#include "maps/map5/map5_s03.h"

s_EventData MAP_EVENTS[46] = {
    // [0]
    {
        .completeFlag = EventFlag_M5S03_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 37,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M5S03_ShotgunShells,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 38,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M5S03_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 39,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 23,
        .sysState       = SysState_SaveMenu1,
        .eventParam     = 19,
    },
    // [4]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 19,
        .sysState       = SysState_EventCallback,
        .eventParam     = 6, // `func_800D1A84`
    },
    // [5]
    {
        .requiredFlag = EventFlag_203,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 20,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `func_800D2640`
    },
    // [6]
    {
        .requiredFlag = EventFlag_203,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `func_800D2640`
    },
    // [7]
    {
        .requiredFlag = EventFlag_203,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 22,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `func_800D2640`
    },
    // [8]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 20,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(45),
    },
    // [9]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 21,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(45),
    },
    // [10]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 22,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(45),
    },
    // [11]
    {
        .completeFlag = EventFlag_M5S03_PickupMagnet,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 24,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `func_800D1ACC`
    },
    // [12]
    {
        .requiredFlag = EventFlag_389,
        .completeFlag = EventFlag_390,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 15,
        .requiredItemId    = InvItemId_Magnet,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `func_800D1628`
    },
    // [13]
    {
        .requiredFlag = EventFlag_390,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_ReadMessage,
        .eventParam        = 16,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [14]
    {
        .requiredFlag = EventFlag_389,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 15,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `func_800D1904`
    },
    // [15]
    {
        .completeFlag = EventFlag_389,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 35,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `func_800D2674`
    },
    // [16]
    {
        .completeFlag = EventFlag_389,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 36,
        .sysState          = SysState_EventCallback,
        .eventParam        = 10, // `func_800D2674`
    },
    // [17]
    {
        .requiredFlag = EventFlag_M5S03_KaufmannHasMotorcycleVial,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 16,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(67),
    },
    // [18]
    {
        .requiredFlag = EventFlag_M5S03_KaufmannHasMotorcycleVial,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(67),
    },
    // [19]
    {
        .requiredFlag = EventFlag_M5S03_KaufmannHasMotorcycleVial,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(67),
    },
    // [20]
    {
        .completeFlag = EventFlag_M5S03_KaufmannHasMotorcycleVial,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 16,
        .requiredItemId    = InvItemId_MotorcycleKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `func_800D1AF8`
    },
    // [21]
    {
        .completeFlag = EventFlag_M5S03_KaufmannHasMotorcycleVial,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 17,
        .requiredItemId    = InvItemId_MotorcycleKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `func_800D1AF8`
    },
    // [22]
    {
        .completeFlag = EventFlag_M5S03_KaufmannHasMotorcycleVial,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 18,
        .requiredItemId    = InvItemId_MotorcycleKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `func_800D1AF8`
    },
    // [23]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 16,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(19),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [24]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 17,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(19),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [25]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 16,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(19),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [26]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 18,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(19),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [27]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 12,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 13,
        .sfxPairIdx = SfxPairIdx_1,
        .mapIdx          = MapIdx_MAP5_S01,
    },
    // [28]
    {
        .requiredFlag = EventFlag_388,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 3,
        .sfxPairIdx        = SfxPairIdx_1,
        .mapIdx            = MapIdx_MAP5_S01,
    },
    // [29]
    {
        .completeFlag = EventFlag_388,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 2,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [30]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 9,
        .sysState        = SysState_LoadOverlay,
        .eventParam      = 11,
        .sfxPairIdx = SfxPairIdx_1,
        .mapIdx          = MapIdx_MAP5_S01,
    },
    // [31]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 4,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 7,
    },
    // [32]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 6,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 5,
    },
    // [33]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 14,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 8,
        .sfxPairIdx = SfxPairIdx_1,
    },
    // [34]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 8,
        .sysState        = SysState_LoadRoom,
        .eventParam      = 14,
        .sfxPairIdx = SfxPairIdx_1,
    },
    // [35]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 10,
        .sysState        = SysState_EventCallback,
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [36]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 26,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(55),
    },
    // [37]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 27,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(57),
    },
    // [38]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 28,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(59),
    },
    // [39]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 29,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(60),
    },
    // [40]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 30,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(62),
    },
    // [41]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 31,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(62),
    },
    // [42]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 32,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(63),
    },
    // [43]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 33,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(64),
    },
    // [44]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 34,
        .sysState       = SysState_ReadMessage,
        .eventParam     = MAP_MSG(65),
    },
    // [45]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
