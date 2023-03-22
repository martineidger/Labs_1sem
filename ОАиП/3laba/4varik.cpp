#include <iomanip> 
#include <iostream>



void zad1()
{
	using namespace std;
	char x, p = ' ';
	cout << "Введите символ : "; cin >> x;
	cout << setw(52) << setfill(p) << p;
	cout << setw(8) << setfill(x) << x << endl;
	cout << setw(50) << setfill(p) << p;
	cout << setw(12) << setfill(x) << x << endl;
	cout << setw(49) << setfill(p) << p;
	cout << setw(14) << setfill(x) << x << endl;
	cout << setw(49) << setfill(p) << p;
	cout << setw(14) << setfill(x) << x << endl;
	cout << setw(50) << setfill(p) << p;
	cout << setw(12) << setfill(x) << x << endl;
	cout << setw(52) << setfill(p) << p;
	cout << setw(8) << setfill(x) << x << endl;
}

void zad2()
{
	using namespace std;
	float x, y, z, ar, geo, s;
	printf("Введите 3 числа: ");
	scanf_s("%f %f %f", &x, &y, &z);
	
	/*cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	cout << "z="; cin >> z; 
	cout << endl;*/
	ar = (x + y + z) / 3;
	geo = x * y * z;
	s = (double)1 / 3;
	geo = pow(geo, s);
	printf("Среднее арифметическое равно %2.1f. Среднее геометрическое равно %2.3f", ar, geo);
	
	/*cout << "Ср. арифм. =" << ar << endl;
	cout << "Ср. геом. =" << geo << endl;*/
}

void main()
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
		cout << "Такого номера нет" << endl;
		break;
	}
	}

}
