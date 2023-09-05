#include <iostream>

using namespace std;

int main()
{
    //1-2 Заданы два массива по 10 целых чисел в каждом.Найти наибольшее среди чисел первого массива, которое не входит во второй массив.
    using namespace std;
    int arrA[] = { 1,3,13,6,8,75,11,9,13,45 };
    int arrB[] = { 5,3,17,8,7,12,44,87,13,23 };
    bool found;
    int* m = arrA;
    int* n = arrB;
    int max = *m;
    int i, j;

    for (i = 0; i < 9; i++) {
        found = false;
        for (j = 0; j < 9; j++) {
            if (*(m + i) == *(n + j)) {
                found = true;
                break;
            }
        }
        if (not found) {
            if (*(m + i) > max) {
                max = *(m + i);
            }

        }
    }

    cout << "max = " << max;
    cout << endl;
}