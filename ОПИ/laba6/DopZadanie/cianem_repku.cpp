#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void cianemRepku()
{
	string geroi[5] = { "Дедка зовет на помощь бабку. ", "Бабка зовет на помощь внучку. ", "Внучка зовет на помощь жучку. ", "Жучка зовет на помощь кошку. ", "Кошка зовет на помощь мышку. " };

	cout << "Посадил дед репку, а она выросла сладкая и большая - пребольшая. Пришло время ее вытягивать." << endl;
	_getch();
	cout << "Тянет дедка репку. Вытянуть не может.." << endl;
	_getch();

	int counter = 0;
	while (counter < 4) {
		cout << geroi[counter] << "Вытянуть не могут.." << endl;
		counter++;
		_getch();
	}
	cout << geroi[counter] << endl;
	_getch();

	cout << "Вытянули репку!" << endl << endl;
	cout << "Вот и сказочке конец, а кто слушал - молодец!" << endl;
}