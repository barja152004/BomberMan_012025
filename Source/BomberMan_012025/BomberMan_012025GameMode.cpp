// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"

ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan_012025GameMode::BeginPlay()
{
	Super::BeginPlay();
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hello World!"));

	int numeroBloqueConMovimiento = 0;

	for (int i = 0; i < 10; i++)
	{
		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(1420.0f + i, 450.0f - i, 170.0f), FRotator(0.0f, 0.0f, 0.0f));

		if (bloque->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++;
		}

		if (numeroBloqueConMovimiento == 5)
		{
			bloque->bPuedeMoverse = false;
		}
	}

}