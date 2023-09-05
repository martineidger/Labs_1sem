#include <iostream>
using namespace std;

int main()
{
    const int n = 5; 
    float a=0, b=1, x[n]{};
    cout << "massiv x= ";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] > 0)
        {
            a = a + x[i];
        }
        else
        {
            b = b * x[i];
        }
    }

    cout << "a= " << a << endl;
    if (b == 1)
    {
        cout << '0';
    }
    else {
        cout << "b= " << b << endl;
    }
}

