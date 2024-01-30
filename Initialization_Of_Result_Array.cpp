#include "pch.h"
#include "Library.h"

array<Int32>^ Initialization_Of_Result_Array(int M)
{
	array<Int32>^ C = gcnew array<Int32>(M);

	for (Int32 j = 0; j < M; j++)
	{
		C[j] = 0;
	}

	return C;
}