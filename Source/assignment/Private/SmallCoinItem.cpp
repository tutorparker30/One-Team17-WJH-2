// Fill out your copyright notice in the Description page of Project Settings.


#include "SmallCoinItem.h"

ASmallCoinItem::ASmallCoinItem()
{
	PointValue = 10;
	ItemType = "BigCoin";
}

void ASmallCoinItem::ActivateItem(AActor* Activater)
{
	DestroyItem();
}


