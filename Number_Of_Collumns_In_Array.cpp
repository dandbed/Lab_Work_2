#include "pch.h"
#include "Library.h"

Int32 Number_Of_Collumns_In_Array()
{
	const Int32 M = 6;
	Boolean flag = false;
	String^ Number;
	Int32 Num = 0;

	while (flag == false)
	{
		Console::Write("Enter the number of collumns in array less than 6 or equal 6-> ");
		Number = Console::ReadLine();

		Num = Convert::ToInt32(Number);

		if ((Num <= M) && (Num > 0))
		{
			flag = true;

			Console::WriteLine();
			Console::WriteLine("Number of collumns in array is correct.");
			Console::WriteLine();
		}
		else
		{
			Console::WriteLine("Error! You enter wrong number of collumns in array. Try again.");
		}
	}

	return Num;
}