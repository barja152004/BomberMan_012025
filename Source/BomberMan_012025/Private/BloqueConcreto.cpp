// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"

// Sets default values
ABloqueConcreto::ABloqueConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

