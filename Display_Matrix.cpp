#include "pch.h"
#include "Library.h"

void Display_Matrix(array<int, 2>^ A, Int32 N, Int32 M)
{
	for (Int32 i = 0; i < N; i++)
	{
		for (Int32 j = 0; j < M; j++)
		{
			Console::Write("{0} ", A[i, j]);
		}

		Console::WriteLine();
	}

	return;
}