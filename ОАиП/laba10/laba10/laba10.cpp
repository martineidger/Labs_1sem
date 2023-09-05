#include <iostream>

using namespace std;

void zad2();
void zad1();


int main()
{
	setlocale(LC_ALL, "ru");
	
	int num, k = 2;
	bool cycle = true;
	
	while (k > 0)
	{
		cout << "Nomer zadania: "; cin >> num;
		switch (num)
		{
		case 1:
		{
			zad1();
			break;
		}
		case 2:
		{
			zad2();
			break;
		}
		default:
		{
			break;
		}
		}
		k--;
	}
	

}

void zad1()
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


void zad2()
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

	cout << "min = " << min << endl;
}