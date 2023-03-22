#include <iostream>
#include <windows.h>

using namespace std;

void ruLetter()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char letter, otherRegister{};
	int differenceOfCodes = 0;
	const char FIRST_BIG_LIM = '�', FIRST_SMALL_LIM = '�', LAST_BIG_LIM = '�', LAST_SMALL_LIM = '�';
	const int DIF_REG = 32;

	cout << "������� ������� �����: ";
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
		printf("������� �������� ����� %c � %c : %d \n\n", letter, otherRegister, differenceOfCodes);

	}
	else {
		printf("���������� ��������� ������. \n\n");
	}

}