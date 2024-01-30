#include "pch.h"
#include "Library.h"

void Initialization_Of_Matrix(array<int, 2>^ A, Int32 N, Int32 M)
{
	for (Int32 i = 0; i < N; i++)
	{
		for (Int32 j = 0; j < M; j++)
		{
			A[i, j] = 0;
		}
	}

	return;
}