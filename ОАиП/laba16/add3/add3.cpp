#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

/*
var 4
1. Ввести целочисленный массив A[n, n] и вычесть из каждой строки предыдущую. Из первой строки вычесть последнюю строку. Получившийся массив вывести.
2. Дана строка. Слова в предложении разделены одним или несколькими пробелами. Слова могут состоять только из цифр или букв. Найти сумму чисел, входящих в строку.
*/

void matrix();
void strings();
void fillMatrix(int**, int);
void printMatrix(int**, int);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

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
			matrix();
			system("pause");
			system("cls");
			break;

		}
		case 2:
		{
			strings();
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

void matrix()
{
	srand(time(NULL));

	int size, numStr = 0, k = 0, count = 0;

	cout << "Size of matrix[n] = ";
	cin >> size;

	int** arr = new int* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new int[size];
	}

	int** arrRes = new int* [size];
	for (int i = 0; i < size; i++)
	{
		arrRes[i] = new int[size];
	}

	fillMatrix(arr, size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == 0)
			{
				arrRes[i][j] = arr[i][j] - arr[size - 1][j];
			}
			else {
				arrRes[i][j] = arr[i][j] - arr[i - 1][j];
			}
		}
	}

	printMatrix(arrRes, size);

	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
		delete[] arrRes[i];
	}
	delete[]arr;
	delete[] arrRes;

}

void printMatrix(int** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

void fillMatrix(int** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

void strings()
{
	int sum = 0, count = 0; bool bol = false;

	cout << "str:";
	string str, str1;
	cin >> ws;
	getline(cin, str);

	for (int i = 0; i < size(str); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			int k = i;
			while (str[k] >= '0' && str[k] <= '9') {
				str1.push_back(str[k]);
				k++;
			}
		}
		for (int j = 0; j < size(str1); j++) {
			if (j == size(str1) - 1)
				sum += str1[j] - '0';
			else
				sum += (str1[j] - '0') * pow(10, (size(str1) - 1 - j));
			count++;
			bol = true;
		}
		if (bol == true) {
			str1 = "";
			i += count - 1;
			count = 0;
		}
		bol = false;
	}
	cout << "Sum = " << sum << endl;
}