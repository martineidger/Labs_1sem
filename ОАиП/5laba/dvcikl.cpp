#include <iostream>

using namespace std;
int main()
{
	//{-1,3; -2; 4,9}
	float w, v, b = -5.4, m , u = 0.05 * pow(10, -4), k=7;

	while (k <= 8)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "enter m: "; cin >> m;
			v = u + b - (2 * sqrt(0.7 * k + m));
			w = 100 * exp(-0.2 * u) - log(8.1 * u);
			cout << "v= " << v << endl;
			cout << "w= " << w << endl << endl;
		}
		k = k + 0.2;
	}
}