#include <iostream>
#include <string>

using namespace std;

int main()
{
	char str[30], str_result[30];
	int k = 0;

	//cin >> str;
	gets_s(str);

	int lenght = strlen(str);

	for (int i = 0; i < lenght; i++)
	{
		if (str[i] != '*')
		{
			str_result[k] = str[i];
			k++;
		}
	}

	int len_res = k;
	for (int i = 0; i < len_res; i++)
	{
		cout << str_result[i] << str_result[i];
	}
	cout << endl;
}


