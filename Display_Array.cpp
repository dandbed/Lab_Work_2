#include "pch.h"
#include "Library.h"

void Display_Array(array<int>^ C, Int32 M)
{
	for (Int32 j = 0; j < M; j++)
	{
		Console::Write("{0} ", C[j]);
	}

	return;
}