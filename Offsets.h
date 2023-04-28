namespace Offsets {
  
    uintptr_t UWorld = 0x1078a7d8;
    uintptr_t ObjectID = 0x18;

    //UWorld
    uintptr_t OwningGameInstance = 0x1B8;
    uintptr_t Levels = 0x170;
    uintptr_t GameState = 0x158;
    uintptr_t PersistentLevel = 0x30;

    //UWorld -> PersistentLevel
    uintptr_t AActors = 0x98;
    uintptr_t ActorCount = 0xA0;

    //UGameInstance
    uintptr_t LocalPlayers = 0x38;

    //UPlayer
    uintptr_t PlayerController = 0x30;

    //APlayerController
    uintptr_t AcknowledgedPawn = 0x330;
    uintptr_t PlayerCameraManager = 0x340;

    //AActor
    uintptr_t bHidden = 0x58;
    uintptr_t RootComponent = 0x190;
    uintptr_t CustomTimeDilation = 0x64;

    //ACharacter
    uintptr_t Mesh = 0x310;

    //APawn
    uintptr_t PlayerState = 0x2A8;
    uintptr_t TeamIndex = 0x10B0;
    uintptr_t ReviveFromDBNOTime = 0x4480;
    uintptr_t LocalActorPos = 0x128;
    uintptr_t CurrentWeapon = 0x8f8;
    uintptr_t BoneArray = 0x5f0;

}
