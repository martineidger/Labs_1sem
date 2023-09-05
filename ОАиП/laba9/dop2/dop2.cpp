#include <iostream>

using namespace std;

//varik 13



int fun(float x)
{
	float y =2+ pow(x, 3);
	return(y);
}

void zad1(float a, float b)
{
	float   s = 0, h = 0, x = 0, n = 200, s1 = 0, s2 = 0, i = 1;
	/*cout << "vvedite a, b :";
	cin >> a >> b ;*/

	h = (b - a) / n;
	x = a;

	do
	{
		s = s + ((h / 2) * (fun(x) + fun(x + h)));
		x = x + h;

	} while (x < (b - h));

	cout << "Metod trapeciy: s= " << s << endl << endl;

}

void zad2(float a, float b)
{
	float   s = 0, h = 0, x = 0, n = 200, s1 = 0, s2 = 0, i = 1;
	/*cout << "vvedite a, b :";
	cin >> a >> b;*/
	h = (b - a) / (2 * n);
	x = a + 2 * h;

	do {
		s2 = s2 +  fun(x);
		x = x + h;
		s1 = s1 + fun(x);
		x = x + h;
		i++;
	} while (i < n);

	s = (h / 3) * (fun(a) + 4 * fun(a + h) + 4 * s1 + 2 * s2 + fun(b));
	cout << "Metod parabol: s= " << s << endl << endl;
}

int fun3(float x)
{
	float y = exp(x) + x + 4;
	return(y);
}

void zad3(float a, float b)
{
	float  x = 0, e = 0.0001;
	/*cout << "vvedite a, b :";
	cin >> a >> b;*/

	do {
		x = (a + b) / 2;
		if (fun3(x) * fun3(a) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	} while (abs(a - b) > 2 * e);

	cout << "reshenie uravnenia s ukazannimi a i b : x= " << x << endl << endl;

}

int main()
{
	float a, b;
	cout << "vvedite a, b :";
	cin >> a >> b;
	bool cikl = true;
	int p;
	while (cikl)
	{
		cout << "nomer zadanija : ";
		cin >> p;
		switch (p)
		{
		case 1:
		{
			zad1(a, b);
			break;
		}
		case 2:
		{
			zad2(a, b);
			break;
		}
		case 3:
		{
			zad3(a, b);
			break;
		}
		case 4:

		default:
		{
			cikl = false;
		}

		}
	}
}