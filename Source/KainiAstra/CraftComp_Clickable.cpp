// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftComp_Clickable.h"

// Sets default values for this component's properties
UCraftComp_Clickable::UCraftComp_Clickable()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UCraftComp_Clickable::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void UCraftComp_Clickable::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

static void HandleOnClicked() {


}
