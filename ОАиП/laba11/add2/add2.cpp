#include <iostream> 

using namespace std; //15 - 1.	Используя битовые операции проверить, кратно ли двум число А

int main()
{

	setlocale(LC_CTYPE, "Russian");

	unsigned int A;
	char tmp[33];
	cout << "Введите число ";
	cin >> A;

	_itoa_s(A, tmp, 2);

	cout << "Число в двоичном виде = " << tmp << endl;

	if ((A & 1) == 0)
		cout << "Число кратно 2" << endl;
	else
		cout << "Число не кратно 2" << endl;
}
