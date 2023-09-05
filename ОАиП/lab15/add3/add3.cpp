#include <iostream>
#include <malloc.h>

//var9

using namespace std;

void num1();
void num2();

int main()
{
	bool cycle = true;
	int task;

	while (cycle)
	{
		cout << "Enter task's number: ";
		cin >> task;
		switch (task)
		{
		case(1):
		{
			num1();
			system("pause");
			system("cls");
			break;
		}
		case (2):
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

void num1()
{
	//1. В одномерном массиве, состоящем из n элементов, вычислить произведение положительных 
	//элементов массива и сумму элементов массива, расположенных до минимального элемента.

	int n, min, mul = 1, sum = 0, indMin=0;

	cout << "Size: ";
	cin >> n;

	int* arr;
	arr = (int*)malloc(n * sizeof(int));

	cout << "arr: ";
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 40 - 20;
		cout << arr[i] << " ";
	}
	cout << endl;

	min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			indMin = i;

		}
		if (arr[i] > 0) {
			mul *= arr[i];
		}
	}

	for (int i = 0; i < indMin; i++) {
		sum += arr[i];
	}

	cout << "Min: " << min << endl;
	cout << "Sum: " << sum << endl;
	cout << "Mul: " << mul << endl;

	free(arr);
}

void num2()
{
	//2. Найти в матрице первую строку, все элементы которой положительны, и сумму этих элементов. 
	//Уменьшить все элементы матрицы на эту сумму.

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

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			arr[i][j] = -3 + rand() % 15;
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

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
		if (count == ISize)
		{
			cout << "Number of string : " << k << endl;
			cout << "Sum of elements : " << sum << endl;
			break;
		}
		k++;
		sum = 0;
		count = 0;
	}

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			arr[i][j] -= sum;
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