#include <iostream>

using namespace std;

int main()
{
	//счет начинаем с 0!

	int arr[20][20];
	int ISize, JSize;
	int count = 0, k = 0, sum = 0;

	cout << "Size of matrix[i j]: ";
	cin >> ISize >> JSize;

	cout << "Matrix : " << endl;

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			cin >> arr[i][j];
		}
	}

	while (k < JSize)
	{
		for (int j = 0; j < JSize; j++)
		{
			if (arr[k][j] > 0)
			{
				count++;
				sum += arr[k][j];
			}
		}
		if (count == ISize)
		{
			cout << "Number of string : " << k << endl;
			cout << "Sum of elements : " << sum << endl;
			break;
		}
		k++;
		sum = 0;
		count = 0;
	}

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			arr[i][j] -= sum;
		}
	}

	for (int i = 0; i < ISize; i++)
	{
		for (int j = 0; j < JSize; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}


	//cout << sum << endl;
}