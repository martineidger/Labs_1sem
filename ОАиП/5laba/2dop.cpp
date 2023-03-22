#include <iostream>

using namespace std;
int main()
{
	int n, p;
	cout << "Kolichestvo let n: "; cin >> n;
	
	int s[100];
	cout << "Stoimost ezhegodno: ";
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}

	cout << "Procent ucenki: "; cin >> p;
	float b = 1 - (p / static_cast<float>(100));

	float k=0;
	for (int i = 1; i <= n; i++)
	{
		k = k  + (s[i] * pow(b, n - i));
	}

	cout << "Obschaya stoimost: " << k << endl;
}