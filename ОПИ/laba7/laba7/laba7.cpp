#include <iostream>
#include <windows.h>
#include "latin_letter.h"
#include "ru_letter.h"
#include "number_code.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "1 - определение разницы значений кодов латинской буквы в прописном и строчном написании" << endl;
	cout << "2 - определение разницы значений кодов русской буквы в прописном и строчном написании" << endl;
	cout << "3 - определение кода введенной цифры" << endl;
	cout << "4 - выход из программы" << endl << endl;

	const char FIRST_LIM = '0', LAST_LIM = '9';
	char chooseTaskStr{};
	bool cycleSwitch = true;

	while (cycleSwitch) {

		cout << "Введите номер : ";
		cin >> chooseTaskStr;
		if (chooseTaskStr >= FIRST_LIM && chooseTaskStr <= LAST_LIM)
		{
			int chooseTask = chooseTaskStr - FIRST_LIM;

			switch (chooseTask)
			{
			case 1:
			{
				latinLetter();
				break;
			}
			case 2:
			{
				ruLetter();
				break;
			}
			case 3:
			{
				numberCode();
				break;
			}
			case 4:
			{
				//cycleSwitch = false;
				return 0;
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