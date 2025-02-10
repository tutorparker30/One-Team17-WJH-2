#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemInterface.h" // 아이템 인터페이스를 구현해야 되기 때문에 포함
#include "BaseItem.generated.h" // 반드시 맨 아래에 위치

class USphereComponent;

UCLASS()
class ASSIGNMENT_API ABaseItem : public AActor, public IItemInterface
{
	GENERATED_BODY()

public:
	ABaseItem();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FName ItemType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item|Component")
	USceneComponent* Scene;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item|Component")
	USphereComponent*Collision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item|Component")
	UStaticMeshComponent* StaticMesh;

	virtual void OnItemOverlap
	(
		UPrimitiveComponent* OverlapappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult) override;

	virtual void OnItemEndOverlap
	( 
		UPrimitiveComponent* OverlapappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) override;

	virtual void ActivateItem(AActor* Activator) override;
	virtual FName GetItemType() const override;

	virtual void DestroyItem();
	
};
