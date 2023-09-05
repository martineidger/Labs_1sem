#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{

	//3.Из заданного предложения удалить те слова, которые уже встречались в предложении раньше.

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n, count = 0, kol = 0;
	string text, str;
	string arr[100];

	cout << "Enter str: ";
	getline(cin, text);

	n = text.size();
	text = text + " ";

	for (int i = 0; i <= n; i++) 
	{
		if (text[i] != ' ') 
		{
			str = str + text[i];
		}
		else 
		{
			for (int k = 0; k <= count - 1; k++) 
			{
				if (str == arr[k])
				{
					kol++;
				}
			}
			if (kol < 1) 
			{
				arr[count] = str;
				count++;
			}

			kol = 0;
			str = "";
		}
	}
	for (int j = 0; j <= count + 1; j++) 
	{
		cout << arr[j] << " ";
	}
	//return 0;
}
