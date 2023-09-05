#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    float c = 0,  a=0, x[n]{};

    cout << "massiv x= ";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    a = x[0];
    for (int i = 1; i < n; i++)
    {
        if (x[i] < a)
        {
            a = x[i];
        }
    }


    for (int i = 0; i < n; i++)
    {
        c = c + (x[i] / (1 + x[i]));
    }
    c = c + a;

    cout << c;
}