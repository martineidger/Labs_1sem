#include <iostream>

using namespace std;  //var 10 task2

void main()
{
	const int NUM_RAND = 10, SZ_MASS = 100;
	int massA[SZ_MASS]{}, massB[SZ_MASS]{}, masReslt[SZ_MASS]{};
	int size, t = 0;

	cout << "Size of massives = ";
	cin >> size;
	
	srand(time(NULL));

	cout << "Massive A: ";
	for (int i = 0; i < size; i++)
	{
		*(massA + i) = rand() % NUM_RAND;
		cout << *(massA + i) << ' ';
	}
	cout << endl;

	cout << "Massive B: ";
	for (int i = 0; i < size; i++)
	{
		*(massB + i) = rand() % NUM_RAND;
		cout << *(massB + i) << ' ';
	}
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		*(masReslt + i) = *(massA + i) + *(massB + i);
	}

	cout << "Massive C = ";
	for (int i = 0; i < size; i++)
	{
		cout << *(masReslt+ i) << " ";
	}
	cout << endl;
}