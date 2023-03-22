#include <iostream>
#include <windows.h>
#include "zad1.h"
#include "zad2.h"
#include "zad3.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	cout << "1 - определение разницы значений кодов латинской буквы в прописном и строчном написании" << endl;
	cout << "2 - определение разницы значений кодов русской буквы в прописном и строчном написании" << endl;
	cout << "3 - определение кода введенной цифры" << endl;
	cout << "4 - выход из программы" << endl << endl;

	char m;

	bool prover = true;

	while (prover) {

		cout << "Введите номер : ";
		cin >> m;
		if (m >= '0' && m <= '9')
		{
			int n = m - '0';
			switch (n)
			{
			case 1:
			{
				zad1();
				break;
			}
			case 2:
			{
				zad2();
				break;
			}
			case 3:
			{
				zad3();
				break;
			}
			case 4:
			{
				prover = false;
				break;
			}
			default:
			{
				cout << "Некорретный ответ." << endl << endl;
				break;
			}
			}
		}
		else
		{
			cout << "Введите цифру." << endl << endl;
		}
	}
}