#include <iostream>

using namespace std;

int main()
{

	//.Проверить, есть ли в матрице хотя бы одна строка, содержащая отрицательный элемент, и найти ее номер.Все элементы столбца с таким же номером уменьшить вдвое.

	srand(time(NULL));

	int ISize, JSize, numStr = 0, k = 0, count = 0;

	cout << "Size of matrix = ";
	cin >> ISize >> JSize;

	double** arr = new double* [ISize];
	for (int i = 0; i < ISize; i++)
	{
		arr[i] = new double[JSize];
	}

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			arr[i][j] = -3+rand() % 17;
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;


	for (int i = 0; i < ISize; i++)
	{
		while (k < JSize)
		{
			for (int j = 0; j < JSize; j++)
			{
				if (arr[k][j] < 0)
				{
					count++;
				}
			}
			if (count > 0)
			{
				cout << "Number of string : " << k << endl;
				i = ISize;
				break;
				
			}
			k++;
			count = 0;
		}
	}
	cout << endl;


	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			if (j == k)
			{
				arr[i][j] /= 2;
			}
		}
	}

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}


	for (int i = 0; i < ISize; i++)
	{
		delete[] arr[i];
	}

	delete[]arr;
}

