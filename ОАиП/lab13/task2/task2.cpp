#include <iostream>

using namespace std;

int main() 
{
    char str[59];
    int arr[80], n, counter = 0, j = 0;

    cout << "str: ";
    gets_s(str);

    n = strlen(str);

    for (int i = 0; i < n; i++) 
    {
        if (str[i] != ' ')
        {
            counter++;
        }
        else 
        {
            arr[j] = counter;
            counter = 0;
            j++;
        }
    }


    arr[j] = counter;

    /*for (int i = 0; i <= j; i++) 
    {
        cout << arr[i] << ' ';
    }

    cout << endl;*/

    int min = arr[0];
    int MinCount = 0;
    for (int i = 0; i <= j; i++) 
    {
        if (arr[i] < min)
        {
            min = arr[i];
            MinCount = i;
        }
    }

    cout << "The shortest word is " << MinCount+1 << endl;
    cout << "Tne number of letters in this word is " << min << endl;
}