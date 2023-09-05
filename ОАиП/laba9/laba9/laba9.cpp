#include <iostream>

using namespace std;
int fun(float x);

int main()
{
	float  a, b, s = 0, h = 0, x = 0, n=200, s1 = 0, s2 = 0, i = 1;
	cout << "vvedite a, b :";
	cin >> a >> b;

	h = (b - a) / n;
	x = a;
	
	do
	{
		s = s + ((h/2) * (fun(x) + fun(x + h)));
		x = x + h;

	} while (x < (b - h));

	cout << "Metod trapeciy: s= " << s << endl << endl;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	do {
		s2 = s2 + fun(x);
		x = x + h;
		s1 = s1 + fun(x);
		x = x + h;
		i++;
	} while (i < n);

	s = (h / 3) * (fun(a) + 4 * fun(a + h) + 4 * s1 + 2 * s2 + fun(b));
	cout << "Metod parabol: s= " << s << endl;
}

int fun(float x)
{
	float y = 1 + pow(x, 3);
	return(y);
}

