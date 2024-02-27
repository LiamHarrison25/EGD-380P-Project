// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


class ChunkEnums
{
public:

	enum class ChunkDirections
	{
		Forward,
		Right,
		Back,
		Left,
		Up,
		Down
	};

	enum class CellType
	{
		Null, Air, Ground
	};
};
