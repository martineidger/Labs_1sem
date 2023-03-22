#include <iostream>

using namespace std;
int main()
{
	float p, q; int n=0;
	cout << "Pervaya viruchka: "; cin >> p;
	cout << "Znachenie q: "; cin >> q;
	
	while (q > p)
	{
		p = p + 0.03 * p;
		n++;
	}
	cout << "Viruchka = " << p << endl;
	cout << "Kol-vo dney = " << n << endl;
}