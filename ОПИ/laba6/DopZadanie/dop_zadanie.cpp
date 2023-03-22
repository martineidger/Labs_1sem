#include <iostream>
#include <string>
#include <conio.h>
#include "cianem_repku.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "(Для хода нажимайте Enter)" << endl;
	cout << "Введите 1 для начала сказки: " << endl;

	int chooseAction;
	cin >> chooseAction;
	switch (chooseAction)
	{
	case 1:
	{
		cianemRepku();
		break;
	}
	default:
	{
		cout << "Не хотите слушать сказку? Ну ладно.. " << endl;
		break;
	}
	}

}

