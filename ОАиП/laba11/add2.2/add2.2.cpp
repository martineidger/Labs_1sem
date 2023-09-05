#include <iostream> 

using namespace std; //15 - 2.	Установить в 0 n битов в числе А влево от позиции p.

void WriteNumber(int A);

int main() {

	setlocale(LC_ALL, "ru");

	unsigned int A;
	int n, p, mask = 1;

	cout << "Enter A: ";
	cin >> A;
	WriteNumber(A);

	cout << "Enter n :  ";
	cin >> n;

	cout << "Enter p : ";
	cin >> p;

	mask <<= 16;

	for (int i = 0; i < n; i++) {
		mask = mask << 1;
		mask += 1;
	}
	mask <<= p;
	cout<<"Mask : "<<endl;
	WriteNumber(mask);

	A = A & ~mask;
	WriteNumber(A);
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