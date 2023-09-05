#include <iostream>
#include <windows.h>

using namespace std;

/*
var 11
1. Изменить одномерный массив, вычеркнув из него нечетные элементы.
2. Дана целочисленная квадратная матрица. Если она не содержат отрицательных элементов, то определить сумму элементов в тех строках, где отрицательные элементы отсутствуют
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
void printArray(int*, int&);

void num1()
{
	int size, k = 0;
	int* arr, * arrRes;

	cout << "Enter size: ";
	cin >> size;

	arr = (int*)malloc(size * sizeof(int));
	arrRes = (int*)malloc(size * sizeof(int));

	fillArray(arr, size);

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arrRes[k] = arr[i];
			k++;
		}
	}

	printArray(arrRes, k);

	free(arr);
	free(arrRes);
}

void fillArray(int* arr, int &n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArray(int* arr, int &size) 
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void fillMatrix(int**, int&);

void num2()
{
	int size, sum = 0, k = 0, count = 0;

	cout << "Size of matrix [n] = ";
	cin >> size;

	int** arr = new int* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new int[size];
	}

	fillMatrix(arr, size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] >= 0)
			{
				count++;
			}
			sum += arr[i][j];
			if (count == size)
			{
				cout << "String : " << i << endl << "Sum = " << sum << endl << endl;
			}
		}
		sum = 0;
		count = 0;
	}


}

void fillMatrix(int** arr, int &size)
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