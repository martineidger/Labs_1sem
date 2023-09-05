#include <iostream>
using namespace std;

int main()
{
	float f = 1.2, j = -7 * pow(10, -3), w = 2, s, y;
	while (w <= 5)
	{
		cout << "Dlya w= " << w << ' ';
		s = w / (pow(w, 2) - j) * log(abs(w));
		cout << "s= " << s<<' ';
		if (s >= 3 * sqrt(f))
		{
			y = s - exp(f / j);
			cout << "y= " << y << endl<<endl;
		}
		else 
		{
			y = pow(s, 2) / w;
			cout << "y= " << y << endl<<endl;
		}
		w = w + 0.5;
	}
}