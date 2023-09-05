#include <iostream>

using namespace std;

int main()
{
	const int N = 100;
	int mass[N]{}, count[N]{};
	int size, counter = 0;

	cout << "size = "; cin >> size;

	/*for (int i = 0; i < size; i++)
	{
		cin >> mass[i];
	}*/

	srand(time(NULL));

	cout << "massiv : ";
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 5;
		cout << mass[i] << ' ';
	}
	cout << endl;

	int i = 0, k = 0, a = 1;
	while(i<size)
	{
		while (mass[i] == mass[i + a])
		{
			count[k]++;
			a++;
		}
		i += a;
		k++;
		a = 1;
	}

	int max = count[0];
	for (int i = 0; i <= k; i++)
	{
		if (count[i] > max)
		{
			max = count[i];
		}
	}

	cout << max+1 << endl;
}