#include <iostream>

using namespace std;

void zad22()
{
	const int N = 100;
	int massA[N]{}, massB[N]{}, masReslt[N]{};
	int sizeA, sizeB, t = 0;
	cout << "razmer massiva A = ";
	cin >> sizeA;
	cout << "razmer massiva B = ";
	cin >> sizeB;

	srand(time(NULL));

	cout << "massiv A: ";
	for (int i = 0; i < sizeA; i++)
	{
		massA[i] = rand() % 100;
		cout << massA[i] << ' ';
	}
	cout << endl;

	//srand(time(NULL));
	cout << "massiv B: ";
	for (int i = 0; i < sizeB; i++)
	{
		massB[i] = rand() % 100;
		cout << massB[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < sizeA; i++)
	{
		int kol = 0;
		for (int k = 0; k < sizeB; k++) {
			if (massA[i] == massB[k]) {
				kol++;
			}
		}

		if (kol == 0)
		{
			//если не было совпадений
			masReslt[t] = massA[i];
			t++;
		}
	}

	int min = masReslt[0];
	for (int i = 1; i < t; i++)
	{
		if (min > masReslt[i])
		{
			min = masReslt[i];
		}
	}
	
	cout <<"min = "<<min << endl;
}