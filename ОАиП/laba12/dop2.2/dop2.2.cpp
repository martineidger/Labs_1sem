#include <iostream>

using namespace std;   //var 5 task2

void main()
{
	const int NUM_RAND = 10, SZ_MASS = 100;
	int massA[SZ_MASS]{}, massB[SZ_MASS]{}, masReslt[SZ_MASS]{};
	int sizeA, sizeB, count = 0;
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

		if (kol != 0)
		{
			//если были совпадения
			//*(masReslt + t) = *(massA + i);
			count++;
		}
	}

	cout << "Number pairs of similar elements = " << count << endl;
}