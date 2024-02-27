// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChunkEnums.h"
#include "FastNoiseWrapper.h"
#include "Chunk.generated.h"
//#include "FastNoiseLite.h"


enum class ChunkEnums::CellType;
class FastNoiseLite;
class UProceduralMeshComponent;

UCLASS()
class AChunk : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChunk();

	UPROPERTY(EditAnywhere, Category="Chunk")
	int size = 32;

	UPROPERTY(EditAnywhere, Category = "Chunk")
	int scale = 1;

	UFastNoiseWrapper* fastNoiseWrapper = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FastNoiseLite* Noise;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

private:

	TObjectPtr<UProceduralMeshComponent> mesh;

	void GenerateMesh();
	void GenerateHeightMap(const FVector pos);
	int GetIndex(int x, int y, int z, int size);

	ChunkEnums chunkEnums;

	TArray<ChunkEnums::CellType> Cells;


};
