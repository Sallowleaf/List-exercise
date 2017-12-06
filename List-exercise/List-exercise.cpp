// List-exercise.cpp : Largest element in the list.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include <algorithm>


int MaxFunction(std::vector <int>& A)
{
	int Max=A[0];
	for (int i = 1; i < A.size() - 1; i++)
		if (Max < A[i])	Max = A[i];

	return Max;
}

int main()
{
	std::vector <int> A{ 1,2,56,688,615,2,48,65,78,32 };

	std::cout << MaxFunction(A) << "\n";
	/*std::cout << *std::max_element(A.begin(), A.end()) << "\n";*/

	return 0;
}

