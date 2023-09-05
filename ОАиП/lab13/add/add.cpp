#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

int main()
{
	//1.¬ заданной последовательности слов найти все слова, имеющие заданное окончание.

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int len, lenEnd, k = 0, count = 0;
	string text, str, end;

	cout << "Enter str: ";
	getline(cin, text);

	cout << "Enter end: ";
	getline(cin, end);

	len = text.size();
	lenEnd = end.size();

	text = text + " ";

	cout << endl;

	for (int i = 0; i <= len; i++)
	{
		if (text[i] != ' ')
		{
			str = str + text[i];
		}
		else
		{
			for (int j = 0; j <= lenEnd; j++)
			{
				if (end[lenEnd - j] == text[i - j])
				{
					count++;
				}
			}
			if (count == lenEnd)
			{
				cout << str << " ";
			}

			str = "";
			count = 0;
		}
	}
	cout << endl;

				
}

