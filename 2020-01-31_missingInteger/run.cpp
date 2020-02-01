#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int solution(vector<int>& A)
{
	//sorting vector from lowest number to highest number
	sort(begin(A), end(A));

	//finding minimum integer value not in array
	int minimum = 1;
	for (auto item : A)
	{
		if (minimum == item)
		{
			minimum++;
		}
	}
	return minimum;
}
