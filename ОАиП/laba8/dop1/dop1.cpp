#include <iostream>
using namespace std;

int main()
{
    int n,c=0, a[100]{};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        c = c + a[2 * i+1];
    }

    cout << c;
}