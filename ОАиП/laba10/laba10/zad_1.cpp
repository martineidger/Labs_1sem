#include <iostream>

using namespace std;

void zad11()
{
	const int N = 100;
	int mass[N]{};
	int size, k = 0;
	cout << "razmer massiva = ";
	cin >> size;

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 100;
		cout << mass[i] << ' ';
	}
	cout << endl;

	int numMin = 0, min = mass[0];
	for (int i = 1; i < size; i++)
	{
		if (min > mass[i])
		{
			min = mass[i];
			numMin = i;
		}
	}

	int numMax = 0, max = mass[0];
	for (int i = 1; i < size; i++)
	{
		if (max < mass[i])
		{
			max = mass[i];
			numMax = i;
		}
	}

	k = mass[numMin];
	mass[numMin] = mass[numMax];
	mass[numMax] = k;

	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << ' ';
	}
	cout << endl << endl;
}