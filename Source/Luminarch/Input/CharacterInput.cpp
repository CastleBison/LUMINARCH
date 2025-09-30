
#include "CharacterInput.h"

UCharacterInput::UCharacterInput()
{
	static ConstructorHelpers::FObjectFinder<UInputMappingContext> InputContext(TEXT("/Script/EnhancedInput.InputMappingContext'/Game/Input/IMC_PlayerControl.IMC_PlayerControl'"));

	mContext = InputContext.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> MoveAction(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_PlayerMove.IA_PlayerMove'"));

	mMove = MoveAction.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> CameraRotation(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_CameraRotation.IA_CameraRotation'"));

	mCameraRotation = CameraRotation.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> Rotation(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_Rotation.IA_Rotation'"));

	mRotation = Rotation.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> ActionZoom(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_ActionZoom.IA_ActionZoom'"));

	mActionZoom = ActionZoom.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> FlashLight(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_FlashLight.IA_FlashLight'"));

	mFlashLight = FlashLight.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> Pause(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_Pause.IA_Pause'"));

	mPause = Pause.Object;

	static ConstructorHelpers::FObjectFinder<UInputAction> Pick(TEXT("/Script/EnhancedInput.InputAction'/Game/Input/IA_Pick.IA_Pick'"));

	mPick = Pick.Object;
}
