#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    /*Путем перестановки элементов квадратной вещественной матрицы добиться того, чтобы ее максимальный элемент находился в левом верхнем углу,
    следующий по величине  в позиции (2, 2), следующий  в позиции (3, 3) и т. д., заполнив таким образом всю главную диагональ.*/

    int n, i, j;
    cout << "n: ";
    cin >> n;
    float** arr = new float* [n];
    float max;
    int i_max, j_max, count;
    for (i = 0; i < n; ++i)
    {
        arr[i] = new float[n];
        for (j = 0; j < n; ++j)
        {
            arr[i][j] = (rand() % 300);
            cout << arr[i][j] << "  ";

            if (((!i) && (!j)) || (arr[i][j] > max))
            {
                max = arr[i][j];
                i_max = i;
                j_max = j;
            }
        }
        cout << endl;
    }
    cout << endl;

    arr[i_max][j_max] = arr[0][0];
    arr[0][0] = max;
    for (count = 1; count < n; ++count)
    {
        max = arr[0][1];
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                if (((i != j) || ((i >= count) && (j >= count))) && (arr[i][j] > max))
                {
                    max = arr[i][j];
                    i_max = i;
                    j_max = j;
                }
            }
        }
        arr[i_max][j_max] = arr[count][count];
        arr[count][count] = max;
    }

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    //return 0;
}