// List-exercise.cpp : Largest element in the list.
//

#include "stdafx.h"
#include<iostream>
#include<vector>


int main()
{
	int Max = 0;
	std::vector <int> A{ 1,2,56,688,615,2,48,65,78,32 };
	//std::cout << A.size() - 1;

	
	for (int i = 0; i <= A.size() - 1; i++)
	{
		if (A[i] <= A[i + 1] && Max <= A[i+1])
			Max = A[i + 1];
		else
		{
			if (Max <= A[i])
				Max = A[i];
			else
			{
				Max = Max;
			}
		}
		std::cout << Max << "\n";
	}	
	return 0;
}

