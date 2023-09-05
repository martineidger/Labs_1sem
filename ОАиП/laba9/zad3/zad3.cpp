#include <iostream>

using namespace std;

int main()
{
	float a=0, b=1,x=0, e = 0.0001;
	
	while (abs(a - b) > (2 * e)) {
		x = (a + b) / 2;
		if ((5 * x - 1 + pow(x, 3)) * (5 * a - 1 + pow(a, 3)) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}

	cout <<"Koren uravnenia : "<< x << endl;
	
}
