#include <iostream>
#include <windows.h>

using namespace std;

/*
var 12
1. Найти количество отрицательных элементов, стоящих на чётных местах в одномерном массиве.
2. Проверить, есть ли в матрице хотя бы одна строка, содержащая отрицательный элемент, и найти ее номер. Все элементы столбца с таким же номером уменьшить вдвое.
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

void num1()
{
	int size, count = 0;
	int* arr;

	cout << "Enter size: ";
	cin >> size;

	arr = (int*)malloc(size * sizeof(int));

	fillArray(arr, size);

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0 && i % 2 == 0)
		{
			count++;
		}
	}

	cout << "Count = " << count << endl;
}

void fillArray(int* arr, int &n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = -5+rand() % 15;
		cout << arr[i] << " ";
	}
	cout << endl;
}

void fillMatrix(double**, int&);
void printMatrix(double**, int&);
void divisElem(double**, int&, int&);

void num2()
{
	srand(time(NULL));

	int size, numStr = 0, k = 0, count = 0;

	cout << "Size of matrix [n] = ";
	cin >> size;

	double** arr = new double* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new double[size];
	}

	fillMatrix(arr, size);

	for (int i = 0; i < size; i++)
	{
		while (k < size)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[k][j] < 0)
				{
					count++;
				}
			}
			if (count > 0)
			{
				cout << "Number of string : " << k << endl;
				i = size;
				break;

			}
			k++;
			count = 0;
		}
	}
	cout << endl;

	divisElem(arr, size, k);

	printMatrix(arr, size);

	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}

	delete[]arr;
}
void fillMatrix(double** arr, int &size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = -3 + rand() % 15;
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

void divisElem(double** arr, int &size, int &str)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == str)
			{
				arr[i][j] /= 2;
			}
		}
	}
}

void printMatrix(double** arr, int &size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}