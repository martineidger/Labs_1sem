#include <iostream>

using namespace std;

int main()
{
	int arr[20][20];
	int ISize, JSize, time = 0;
	int p, q;

	cout << "Size of matrix : ";
	cin >> ISize >> JSize;

	

	cout << "Matrix : " << endl;

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "Enter p: ";
	cin >> p;
	cout << "Enter q: ";
	cin >> q;

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			if (j == p)
			{
				time = arr[i][j];
				arr[i][j] = arr[i][q];
				arr[i][q] = time;
			}
		}
	}
	cout << endl;

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

}