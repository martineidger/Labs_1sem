#include <iostream>
#include <windows.h>

using namespace std;

/*
var 3
1. В массиве из целых чисел определить сумму элементов, расположенных между первым и последним нулевыми элементами
2. Если есть в матрице строка, все элементы которой положительны, то найти сумму этих элементов. Уменьшить все элементы матрицы на эту сумму.
*/

void num1();
void num2();

int main()
{
	int task;

	bool cycle = true;
	while (cycle)
	{
		cout << "Enter task's number: ";
		cin >> task;

		switch (task)
		{
		case 1:
		{
			num1();
			system("pause");
			system("cls");
			break;

		}
		case 2:
		{
			num2();
			system("pause");
			system("cls");
			break;

		}
		default:
			cycle = false;
			break;
		}
	}
}

void fillArray(int*, int&);
int sumEl(int*, int&, int&);

void num1()
{
	int size, firstPoz = 0, lastPoz = 0, sum = 0;

	cout << "Enter size: ";
	cin >> size;

	int *arr = new int [size];

	//fillArray(arr, size);

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			firstPoz = i;
			break;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			lastPoz = i;
		}
	}

	sum = sumEl(arr, firstPoz, lastPoz);

	cout << "Sum = " << sum << endl;

	delete[]arr;
}

void fillArray(int* arr, int &size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = -1 + rand() % 10;
		cout << arr[i] << " ";
	}
}

int sumEl(int* arr, int &n, int &m)
{
	int sum = 0;
	for (int i = n; i <= m; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void fillMatrix(double**, int&, int&);
void reduceElem(double**, int&, int&, int&);
void printMatrix(double**, int&, int&);

void num2()
{
	int ISize, JSize;
	int count = 0, k = 0, sum = 0;

	cout << "Size of matrix[i j]: ";
	cin >> ISize >> JSize;

	double** arr = new double* [ISize];
	for (int i = 0; i < ISize; i++)
	{
		arr[i] = new double[JSize];
	}

	cout << "Matrix : " << endl;
	fillMatrix(arr, ISize, JSize);

	while (k < JSize)
	{
		for (int j = 0; j < JSize; j++)
		{
			if (arr[k][j] >= 0)
			{
				count++;
				sum += arr[k][j];
			}
		}
		if (count == JSize)
		{
			cout << "Number of string : " << k << endl;
			cout << "Sum of elements : " << sum << endl;
			break;
		}
		k++;
		sum = 0;
		count = 0;
	}

	reduceElem(arr, ISize, JSize, sum);

	printMatrix(arr, ISize, JSize);

	for (int i = 0; i < ISize; i++)
	{
		delete[] arr[i];
	}

	delete[]arr;
}

void fillMatrix(double** arr, int &iSize, int &jSize)
{
	for (int i = 0; i < iSize; i++)
	{
		for (int j = 0; j < jSize; j++)
		{
			arr[i][j] = -3 + rand() % 15;
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

void reduceElem(double** arr, int &iSize, int &jSize, int &num)
{
	for (int i = 0; i < iSize; i++)
	{
		for (int j = 0; j < jSize; j++)
		{
			arr[i][j] -= num;
		}
	}
}

void printMatrix(double** arr, int &ISize, int &JSize)
{
	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}