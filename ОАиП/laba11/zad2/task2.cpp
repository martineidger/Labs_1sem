#include <iostream>
#include <windows.h>
using namespace std;

void WriteNumber(int A);

void main()
{
	/*while (true)
	{
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
		Sleep(500);
	}*/

	setlocale(LC_ALL, "ru");
	unsigned int A,B;
	int n, m;
	
	cout << "Enter A = ";
	cin >> A;
	WriteNumber(A);

	cout << "Enter B = ";
	cin >> B;
	WriteNumber(B);

	cout << "Enter n = ";
	cin >> n;
	unsigned int maskA = 7 << n;
	WriteNumber(maskA);

	cout << "Enter m = ";
	cin >> m;
	unsigned int maskB = 7 << m;
	maskB = ~maskB;
	WriteNumber(maskB);

	A = ((A & maskA) >> n) << m;

	B = (B & maskB) | A;

	cout << "Result : ";

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