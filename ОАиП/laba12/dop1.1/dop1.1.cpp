#include <iostream>

using namespace std;   //var 10 task1

void main()
{
	const int NUM_RAND = 10, SZ_MASS = 100;
	int massA[SZ_MASS]{}, massB[SZ_MASS]{}, masReslt[SZ_MASS]{};
	int sizeA, sizeB, t = 0;
	cout << "Size of massive A = ";
	cin >> sizeA;
	cout << "Size of massive B = ";
	cin >> sizeB;

	srand(time(NULL));

	cout << "Massive A: ";
	for (int i = 0; i < sizeA; i++)
	{
		*(massA + i) = rand() % NUM_RAND;
		cout << *(massA + i) << ' ';
	}
	cout << endl;

	cout << "Massive B: ";
	for (int i = 0; i < sizeB; i++)
	{
		*(massB + i) = rand() % NUM_RAND;
		cout << *(massB + i) << ' ';
	}
	cout << endl;

	for (int i = 0; i < sizeA; i++)
	{
		int kol = 0;
		for (int k = 0; k < sizeB; k++) {
			if (*(massA + i) == *(massB + k))
			{
				kol++;
			}
		}

		if (kol == 0)
		{
			//если не было совпадений
			*(masReslt + t) = *(massA + i);
			t++;
		}
	}

	int min = *masReslt;
	for (int i = 1; i < t; i++)
	{
		if (min > *(masReslt+i))
		{
			min = *(masReslt+i);
		}
	}

	cout << "min = " << min << endl;
}