#include <iostream>

using namespace std;

int main()
{
	/*Дана квадратная матрица порядка 2n, элементы которой фо рмируются случайным образом и находятся в пределах
	от 10 до 10. Получить новую матрицу, переставляя ее блоки размера n×n в соответствии со схемой*/

	const int I_ARR = 20, J_ARR = 20;
	int arr[I_ARR][J_ARR];
	int size, n, time;

	cout << "Size of matrix (n): ";
	cin >> n;

	size = 2 * n;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < size/2; i++)
	{
		for (int j = 0; j < size/2; j++)
		{
			
			time = arr[i][j];
			arr[i][j] = arr[i + n][j + n];
			arr[i + n][j + n] = time;
			time = arr[i + n][ j];
			arr[i + n][ j] = arr[i][ j + n];
			arr[i][ j + n] = time;
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}