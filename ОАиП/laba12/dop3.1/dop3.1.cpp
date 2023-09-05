#include <iostream>

using namespace std;
int main()

{
	setlocale(LC_ALL, "rus");
    //1-1 Ввести целое число N.Выделить из этого числа цифры, кратные m, и записать их в одномерный массив

    int N; cout << "N= "; cin >> N; cout << endl;
    int* arr = new int[10];
    int g, i;
    int counter = 0;

    int m;
    cout << "m = ";
    cin >> m;

    while (N / 10 != 0) {
        g = N % 10;
        if (g % m == 0) {
            arr[counter] = g;
            counter++;
        }
        N = N / 10;
    }

    cout << "New massive : ";
    for (*arr, i = 0; i < counter; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
	
}