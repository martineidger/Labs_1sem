#include <iostream>
#include <windows.h>

using namespace std;

void ruLetter()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char letter, otherRegister{};
	int differenceOfCodes = 0;
	const char FIRST_BIG_LIM = 'А', FIRST_SMALL_LIM = 'а', LAST_BIG_LIM = 'Я', LAST_SMALL_LIM = 'я';
	const int DIF_REG = 32;

	cout << "Введите русскую букву: ";
	cin >> letter; 

	if (letter >= FIRST_BIG_LIM && letter <= LAST_SMALL_LIM) {

		if (letter >= FIRST_BIG_LIM && letter <= LAST_BIG_LIM)
		{
			otherRegister = letter + DIF_REG;
		}
		if (letter >= FIRST_SMALL_LIM && letter <= LAST_SMALL_LIM)
		{
			otherRegister = letter - DIF_REG;
		}
		differenceOfCodes = int(abs(letter - otherRegister));
		printf("Разница значений кодов %c и %c : %d \n\n", letter, otherRegister, differenceOfCodes);

	}
	else {
		printf("Некорретно введенные данные. \n\n");
	}

}