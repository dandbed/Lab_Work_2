#include "pch.h"
#include "Library.h"

Int32 Number_Of_Strings_In_Array()
{
	const Int32 N = 3;
	Boolean flag = false;
	String^ Number;
	Int32 Num = 0;

	while (flag == false)
	{
		Console::Write("Enter the number of strings in array less than 3 or equal 3-> ");
		Number = Console::ReadLine();

		Num = Convert::ToInt32(Number);

		if ((Num <= N) && (Num > 0))
		{
			flag = true;

			Console::WriteLine();
			Console::WriteLine("Number of strings in array is correct.");
			Console::WriteLine();
		}
		else
		{
			Console::WriteLine("Error! You enter wrong number of strings in array. Try again.");
		}
	}

	return Num;
}