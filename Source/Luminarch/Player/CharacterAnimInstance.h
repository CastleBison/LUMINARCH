
#pragma once

#include "../Input/CharacterInput.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimInstance.generated.h"


UCLASS()
class LUMINARCH_API UCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float	mMoveSpeed = 0.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float	mDir = 0.f;

public:
	void SetDir(float Dir)
	{
		mDir = Dir;
	}

public:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
