#include <iostream>
using namespace std;

int main()
{
    int n, max = 0, min=0,s=0, a[100]{};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    max = a[0];
    int nmax = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
           // max = a[i];
            nmax = i;
        }
    }

    min = a[0];
    int nmin = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
           // min = a[i];
            nmin = i;
        }
    }

    s = abs(nmin - nmax) - 1;
    cout << s;

}