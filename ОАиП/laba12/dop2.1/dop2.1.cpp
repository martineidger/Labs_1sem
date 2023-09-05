#include <iostream>
#include <cmath>

using namespace std;  //var 5 task1

void main()
{
	const int NUM_RAND = 10, SZ_MASS = 100;
	int mass[SZ_MASS]{}, masPtTwo[SZ_MASS]{}, masPtOne[SZ_MASS]{};
	int size, k = 0, l = 0;
	int countOne = 0, countTwo = 0;
	double lim = 0, sum = 0;
	

	cout << "Size of massive = ";
	cin >> size;

	srand(time(NULL));

	cout << "Massive : ";
	for (int i = 0; i < size; i++)
	{
		*(mass + i) = rand() % NUM_RAND;
		cout << *(mass + i) << ' ';
	}
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		sum += *(mass + i);
	}

	lim = sum / size;
	lim = round(lim);

	cout << "Arithmetic mean of massive = " << lim << endl;

	for (int i = 0; i < size; i++) 
	{
		if (*(mass + i) >= lim)
		{
			*(masPtOne + k) = *(mass + i);
			countOne++;
			k++;
			
		}
		else
		{
			*(masPtTwo + l) = *(mass + i);
			countTwo++;
			l++;
		}

	}

	cout << "Massive number one (elements, which are bigger) : ";
	for (int i = 0; i < countOne; i++)
	{
		cout << *(masPtOne + i) << " ";
	}

	cout << endl;

	cout << "Massive number two (elements, which are less) : ";
	for (int i = 0; i < countTwo; i++)
	{
		cout << *(masPtTwo + i) << " ";
	}

	cout << endl;

}
