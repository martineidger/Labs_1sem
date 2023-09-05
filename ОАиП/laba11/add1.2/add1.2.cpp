#include <iostream>
using namespace std;

void WriteNumber(int A);

//7 - 2.  Установить в 1 n битов в числе А влево от позиции p, заменить ими m битов числа В, начиная с позиции q.

int main() {

    setlocale(LC_CTYPE, "ru");

    unsigned int a, p, n;
    //char  tmp2[33];

    cout << "Enter a: ";
    cin >> a;
    WriteNumber(a);

    cout << "Enter p: ";
    cin >> p;
    cout << "Enter n: ";
    cin >> n;

    n = pow(2, n) - 1;

    int maskNull = n << p; //маска для зануления битов с позиции p

    cout << "maskNull: " << endl;
    WriteNumber(maskNull);

    int result1 = a & maskNull; //занулили биты нашей маской

    cout << "result1 : " <<  endl;
    WriteNumber(result1);

    unsigned int b, q, m;

    cout << "Enter b: ";
    cin >> b;
    WriteNumber(b);

    cout << "Enter q: ";
    cin >> q;
    cout << "Enter m: ";
    cin >> m;

    m = pow(2, m) - 1;

    int maskIlon = m << q; //muskIlon выделяет нужные нам биты

    b = b & maskIlon; //выделяем наши биты
    cout << "Choose bits:  " << endl;
    WriteNumber(b);

    result1 = result1 & (~maskIlon); //подготавливаем биты для дальнейшей вставки необходимых нам символов 
    result1 = result1 | b; //вставляем наши бит

    cout << "result1 : " << endl;
    WriteNumber(result1);

}

void WriteNumber(int A)
{

    const unsigned int mask = 1 << 31;

    cout << "Двоичный вид: ";
    for (int i = 1; i <= 32; i++)
    {
        putchar(mask & A ? '1' : '0');
        A <<= 1;
        if (i % 8 == 0) putchar(' ');
    }
    cout << endl;

}