// List-exercise.cpp : Largest element in the list.
//

#include "stdafx.h"
#include<iostream>
#include<vector>

int main()
{
	std::vector <int> A{ 1,2,56,688,615,2,48,65,78,32 };
	//std::cout << A.size() - 1;

	int Max = 0;
	for (int i = 0; i <= A.size() - 1; i++)
	{
		if (A[i] <= A[i + 1])
			Max = A[i + 1];
		else
			Max = A[i];
	}

	std::cout << Max << "\n";
	return 0;
}

