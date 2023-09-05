#include <iostream>

using namespace std;

int main()
{
    /*Латинским квадратом порядка n называется квадратная таблица размером nхn, каждая строка и каждый столбец
    которой содержат все числа от 1 до n. Для заданного n в матрице L(n, n) построить латинский квадрат порядка n. */

    const int SZ = 20;
    int A[SZ][SZ];
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int count = i + 1;
        for (int j = 0; j < n; j++)
        {
            A[i][j] = count;
            count++;
            if (count > n)
            {
                count = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}