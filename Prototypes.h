#pragma once
#include "Library.h"
#include "pch.h"

void Menu();
Int32 Number_Of_Strings_In_Array();
Int32 Number_Of_Collumns_In_Array();
void Initialization_Of_Matrix(array<int, 2>^ A, Int32 N, Int32 M);
void Input_Elements_In_Matrix(array<int, 2>^ A, Int32 N, Int32 M);
void Display_Matrix(array<int, 2>^ A, Int32 N, Int32 M);
array<Int32>^ Initialization_Of_Result_Array(int M);
void Display_Array(array<int>^ C, Int32 M);
Int32 Search_Of_Max_Element_In_Collumn(array<int, 2>^ A, Int32 N, Int32 j);