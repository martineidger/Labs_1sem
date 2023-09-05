#include <iostream>
using namespace std;

void WriteNumber(int A);
//7 - 1.	Извлечь 4 бита числа A, начиная с пятого по счету справа, и добавить их к числу B справа.

int main()
{
	setlocale(LC_ALL, "ru");
	unsigned int A, B;
	//char buff[32];

	cout << "Enter A = ";
	cin >> A;
	WriteNumber(A);

	cout << "Enter B = ";
	cin >> B;
	WriteNumber(B);

	
	unsigned int maskA = 15 << 4;
	/*cout << "MaskA: " << endl;
	WriteNumber(maskA);*/

	A = (A & maskA) >> 4;

	cout << "Selected bits : " << endl;;
	WriteNumber(A);

	B <<= 4;

	B = B | A;

	cout << "Result : " << endl;

	WriteNumber(B);
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