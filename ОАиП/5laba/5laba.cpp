#include <iostream>

using namespace std;
int main()
{
	//6 4 0.3 -7(-1)
	float w, v, b = -5.4, m = 4, u = 0.05 * pow(10, -4), k;
	for (int i = 0; i < 4 ; i++)
	{
		cout << "enter k: "; cin >> k;
		v = u + b - (2 * sqrt(0.7* k + m));
		w = 100 * exp(-0.2 * u) - log(8.1 * u);
		cout << "v= " << v << endl;
		cout << "w= " << w << endl << endl;
	}
}