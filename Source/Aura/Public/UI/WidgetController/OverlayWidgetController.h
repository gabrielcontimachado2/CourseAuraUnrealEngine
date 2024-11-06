// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "OverlayWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLifeChangedSignature, float, NewLife);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxLifeChangedSignature, float, NewMaxLife);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURA_API UOverlayWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()
public:
	virtual void BroadcastInitialValues() override;

	UPROPERTY(BlueprintAssignable, Category="GAS|Attributes")
	FOnLifeChangedSignature OnLifeChanged;

	UPROPERTY(BlueprintAssignable, Category="GAS|Attributes")
	FOnMaxLifeChangedSignature OnMaxLifeChanged;
};
