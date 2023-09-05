#include <iostream>

using namespace std;

void main()
{
	unsigned int A, B;
	char buff[32], buff2[32];

	cout << "Enter A : "; cin >> A;
	
	_itoa_s(A, buff, 2);
	cout <<"Binar code A = "<< buff<<endl;

	B = A;

	int num, dev[20], i = 0, j = 0;
	
	while (A > 1) {
		dev[i] = A % 2;
		A = A / 2;
		i++;
	}
	i++;
	
	A = B;

	int mask = 0xAAAAA;

	A |= mask;
	

	i = pow(2, i) - 1;

	int mask2 = i;

	A = A & mask2;

	_itoa_s(A, buff, 2);
	cout << "Result = " << buff << endl;

}