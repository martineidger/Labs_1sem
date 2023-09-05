#include <iostream>

using namespace std;

//varik 5

int main() {
	double a = 0.5, b = 7,  w[6],  p, q=0;
	int n=5;
	float v[6];
	

	cout << "Massiv v= ";
	for (int i = 0; i < n; i++)
	{

		cin >> v[i];
	}

	for (int i = 0; i < 5; i++) {
		if (v[i] <= 0) 
		{
			w[i] = b / v[i];
		}

		if (v[i] > 0) 
		{
			w[i] = a + v[i];
		}
	}
	
	double c = w[0];
	for (int j = 0; j < 6; j++) {
		if (w[j] > c) {
			c = w[j];
		}
	}
	

	double y[5]{}, min = y[0];

	cout << "Massiv y= ";
	for (int i = 0; i < 5; i++)
	{
		cin >> y[i];
	}
	p = y[0];
	for (int i = 1; i < 5; i++) {
		if (y[i] < p) {
			p = y[i];
		}
	}
	
	for (int h = 0; h < 6; h++) {
		q *= (y[h] - 5);
	}
	q = q + p;

	cout << "Massiw w = { ";
	for (int i = 0; i < 5; i++)
	{
		cout << w[i] << ' ';
	}
	cout << '}' << endl;

	cout << "p= " << p << endl;
	cout << "c= " << c << endl;
	cout << "q= " << q << endl;

}