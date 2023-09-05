#include <iostream>
using namespace std;

int main()
{
    int n, c = 0, a[100]{};
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter massive: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            c = i;
        }
    }
    cout << c;

}
