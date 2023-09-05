#include <iostream>

using namespace std;
//varik 7

int main()
{

    int n;
    float a[6]{}, b[6]{}, c[6]{}, d=0 ,x[5]{}, y, t = 0.5, min = 0;
    cout << "n= ";
    cin >> n;

    cout << "Massiv a= ";
    for (int i = 0; i < n; i++)
    {
       
        cin >> a[i];
    }

    cout << "Massiv b= ";
    for (int i = 0; i < n; i++)
    {
        
        cin >> b[i];
    }

    cout << "Massiv x= ";
    for (int i = 0; i < 5; i++)
    {

        cin >> x[i];
    }


     

    for (int i = 0; i < n; i++) {
        c[i] = sqrt(a[i] + b[i]);
       
    }
    for (int i = 1; i <= n; i++)
    {
        d += c[i] / i;
    }
    cout << "c = ";
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << ' ';
    }
    cout << endl;
    cout << "d = " << d << endl << endl;
    
    min = x[0];
    for (int i = 1; i < 5; i++) {
        if (x[i] < min) {
            min = x[i];
        }
    }

    while (t < 3) {

        if (t <= 2) {
            y = cos(pow(t, 2));
        }
        else if (t > 2) {
            y = min;
            

        }
        
        t += 0.5;
        

    }
    cout << "y = " << y << endl;
    
}