#include "bodyprog/bodyprog.h"
#include "maps/map1/map1_s03.h"

s_EventData MAP_EVENTS[103] = {
    // [0]
    {
        .completeFlag = EventFlag_M1S03_ShotgunShells0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 84,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [1]
    {
        .completeFlag = EventFlag_M1S03_HandgunBullets0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 85,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [2]
    {
        .completeFlag = EventFlag_M1S03_HealthDrink0,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 86,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [3]
    {
        .completeFlag = EventFlag_M1S03_HandgunBullets1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 87,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [4]
    {
        .completeFlag = EventFlag_M1S03_HandgunBullets2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 88,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [5]
    {
        .completeFlag = EventFlag_M1S03_ShotgunShells1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 89,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [6]
    {
        .completeFlag = EventFlag_M1S03_HandgunBullets3,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 90,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [7]
    {
        .completeFlag = EventFlag_M1S03_HealthDrink1,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 91,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [8]
    {
        .completeFlag = EventFlag_M1S03_HealthDrink2,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 92,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [9]
    {
        .completeFlag = EventFlag_M1S03_FirstAidKit,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 93,
        .sysState          = SysState_EventCallback,
        .eventParam        = 5, // `MapEvent_CommonItemTake`
    },
    // [10]
    {
        .requiredFlag = EventFlag_97,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 23,
        .sysState          = SysState_EventCallback,
        .eventParam        = 9, // `MapEvent_TheMonsterLurksBookRead`
    },
    // [11]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 24,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(39),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [12]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 25,
        .sysState       = SysState_EventCallback,
        .eventParam     = 10, // `MapEvent_SplitHeadFairyTaleBookRead`
    },
    // [13]
    {
        .requiredFlag = EventFlag_M1S03_KeyDownTheDrain,
        .completeFlag = EventFlag_M1S02_PickupClassroomKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [14]
    {
        .requiredFlag = EventFlag_M1S03_KeyDownTheDrain,
        .completeFlag = EventFlag_M1S02_PickupClassroomKey,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [15]
    {
        .completeFlag = EventFlag_M1S03_KeyDownTheDrain,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 17,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [16]
    {
        .completeFlag = EventFlag_M1S03_KeyDownTheDrain,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 18,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [17]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 17,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [18]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 18,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [19]
    {
        .requiredFlag = EventFlag_M1S02_UsedRubberBall,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 19,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [20]
    {
        .requiredFlag = EventFlag_M1S02_UsedRubberBall,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 20,
        .sysState          = SysState_EventCallback,
        .eventParam        = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [21]
    {
        .completeFlag = EventFlag_M1S02_UsedRubberBall,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 19,
        .requiredItemId    = InvItemId_RubberBall,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `MapEvent_RubberBallUse`
    },
    // [22]
    {
        .completeFlag = EventFlag_M1S02_UsedRubberBall,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 20,
        .requiredItemId    = InvItemId_RubberBall,
        .sysState          = SysState_EventCallback,
        .eventParam        = 15, // `MapEvent_RubberBallUse`
    },
    // [23]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 19,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [24]
    {
        .triggerType    = EventTriggerType_TouchObbFacing,
        .activationType = EventActivationType_Button,
        .mapPointIdx    = 20,
        .sysState       = SysState_EventCallback,
        .eventParam     = 7, // `MapEvent_RoofDrainPuzzleInteract1`
    },
    // [25]
    {
        .requiredFlag = EventFlag_112,
        .completeFlag = EventFlag_M1S03_KeyDownTheDrain,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_EventCallback,
        .eventParam        = 8, // `MapEvent_DrainageValveInteract`
    },
    // [26]
    {
        .completeFlag = EventFlag_MapMark_AltSchoolRF_ValveSign,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 21,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(31),
    },
    // [27]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 41,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [28]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 26,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [29]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 41,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [30]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotRightCorridorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 26,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [31]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 32,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [32]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 32,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 42,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [33]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopRightCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 42,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [34]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopRightCorridorLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 32,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [35]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotRightClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 43,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 48,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [36]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotRightClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 48,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 43,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [37]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 44,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 49,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [38]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 49,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 44,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [39]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_TopRightClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 51,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [40]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_TopRightClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 45,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [41]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopRightClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 51,
        .sysState          = SysState_EventCallback,
        .eventParam        = 2, // `MapEvent_DoorUnlocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [42]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopRightClassRoomBotLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 45,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [43]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_TopRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 52,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [44]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_TopRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 52,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 46,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [45]
    {
        .requiredFlag = EventFlag_M1S02_PickupClassroomKey,
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `MapEvent_ClassroomKeyUse`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [46]
    {
        .requiredFlag = EventFlag_M1S02_PickupClassroomKey,
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopRightClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 46,
        .requiredItemId    = InvItemId_ClassroomKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 4, // `MapEvent_ClassroomKeyUse`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [47]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopRightClassRoomTopLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 46,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [48]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LibraryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 47,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 54,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [49]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LibraryArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 54,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 47,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [50]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_RightClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 50,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 53,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [51]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_RightClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 53,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 50,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [52]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LockerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 28,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 30,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [53]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LockerRoomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 30,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 28,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [54]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_MusicRoomBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 29,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [55]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 56,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 27,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [56]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 27,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 56,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [57]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 57,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 33,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [58]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopLeftCorridorArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 33,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 57,
        .sfxPairIdx        = SfxPairIdx_13,
        .setCameraRail     = true,
    },
    // [59]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_WomensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 58,
        .sysState          = SysState_LoadOverlay,
        .eventParam        = 9,
        .sfxPairIdx        = SfxPairIdx_12,
        .mapIdx            = MapIdx_MAP1_S02,
    },
    // [60]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_WomensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 9,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 58,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [61]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_MensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 59,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 10,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [62]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_MensBathroomArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 10,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 59,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [63]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotLeftClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 60,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 64,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [64]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotLeftClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 64,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 60,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [65]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotLeftClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 61,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 65,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [66]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_BotLeftClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 65,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 61,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [67]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopLeftClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 62,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 67,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [68]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopLeftClassRoomBotArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 67,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 62,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [69]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopLeftClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 63,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 68,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [70]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_TopLeftClassRoomTopArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 68,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 63,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [71]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LeftClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 66,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 69,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [72]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LeftClassRoomMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 69,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 66,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [73]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_ReserveLibraryMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 55,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 38,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [74]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_ReserveLibraryMidArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 38,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 55,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [75]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_LibraryReserveArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 37,
        .sfxPairIdx        = SfxPairIdx_12,
    },
    // [76]
    {
        .requiredFlag = EventFlag_MapMark_AltSchool2F_LibraryReserveArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 37,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 34,
        .sfxPairIdx        = SfxPairIdx_12,
        .setCameraRail     = true,
    },
    // [77]
    {
        .requiredFlag = EventFlag_M1S03_PickupLibraryReserveKey,
        .completeFlag = EventFlag_MapMark_AltSchool2F_LibraryReserveArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_LibraryReserveKeyUse`
    },
    // [78]
    {
        .requiredFlag = EventFlag_M1S03_PickupLibraryReserveKey,
        .completeFlag = EventFlag_MapMark_AltSchool2F_LibraryReserveArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 34,
        .requiredItemId    = InvItemId_LibraryReserveKey,
        .sysState          = SysState_EventCallback,
        .eventParam        = 3, // `MapEvent_LibraryReserveKeyUse`
    },
    // [79]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LibraryReserveLocked,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 34,
        .sysState          = SysState_EventCallback,
        .eventParam        = 1, // `MapEvent_DoorLocked`
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [80]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_ChemistryLabBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 35,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [81]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LabEquipmentRoomBroken,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 36,
        .sysState          = SysState_EventCallback,
        .transitionFlags   = AreaTransitionFlag_UnfreezeWorld,
    },
    // [82]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 72,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 8,
    },
    // [83]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 7,
        .sysState    = SysState_LoadRoom,
        .eventParam  = 4,
    },
    // [84]
    {
        .completeFlag = EventFlag_MapMark_AltSchoolRF_RoofArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 5,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 6,
        .sfxPairIdx        = SfxPairIdx_14,
    },
    // [85]
    {
        .completeFlag = EventFlag_MapMark_AltSchoolRF_RoofArrows,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 6,
        .sysState          = SysState_LoadRoom,
        .eventParam        = 5,
        .sfxPairIdx        = SfxPairIdx_14,
    },
    // [86]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 70,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 2,
        .mapIdx      = MapIdx_MAP1_S02,
    },
    // [87]
    {
        .triggerType = EventTriggerType_TouchAabb,
        .mapPointIdx = 71,
        .sysState    = SysState_LoadOverlay,
        .eventParam  = 3,
        .mapIdx      = MapIdx_MAP1_S02,
    },
    // [88]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LeftCorridorMidBroken,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 11,
        .sysState          = SysState_EventSetFlag,
    },
    // [89]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_LeftCorridorMidArrows,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 12,
        .sysState          = SysState_EventSetFlag,
    },
    // [90]
    {
        .completeFlag = EventFlag_MapMark_AltSchool2F_RightCorridorMidBroken,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 13,
        .sysState          = SysState_EventSetFlag,
    },
    // [91]
    {
        .requiredFlag = EventFlag_M1S03_LockerOpened,
        .completeFlag = EventFlag_105,
        .triggerType       = EventTriggerType_TouchObb,
        .activationType    = EventActivationType_Exclusive,
        .mapPointIdx       = 77,
        .sysState          = SysState_EventCallback,
        .eventParam        = 13, // `MapEvent_LockerDeadBodyCutscene`
    },
    // [92]
    {
        .requiredFlag = EventFlag_M1S03_LockerOpened,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 76,
        .sysState          = SysState_EventCallback,
        .eventParam        = 11, // `MapEvent_OpenedCatLockerInspect`
    },
    // [93]
    {
        .completeFlag = EventFlag_M1S03_LockerOpened,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 76,
        .sysState          = SysState_EventCallback,
        .eventParam        = 12, // `MapEvent_UnopenedCatLockerInspect`
    },
    // [94]
    {
        .requiredFlag = EventFlag_106,
        .completeFlag = EventFlag_M1S03_PickupLibraryReserveKey,
        .triggerType       = EventTriggerType_TouchFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 82,
        .sysState          = SysState_EventCallback,
        .eventParam        = 14, // `MapEvent_LibraryReserveKeyItemTake`
    },
    // [95]
    {
        .requiredFlag = EventFlag_106,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 78,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(45),
    },
    // [96]
    {
        .requiredFlag = EventFlag_106,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 79,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(45),
    },
    // [97]
    {
        .requiredFlag = EventFlag_106,
        .triggerType       = EventTriggerType_TouchObbFacing,
        .activationType    = EventActivationType_Button,
        .mapPointIdx       = 80,
        .sysState          = SysState_ReadMessage,
        .eventParam        = MAP_MSG(45),
    },
    // [98]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 73,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(42),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [99]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 74,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(42),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [100]
    {
        .triggerType     = EventTriggerType_TouchObbFacing,
        .activationType  = EventActivationType_Button,
        .mapPointIdx     = 75,
        .sysState        = SysState_ReadMessage,
        .eventParam      = MAP_MSG(42),
        .transitionFlags = AreaTransitionFlag_UnfreezeWorld,
    },
    // [101]
    {
        .completeFlag = EventFlag_456,
        .triggerType       = EventTriggerType_TouchAabb,
        .activationType    = EventActivationType_Item,
        .mapPointIdx       = 83,
        .requiredItemId    = InvItemId_ChannelingStone,
        .sysState          = SysState_EventCallback,
        .eventParam        = 16, // `func_800DCDDC`
    },
    // [102]
    {
        .triggerType = EventTriggerType_EndOfArray,
    },
};
