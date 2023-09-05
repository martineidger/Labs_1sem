#include <iostream>
#include <stdio.h>

using namespace std;  //2-1. Извлечь 5 битов числа A, начиная со второго и вставить их в число B, начиная с третьего бита.

void WriteNumber(int A);

int main()
{
	setlocale(LC_ALL, "ru");

	unsigned int numA, numB, maskA, maskB;

	cout << "Enter A : ";
	cin >> numA;
	WriteNumber(numA);

	cout << "Enter B : ";
	cin >> numB;
	WriteNumber(numB);

	maskA = 31 << 2;

	maskB = ~(maskA << 2);

	numB &=maskB;

	maskA &= numA;

	maskA <<= 1;

	numB |= maskA;

	cout << "Result : " << endl;
	WriteNumber(numB);

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