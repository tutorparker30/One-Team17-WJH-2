
#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "MineItem.generated.h"

UCLASS()
class ASSIGNMENT_API AMineItem : public ABaseItem
{
	GENERATED_BODY()
public:
	AMineItem();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Item")
	float ExplosionDelay;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Item")
	float ExplosionRadius;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Item")
	float ExplosionDamage;

	virtual void ActivateItem(AActor* Activator)override;

};
