#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "CoinItem.generated.h"

UCLASS()
class ASSIGNMENT_API ACoinItem : public ABaseItem
{
	GENERATED_BODY()

public:
	ACoinItem();

protected:
	UPROPERTY(EditAnyWhere,BlueprintReadWrite,Category="Item")
	int32 PointValue;
	
};
