#include <iomanip> 
#include <iostream>


void zad1();
void zad2();

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	int x;
	cout << "Введите номер задания : "; cin >> x;
	cout << endl;

	switch (x)
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
	default:
	{
		cout << "Такого задания нет" << endl;
		break;
	}
	}

}

void zad1()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	char x, p=' ';
	cout << "Введите символ : "; cin >> x;
	cout << setw(50) << setfill(p) << p;
	cout << setw(11) << setfill(x) << x << endl;
	cout << setw(49) << setfill(p) << p;
	cout << setw(13) << setfill(x) << x << endl;
	cout << setw(48) << setfill(p) << p;
	cout << setw(15) << setfill(x) << x << endl;
	cout << setw(47) << setfill(p) << p;
	cout << setw(17) << setfill(x) << x << endl;


}

void zad2()
{
	using namespace std;

	double s, p = 3.1415; int l;
	printf("l=");
	scanf_s("%d", &l);
	//cout << "l= "; cin >> l;
	s = pow(l, 2) / (4 * p);
	printf("Площадь круга S равна %4.2f", s);
	//cout << "Площадь круга равна " << s << endl;
	
}