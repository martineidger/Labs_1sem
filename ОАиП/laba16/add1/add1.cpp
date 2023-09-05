#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

/*
var 2
1. Ввести вещественные числа в массив А[n, m] (n, m > 0) и ко всем числам каждой строки  прибавить единицу. Если первый элемент строки нулевой, ничего не делать.
2. Дана строка. Все русские буквы привести к верхнему регистру, латинские  заменить символом «?». Вывести результат на экран.
*/

void matrix();
void strings();
void fillMatrix(int**, int);
void printMatrix(int**, int);


int main()
{
	//setlocale(LC_ALL, "ru");
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

void fillMatrix(double** arr, int sizeI, int sizeJ)
{
	int rn = 10;

	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			/*arr[i][j] = (double)rand() / (double)(RAND_MAX / rn);

			cout.precision(2);*/
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void printMatrix(double** arr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
}

void matrix() 
{
	int n, m;

	cout << "Enter matrix's size: "; 
	cin >> n >> m;

	double** arr = new double* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new double[m];
		/*for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}*/
	}
	fillMatrix(arr, n, m);

	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i][0] != 0) 
		{
			for (int j = 0; j < m; j++)
			{
				arr[i][j]++;
			}
		}
	}

	printMatrix(arr, n, m);

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}

	delete[]arr;
}

void strings()
{
	string str;
	int n;

	cout << "str: ";
	cin >> ws;
	getline(cin, str);

	n = str.size();

	for (int i = 0; i < n; i++) 
	{
		if ((str[i] >= 'а') && (str[i] <= 'я'))
		{
			str[i] -= 32;
			//cout << "str i " << str[i] << endl;
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = '?';
		}
		cout << str[i];
	}
	cout << endl;
}