#include <iostream>
#include <windows.h>

using namespace std;

/*
1. Найти сумму минимального и максимального элементов одномерного массива.
2. Проверить, все ли строки матрицы содержат хотя бы один нулевой элемент. Если нет, то заменить значения всех отрицательных элементов матрицы на нулевые.
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

int minArr(int* arr, int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int maxArr(int* arr, int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
void FillMassive(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << " ";
	}
	cout << endl;
}
void num1()
{
	srand(time(NULL));

	int size, min, max;
	int* arr;
	cout << "Enter size: ";
	cin >> size;
	arr = (int*)malloc(size * sizeof(int));

	FillMassive(arr, size);

	min = minArr(arr, size);
	max = maxArr(arr, size);

	int sum = min + max;
	cout << "min + max = " << sum << endl;

	free(arr);
}


void FillMatrix(int** arr, int iSize, int jSize)
{
	for (int i = 0; i < iSize; i++)
	{
		for (int j = 0; j < jSize; j++)
		{
			arr[i][j] = -5 + rand() % 10;
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
}
void PrintMatrix(int** arr, int iSize, int jSize)
{
	for (int i = 0; i < iSize; i++)
	{
		for (int j = 0; j < jSize; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}
void num2()
{
	int iSize, jSize;
	int count = 0, countLine = 0;

	cout << "Enter matrix's size: ";
	cin >> iSize >> jSize;

	int** arr = new int* [iSize];
	for (int i = 0; i < iSize; i++)
	{
		arr[i] = new int[jSize];
	}

	FillMatrix(arr, iSize, jSize);


	/*for (int i = 0; i < iSize; i++)
	{
		for (int j = 0; j < jSize; j++)
		{
			cin >> arr[i][j];
		}
	}*/

	for (int i = 0; i < iSize; i++)
	{
		for (int j = 0; j < jSize; j++)
		{
			if (arr[i][j] == 0)
			{
				count++;
			}
		}
		if (count > 0)
		{
			countLine++;
		}
		count = 0;
	}

	if (countLine != jSize)
	{
		for (int i = 0; i < iSize; i++)
		{	
			for (int j = 0; j < jSize; j++)
			{
				if (arr[i][j] < 0)
				{
					arr[i][j] = 0;
				}
			}
		}
	}

	PrintMatrix(arr, iSize, jSize);

	for (int i = 0; i < iSize; i++)
	{
		delete[] arr[i];
	}

	delete[]arr;

}