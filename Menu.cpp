#include "pch.h"
#include "Library.h"
#include "Prototypes.h"

void Menu()
{
	Int32 Number_strings_of_array = 0, Number_collumns_of_array = 0;

	Number_strings_of_array = Number_Of_Strings_In_Array();
	Number_collumns_of_array = Number_Of_Collumns_In_Array();

	array<Int32, 2>^ A = gcnew array<Int32, 2>(Number_strings_of_array, Number_collumns_of_array);
	array<Int32, 2>^ B = gcnew array<Int32, 2>(Number_strings_of_array, Number_collumns_of_array);

	array<Int32>^ C = Initialization_Of_Result_Array(Number_collumns_of_array);
	array<Int32>^ D = Initialization_Of_Result_Array(Number_collumns_of_array);

	Initialization_Of_Matrix(A, Number_strings_of_array, Number_collumns_of_array);
	Initialization_Of_Matrix(B, Number_strings_of_array, Number_collumns_of_array);

	Console::WriteLine("Input elements in matrix A:");
	Input_Elements_In_Matrix(A, Number_strings_of_array, Number_collumns_of_array);
	Console::WriteLine();

	Console::WriteLine("Input elements in matrix B:");
	Input_Elements_In_Matrix(B, Number_strings_of_array, Number_collumns_of_array);
	Console::WriteLine();

	for (Int32 j = 0; j < Number_collumns_of_array; j++)
	{
		C[j] = Search_Of_Max_Element_In_Collumn(A, Number_strings_of_array, j);
	}

	for (Int32 j = 0; j < Number_collumns_of_array; j++)
	{
		D[j] = Search_Of_Max_Element_In_Collumn(B, Number_strings_of_array, j);
	}

	Console::WriteLine("Initial Matrix A:");
	Display_Matrix(A, Number_strings_of_array, Number_collumns_of_array);
	Console::WriteLine();

	Console::WriteLine("Result of searching the biggest element in collumns of matrix A:");
	Display_Array(C, Number_collumns_of_array);
	Console::WriteLine();

	Console::WriteLine();
	Console::WriteLine("Initial Matrix B:");
	Display_Matrix(B, Number_strings_of_array, Number_collumns_of_array);
	Console::WriteLine();

	Console::WriteLine("Result of searching the biggest element in collumns of matrix B:");
	Display_Array(D, Number_collumns_of_array);
	Console::WriteLine();

	return;
}