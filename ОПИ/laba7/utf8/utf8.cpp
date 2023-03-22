#include <iostream>
#include <windows.h>


std::string;
using namespace std;

int main()
{
	//НЕЗАКОНЧЕНА
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "Введите символ (англиской раскладки, знаки препинания): ";
	char symbol;
	const char FIRST_LIM = '!', LAST_LIM = '}';

	cin >> symbol;
	if (symbol >= FIRST_LIM && symbol <= LAST_LIM) {

		int codeDec = (int)symbol;

		printf("%X\n", codeDec);
	}
	else {
		cout << "Мы пока не можем работать с такими символами, но в скором времени мы их добавим! " << endl;
	}
	

}