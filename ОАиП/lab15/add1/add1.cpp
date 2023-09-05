#include <iostream>
#include <malloc.h>

//var 7

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
	//1. Задан массив A из n элементов.Найти количество элементов этого массива,
	//больших среднего арифметического всех его элементов.

	int n, count = 0;
	float average = 0;

	cout << "Size: ";
	cin >> n;

	int* arr;
	arr = (int*)malloc(n * sizeof(int));
	//int* arr = new int[n];

	cout << "arr: ";
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 20;
		average += arr[i];
		cout << arr[i] << " ";
	}

	average /= n;
	cout << endl;
	cout << "Average: " << average << endl;

	for (int i = 0; i < n; i++) {
		if (arr[i] > average) {
			count++;
		}
	}
	cout << "Count: " << count << endl;

	//delete[] arr;
	free(arr);
}

void num2()
{
	// 2. Дана целочисленная прямоугольная матрица. Определить количество строк, не содержащих ни одного нулевого элемента 
	//и максимальное из чисел, встречающихся в заданной матрице более одного раза.
	int n, m, counterZero = 0, counterOfLine = 0, max, meet = 0, maxCounter[30], size = 0;

	cout << "Enter size of matrix: ";
	cin >> n >> m;

	int** arr = new int* [n];

	cout << "arr: " << endl;
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 14;
			if (arr[i][j] < 10) {
				cout << "  " << arr[i][j];
			}
			else {
				cout << " " << arr[i][j];
			}
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				counterZero++;
			}
		}
		if (counterZero == 0) {
			counterOfLine++;
		}
		counterZero = 0;
	}

	cout << "Counter of lines without zero: " << counterOfLine << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int t = 0; t < n; t++) {
				for (int k = 0; k < m; k++) {
					if (arr[i][j] == arr[t][k]) {
						meet++;
					}
				}
			}
			if (meet > 1) {
				maxCounter[size] = arr[i][j];
				size++;
			}
			meet = 0;
		}
	}

	max = maxCounter[0];
	for (int i = 0; i < size; i++) {
		if (maxCounter[i] > max) {
			max = maxCounter[i];
		}
	}


	cout << "Max meet number: " << max << endl;

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}