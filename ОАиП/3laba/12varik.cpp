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

	char x, p = ' ';
	cout << "Введите символ : "; cin >> x;
	
	cout << setw(40) << setfill(p) << p;
	cout << setw(3) << setfill(x) << x << endl;
	cout << setw(40) << setfill(p) << p;
	cout << setw(3) << setfill(x) << x << endl;
	cout << setw(40) << setfill(p) << p;
	cout << setw(3) << setfill(x) << x << endl;
	cout << setw(40) << setfill(p) << p;
	cout << setw(3) << setfill(x) << x << endl;
	cout << setw(33) << setfill(p) << p;
	cout << setw(17) << setfill(x) << x << endl;
	cout << setw(33) << setfill(p) << p;
	cout << setw(17) << setfill(x) << x << endl;
	cout << setw(40) << setfill(p) << p;
	cout << setw(3) << setfill(x) << x << endl;
	cout << setw(40) << setfill(p) << p;
	cout << setw(3) << setfill(x) << x << endl;
	cout << setw(40) << setfill(p) << p;
	cout << setw(3) << setfill(x) << x << endl;
	cout << setw(40) << setfill(p) << p;
	cout << setw(3) << setfill(x) << x << endl;

}

void zad2()
{
	using namespace std;
	int p, v, t, a, r;
	printf("Введите трехзначное число:");
	scanf_s("%d", &a);
	 //cin >> a;
	p = a % 10;
	a = a / 10;
	v = a % 10;
	a = a / 10;
	t = a;
	r = p * 100 + v * 10 + t;
	printf("%d", r);
	//cout << r << endl;
}
