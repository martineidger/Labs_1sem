#include <iostream>

using namespace std;

int main()
{
	const int N = 100;
	int mass[N]{};
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

	for (int i = 0; i < size; i++)
	{
		if (mass[i] == mass[i + 1])
		{
			counter++;
		}
	}
	cout << counter;
}