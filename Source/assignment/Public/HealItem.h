
#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "HealItem.generated.h"

UCLASS()
class ASSIGNMENT_API AHealItem : public ABaseItem
{
	GENERATED_BODY()
public:
	AHealItem();
	
	UPROPERTY(EditAnyWhere,BlueprintReadWrite,Category="Item")
	float HealAmount;

	virtual void ActivateItem(AActor* Activator)override;

};
