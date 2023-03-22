//#define чар string
//#define выведі cout <<
//using namespace std;
//
//
//#include <iostream>
//
//void main()
//{
//	чар прівет = "Hello";
//	выведі прівет;
//}

#include <iostream>

using namespace std;

void main()
{
    int arr[10] = { 23, 4, 6, -5, 9, -65, -654, 63, 8, -100 };

    int temp = 0; //Временная   переменная

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << *(arr + i) << " ";
    }
}