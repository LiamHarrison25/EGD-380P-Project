// Fill out your copyright notice in the Description page of Project Settings.


#include "Chunk.h"

// Sets default values
AChunk::AChunk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChunk::BeginPlay()
{
	Super::BeginPlay();
	
	fastNoiseWrapper = CreateDefaultSubobject<UFastNoiseWrapper>(TEXT("FastNoiseWrapper"));

	//fastNoiseWrapper->SetupFastNoise() //noise type, seed, frequency, interpolation, fractal type, fractal octaves, fractal lacunarity, fractal gain, cellular jitter, cellular distance function, cellular return type
	
}

// Called every frame
void AChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChunk::GenerateMesh()
{
	GenerateHeightMap((GetActorLocation() / 100));
}


void AChunk::GenerateHeightMap(const FVector pos)
{
	int x, y, z;
	for (x = 0; x < size; ++x)
	{
		for (y = 0; y < size; ++y)
		{
			for (z = 0; z < size; ++z)
			{
				//const auto NoiseValue = Noise->GetNoise(x + pos.X, y + pos.Y, z + pos.Z);
				//fastNoiseWrapper->;
				const auto NoiseValue = 0; //TODO: change this line

				if (NoiseValue >= 0) //cube is a block type of air
				{
					Cells[GetIndex(x, y, z, size)] = ChunkEnums::CellType::Air;
				}
				else
				{
					Cells[GetIndex(x, y, z, size)] = ChunkEnums::CellType::Ground;
				}
			}
		}
	}
}

int AChunk::GetIndex(int x, int y, int z, int size)
{
	//linearization
	return z * size * size + y * size + x;
}

