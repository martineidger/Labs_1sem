#include <iostream>
using namespace std;

void main()
{
	int massS[5] = { 10, 2,3,4,5 },
		massD[5] = { 6,7,8,9,10 };
	int f;

	cout << "Enter f = ";
	cin >> f;

	int iCount = 0;
	int jCount = 0;

	int temp = massS[0] + massD[0];

	int* sum = &temp;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (abs(f - *sum) > abs(*(massS + i) + *(massD + j) - f))
			{
				temp = *(massS+i) + *(massD+j);
				iCount = i;
				jCount = j;
			}
		}
	}

	cout << "massS[" << iCount << "] + massD[" << jCount << "] = " << *sum;

}