#include <iostream>
#include <windows.h>

void zad1();
void zad2();
void zad3();

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	cout << "1 - определение разницы значений кодов латинской буквы в прописном и строчном написании" << endl;
	cout << "2 - определение разницы значений кодов русской буквы в прописном и строчном написании" << endl;
	cout << "3 - определение кода введенной цифры" << endl;
	cout << "4 - выход из программы" << endl << endl;


	int n;


	bool prover = true;

	while (prover) {

		cout << "Введите номер : ";
		cin >> n;

		switch (n)
		{
		case 1:
		{
			zad1();
			break;
		}
		case 2:
		{
			zad2();
			break;
		}
		case 3:
		{
			zad3();
			break;
		}
		case 4:
		{
			prover = false;
			break;
		}
		default:
		{
			cout << "Некорретный ответ." << endl << endl;
			prover = false;
			break;

		}

		}
	}
}

void zad1()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char x, z;
	int raz = 0;
	cout << "Введите латинскую букву: ";
	//cout<<"Введите большую и маленькую латинскую букву:";
	cin >> x;//>> z;

	if (x >= 'A' && x <= 'z') {
		if (x >= 'A' && x <= 'Z')
		{
			z = x + 32;

		}
		if (x >= 'a' && x <= 'z')
		{
			z = x - 32;

		}
		raz = int(abs(x - z));
		printf("Разница значений кодов %c и %c : %d \n\n", z, x, raz);

	}
	else {
		printf("Некорретно введенные данные. \n\n");
	}

}

void zad2()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char x, z;
	int raz = 0;
	cout << "Введите русскую букву: ";
	//cout<<"Введите большую и маленькую русскую букву:";
	cin >> x; //>> z;

	if (x >= 'А' && x <= 'я') {
		if (x >= 'А' && x <= 'Я')
		{
			z = x + 32;

		}
		if (x >= 'а' && x <= 'я')
		{
			z = x - 32;

		}
		raz = int(abs(x - z));
		printf("Разница значений кодов %c и %c : %d \n\n", z, x, raz);

	}
	else {
		printf("Некорретно введенные данные. \n\n");
	}

}

void zad3()
{
	char x;
	cout << "Введите цифру: ";
	cin >> x;

	if (x >= '0' && x <= '9')
	{
		printf("Код введенной цифры %c : %x \n\n", x, x);
	}
	else {
		printf("Некорретно введенные данные. \n\n");
	}

}