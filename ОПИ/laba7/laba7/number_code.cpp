#include <iostream>
#include <windows.h>

using namespace std;

void numberCode()
{
	char number;
	const char FIRST_LIM = '0', LAST_LIM = '9';
	cout << "������� �����: ";
	cin >> number;

	if (number >= FIRST_LIM && number <= LAST_LIM)
	{
		printf("��� ��������� ����� %c : %x \n\n", number, number);
	}
	else {
		printf("���������� ��������� ������. \n\n");
	}

}