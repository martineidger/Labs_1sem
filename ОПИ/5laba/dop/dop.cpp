#include <iostream>
#include <string>
#include <conio.h>


void repka();

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "(Для хода нажимайте Enter)" << endl;
	cout << "Введите 1 для начала сказки: "<<endl;
	int x;
	cin >> x;
	switch (x) 
	{
	case 1:
	{
		repka();
		break;
	}
	default:
	{
		cout << "Не хотите слушать сказку? Ну ладно.. " << endl;
		break;
	}
	}
		
}

void repka()
{
	string geroi[5] = { "Дедка зовет на помощь бабку. ", "Бабка зовет на помощь внучку. ", "Внучка зовет на помощь жучку. ", "Жучка зовет на помощь кошку. ", "Кошка зовет на помощь мышку. " };

	cout << "Посадил дед репку, а она выросла сладкая и большая - пребольшая. Пришло время ее вытягивать." << endl;
	_getch();
	cout << "Тянет дедка репку. Вытянуть не может.." << endl;
	_getch();

	int i= 0;
	while (i < 4) {
		cout << geroi[i] << "Вытянуть не могут.." << endl;
		i++;
		_getch ();
	}
	cout << geroi[i] << endl;
	_getch();

	cout << "Вытянули репку!" << endl << endl;
	cout << "Вот и сказочке конец, а кто слушал - молодец!" << endl;
}

