#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void cianemRepku()
{
	string geroi[5] = { "����� ����� �� ������ �����. ", "����� ����� �� ������ ������. ", "������ ����� �� ������ �����. ", "����� ����� �� ������ �����. ", "����� ����� �� ������ �����. " };

	cout << "������� ��� �����, � ��� ������� ������� � ������� - ����������. ������ ����� �� ����������." << endl;
	_getch();
	cout << "����� ����� �����. �������� �� �����.." << endl;
	_getch();

	int counter = 0;
	while (counter < 4) {
		cout << geroi[counter] << "�������� �� �����.." << endl;
		counter++;
		_getch();
	}
	cout << geroi[counter] << endl;
	_getch();

	cout << "�������� �����!" << endl << endl;
	cout << "��� � �������� �����, � ��� ������ - �������!" << endl;
}