
#pragma once

#include "EngineMinimal.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "UObject/NoExportTypes.h"
#include "CharacterInput.generated.h"


UCLASS()
class LUMINARCH_API UCharacterInput : public UObject
{
	GENERATED_BODY()

public:
	UCharacterInput();

public:
	TObjectPtr<UInputMappingContext>	mContext;
	TObjectPtr<UInputAction>			mMove;
	TObjectPtr<UInputAction>			mCameraRotation;
	TObjectPtr<UInputAction>			mRotation;
	TObjectPtr<UInputAction>			mActionZoom;
	TObjectPtr<UInputAction>			mFlashLight;
	TObjectPtr<UInputAction>			mPause;
	TObjectPtr<UInputAction>			mPick;
};
