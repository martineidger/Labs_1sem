#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

/*
1. Изменить массив A[n, n] так, чтобы в строках остались числа, которые встречаются более одного раза, остальные заменить нулём.  
2. Определить количество слов в строке, которые слева и справа читаются одинаково (палиндромы). Слова разделены пробелами.
*/

void matrix();
void strings();
void fillMatrix(int** arr, int size);
void printMatrix(int** arr, int size);


int main()
{
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int task;
	
	bool cycle = true;
	while(cycle)
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

	fillMatrix(arr, size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int p = 0; p < size; p++)
			{
				for (int t = 0; t < size; t++)
				{
					if (arr[i][j] == arr[p][t])
						count++;
				}
			}
			if (count < 2)
			{
				arr[i][j] = 0;
			}
			count = 0;
		}
	}

	printMatrix(arr, size);

	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}

	delete[]arr;
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

void strings()
{
	string str, text;
	int len, lenStr, lenRev, count = 0, countWords = 0;

	cout << "Enter str: ";
	cin >> ws;
	getline(cin, text);
	cout << endl;

	len = text.size();

	text = text + " ";

	for (int i = 0; i <= len; i++)
	{
		if (text[i] != ' ')
		{
			str = str + text[i];
		}
		else {
			lenStr = str.size();
			lenRev = lenStr / 2;
			for (int j = 0; j < lenRev; j++)
			{
				if (str[j] == str[lenStr - 1 - j])
				{
					count++;

				}
			}
			if (count == lenRev)
			{
				cout << str << ' ';
				countWords++;
				
			}
			count = 0;
			str = "";

		}
	}
	cout << endl;
	cout << "Number of words: " << countWords << endl;
}