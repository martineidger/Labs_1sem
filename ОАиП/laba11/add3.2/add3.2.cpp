#include <iostream>
#include <stdio.h>

using namespace std;  //2-2. Установить в 1 в числе А n битов вправо от позиции p.

void WriteNumber(int A);

int main()
{
	setlocale(LC_ALL, "ru");

	unsigned int num, mask;
	int pos, n;

	cout << "Enter A : ";
	cin >> num;
	WriteNumber(num);

	cout << "Enter n : ";
	cin >> n;

	cout << "Enter p : ";
	cin >> pos;

	pos++;

	int n_res = pow(2, n) - 1;

	mask = n_res << (pos - n);
	cout << "Mask : " << endl;
	WriteNumber(mask);

	num |= mask;

	cout << "Result : " << endl;
	WriteNumber(num);

}

void WriteNumber(int A)
{

	const unsigned int mask = 1 << 31;

	cout << "Двоичный вид: ";
	for (int i = 1; i <= 32; i++)
	{
		putchar(mask & A ? '1' : '0');
		A <<= 1;
		if (i % 8 == 0) putchar(' ');
	}
	cout << endl;

}