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

	if (x == 1)
	{
		char x, p = ' ';
		cout << "Введите символ : "; cin >> x;
		cout << setw(50) << setfill(p) << p;
		cout << setw(1) << setfill(x) << x << endl;
		cout << setw(49) << setfill(p) << p;
		cout << setw(3) << setfill(x) << x << endl;
		cout << setw(48) << setfill(p) << p;
		cout << setw(5) << setfill(x) << x << endl;
		cout << setw(43) << setfill(p) << p;
		cout << setw(15) << setfill(x) << x << endl;
		cout << setw(46) << setfill(p) << p;
		cout << setw(9) << setfill(x) << x << endl;
		cout << setw(47) << setfill(p) << p;
		cout << setw(7) << setfill(x) << x << endl;
		cout << setw(46) << setfill(p) << p;
		cout << setw(3) << setfill(x) << x;
		cout << setw(3) << setfill(p) << p;
		cout << setw(3) << setfill(x) << x << endl;
		cout << setw(45) << setfill(p) << p;
		cout << setw(2) << setfill(x) << x;
		cout << setw(7) << setfill(p) << p;
		cout << setw(2) << setfill(x) << x << endl;
		cout << setw(44) << setfill(p) << p;
		cout << setw(1) << setfill(x) << x;
		cout << setw(11) << setfill(p) << p;
		cout << setw(1) << setfill(x) << x << endl;
	}

	else if (x == 2)
	{
		int x1, x2, y1, y2, s;
		printf("x1= ");
		scanf_s("%d", &x1);
		printf("y1= ");
		scanf_s("%d", &y1);
		printf("x2= ");
		scanf_s("%d", &x2);
		printf("y2= ");
		scanf_s("%d", &y2);
		/*cout << "x1= "; cin >> x1;
		cout << "y1= "; cin >> y1;
		cout << "x2= "; cin >> x2;
		cout << "y2= "; cin >> y2; cout << endl;*/



		s = sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)));
		printf("Расстояние S равно %d", s);
		//cout << "Расстояние S равно " << s << endl;
	}

}
