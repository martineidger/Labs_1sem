#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

int main()
{
	//4.Отредактировать заданное предложение, удаляя из него все слова с нечетными номерами и переворачивая слова с четными номерами. Пример: HOW DO YOU DO преобразовать в OD OD.

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int len, count = 0;
	string text, str;

	cout << "Enter str: ";
	cin >> ws;
	getline(cin, text);

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
			count++;
			if (count % 2 == 0)
			{
				reverse(str.begin(), str.end());
				cout << str << " ";
			}
			str = "";
		}
	}
	cout << endl;
}