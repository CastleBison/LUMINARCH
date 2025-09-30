
#include "CharacterAnimInstance.h"
#include "MyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"



void UCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	AMyCharacter* MyCharacter = Cast<AMyCharacter>(TryGetPawnOwner());

	if (IsValid(MyCharacter))
	{
		UCharacterMovementComponent* Movement = MyCharacter->GetCharacterMovement();

		if (Movement)
		{
			mMoveSpeed = Movement->Velocity.Size();
		}
	}
}