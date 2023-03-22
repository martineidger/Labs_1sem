#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>

std::string;
using namespace std;

int main()
{
	//НЕЗАКОНЧЕНА
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char symbol, codeDecStr;
	string decBig;
	int counter = 0, k = 0, dec = 0;
	//long long bin = 0;
	int num[20];
	const char FIRST_LIM = '!', LAST_LIM = '}';

	cin>> symbol;
	if (symbol >= FIRST_LIM && symbol <= LAST_LIM) {

		long int codeDec = (int)symbol;

		/*if (codeDec < 0)
		{
			codeDec = codeDec + 1104;
		}*/
		//cout << codeDec << endl;
		//for (int i = 0; codeDec > 0; i++)
		//{
		//	bin += codeDec % 2 * pow(10, i);
		//	codeDec /= 2;
		//	counter++;
		//}
		//cout << bin << endl;
		///*codeDecStr = codeDec + '0';*/
		///*string to_string(int codeDec);*/
		///*sprintf(codeDecStr, "%f", codeDec);*/
		//
		//string binS = to_string(bin);

		//if (counter < 7)
		//{
		//	decBig = "00" + binS;
		//}
		//if (counter>6 && counter < 8)
		//{
		//	decBig = "0" + binS;
		//}
		//cout << decBig << endl;

		////decBig = decBig - '0';

		//int codeDec2 = stoi(decBig);

		//if (counter < 7) {
		//	/*for (int i = 0; i < counter + 2; i++)
		//	{
		//		num[i] = codeDec2 % 10;
		//		codeDec2 /= 10;
		//		k++;
		//	}*/
		//}

		//if (counter > 6 && counter < 8) {
		//	for (int i = 0; i < counter + 1; i++)
		//	{
		//		num[i] = codeDec2 % 10;
		//		codeDec2 /= 10;
		//		k++;
		//	}

		//}

		//for (int i = 0; i < k; i++)
		//{
		//	dec += num[i] * pow(2, i + k);
		//}

		//for (int i = 0; i < k; i++)
		//{
		//	cout << num[i];
		//}
		//cout << endl;
		printf("%X\n", codeDec);
	}
	else {
		cout << "Мы пока не можем работать с такими символами, но в скором времени мы их добавим! " << endl;
	}
	/*if (counter > 7 && counter < 12)
	{
		decBig='1'+'1'+codeDecStr+
	}*/

}