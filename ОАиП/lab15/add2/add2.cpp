#include <iostream>
#include <malloc.h>

//var12

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
	//1. Задан массив A из n элементов. Подсчитать, сколько раз встречается в нем максимальное число.
	int n, max, count = 0;

	cout << "Size: ";
	cin >> n;

	float* arr;
	arr = (float*)malloc(n * sizeof(float));

	/*cout << "arr: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}*/

	cout << "arr: ";
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 20;
		cout << arr[i] << " ";
	}
	cout << endl;

	max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	cout << "Max: " << max << endl;

	for (int i = 0; i < n; i++) {
		if (arr[i] == max) {
			count++;
		}
	}
	cout << "Count: " << count << endl;
	free(arr);
}

void num2()
{
	//2. Проверить, есть ли в матрице хотя бы одна строка, содержащая положительный элемент, и найти ее номер.
	//Знаки элементов предыдущей строки изменить на противоположные.

	int n, m, line=0;

	cout << "Enter size of matrix: ";
	cin >> n >> m;

	float** arr = new float* [n];
	cout << "arr: " << endl;
	for (int i = 0; i < n; i++) {
		arr[i] = new float[m];
		for (int j = 0; j < m; j++) {
			arr[i][j] = -3+rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > 0) {
				line = i;
				i = n;
				j = m;
				break;
				
			}
		}
	}


	cout << "Line: " << line << endl;

	if (line == 0) {
		line = m;
	}
		
	cout << "New arr: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			if (i == line - 1) {
				arr[i][j] *= -1;
			}

			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}