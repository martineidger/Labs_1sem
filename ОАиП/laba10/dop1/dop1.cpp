#include <iostream>

using namespace std;

int main()
{
	const int N = 100;
	int mass[N]{}, mWeek[N]{};
	int size, sum = 0, randSz = 100;

	cout << "n = "; cin >> size;

	const int KOL_WEEK = size / 7;

	/*for (int i = 0; i < size; i++)
	{
		cin >> mass[i];
	}*/

	srand(time(NULL));

	cout << "result izmerenij : ";
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % randSz;
		cout << mass[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < KOL_WEEK; i++)
	{
		for (int j = i * 7; j < (i * 7) + 7; j++) 
		{
			mWeek[i] += mass[j];
		}
	}

	if (size % 7 != 0) 
	{
		for (int j = KOL_WEEK * 7; j < size; j++) 
		{
			mWeek[KOL_WEEK] += mass[j];
		}
	}

	int max = mWeek[0], nMax = 0;
	for (int i = 0; i <= KOL_WEEK; i++)
	{
		if (mWeek[i] > max)
		{
			max = mWeek[i];
			nMax = i;
		}
	}
	nMax++;
	cout << "rezult po nedeliam: ";
	for (int i = 0; i <= KOL_WEEK; i++)
	{
		cout << mWeek[i] << ' ';
	}
	cout << endl;
	
	printf("Naibolshee kolichestvo osadkov vipalo v %d nedelu\n", nMax);
}