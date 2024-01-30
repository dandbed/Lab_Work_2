#include "pch.h"
#include "Library.h"

Int32 Search_Of_Max_Element_In_Collumn(array<int, 2>^ A, Int32 N, Int32 j)
{
	Int32 Max = A[0, j];

	for (Int32 i = 1; i < N; i++)
	{
		if (Max < A[i, j])
		{
			Max = A[i, j];
		}
	}

	return Max;
}