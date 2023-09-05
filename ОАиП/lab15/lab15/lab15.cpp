#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>		

using namespace std;

int main()
{
	//. В одномерном массиве, состоящем из n вещественных элементов, вычислить минимальный элемент массива и сумму элементов, расположенных между первым и последним положительными элементами.

	srand(time(NULL));

	int size, rn = 10;
	cout << "Size of massive: ";
	cin >> size;

	double *arr;

	arr = (double*) malloc(size * sizeof(double));

	cout << "Massive: " << endl;

	for (int i = 0; i < size; i++)
	{
		arr[i] = -5+(double)rand() / (double)(RAND_MAX / rn);

		cout.precision(2);
		cout << arr[i] << " ";
	}
	
	cout << endl;

	double min = arr[0];
	int numMin = 0;
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] < min)
		{
			min = arr[i];
			numMin = i;
		}
	}

	int firstNum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			firstNum = i;
			break;
		}
	}

	int lastNum = 0;
	for (int i = size-1; i >= 0; i--)
	{
		if (arr[i] > 0)
		{
			lastNum = i;
			break;
		}
	}

	double sum = 0;
	for (int i = firstNum + 1; i < lastNum; i++)
	{
		sum += arr[i];
	}

	cout << "Min = " << min << endl;
	cout << "Number of first positive: " << firstNum << endl;
	cout << "Number of last positive: " << lastNum << endl;
	cout << "Sum: " << sum << endl;

	free(arr);
}