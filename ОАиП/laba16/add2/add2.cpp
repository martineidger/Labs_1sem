#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

/*
var 7
1. Дан двумерный массив, состоящий из N строк и М столбцов, а также число d. Найти строку, содержащую число d.
2. В строке подсчитать сумму кодов символов каждого слова. Слова в строке разделены пробелами.
*/

void matrix();
void strings();
void fillMatrix(int** arr, int sizeI, int sizeJ);

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
	int iSize, jSize, num;
	cout << "Enter matrix's size: ";
	cin >> iSize >> jSize;

	int** arr = new int* [iSize];
	for (int i = 0; i < iSize; i++)
	{
		arr[i] = new int[jSize];
	}

	fillMatrix(arr, iSize, jSize);

	cout << "Enter d: ";
	cin >> num;

	for (int i = 0; i < iSize; i++)
	{
		for (int j = 0; j < jSize; j++)
		{
			if (arr[i][j] == num)
			{
				cout << "Line " << i << endl;
				break;
			}
		}
	}

	for (int i = 0; i < iSize; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

void fillMatrix(int** arr, int sizeI, int sizeJ)
{
	for (int i = 0; i < sizeI; i++)
	{
		for (int j = 0; j < sizeJ; j++)
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
	string str, text;
	int len, lenStr, countCode = 0, sizeArr = 10;
	//int* arr = new int[sizeArr];

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
		else
		{
			lenStr = str.size();
			for (int j = 0; j <= lenStr; j++)
			{
				if (str[j] < 0) 
				{
					countCode += str[j] + 1104;
				}
				else {
					countCode += str[j];
				}
			}

			cout << countCode << " ";
			countCode = 0;
			str = "";
		}
	}
	cout << endl;

	//delete[]arr;
}