#include "pch.h"
#include "Library.h"

void Input_Elements_In_Matrix(array<int, 2>^ A, Int32 N, Int32 M)
{
	String^ Element;

	for (Int32 i = 0; i < N; i++)
	{
		for (Int32 j = 0; j < M; j++)
		{
			Console::Write("Enter the [{0}][{1}] element-> ", i, j);
			Element = Console::ReadLine();

			A[i, j] = Convert::ToInt32(Element);

			Console::WriteLine();
		}
	}
	return;
}