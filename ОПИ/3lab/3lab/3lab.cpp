//DzivnelMarta2005
//cp1251 / 44 7A 69 76 6E 65 6C 4D 61 72 74 61 32 30 30 35
//utf 8  / 44 7A 69 76 6E 65 6C 4D 61 72 74 61 32 30 30 35
//utf 16 / 0044 007A 0069 0076 006E 0065 006C 004D 0061 0072 0074 0061 0032 0030 0030 0035

//ДзивнельМартаАндреевна2005
//cp1251 / C4 E7 E8 E2 ED E5 EB FC CC E0 FO F2 E0 C0 ED E4 F0 E5 E5 E2 ED E0 32 30 30 35
//utf 8  / D094 D0B7 D0B8 D0B2 D0BD D0B5 D0BB D18C D09C D0B0 D180 D182 D0B0 D090 D0BD D0B4 D180 D0B5 D0B5 D0B2 D0BD D0B0 32 30 30 35
//utf 16 / 0414 0437 0438 0432 043D 0435 043B 044C 041C 0430 0440 0442 0430 0410 043D 0434 0440 0435 0435 0432 043D 0430 0032 0030 0030 0035

//Дзивнель2005Marta
//cp1251 / C4 E7 E8 E2 ED E5 EB FC 32 30 30 35 4D 61 72 74 61
//utf 8  / D094 D0B7 D0B8 D0B2 D0BD D0B5 D0BB D18C 32 30 30 35 4D 61 72 74 61
//utf 16 / 0414 0437 0438 0432 043D 0435 043B 044C 0032 0030 0030 0035 004D 0061 0072 0074 0061


#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "DzivnelMarta2005";
    char rfie[] = "ДзивнельМарта2005";
    char lr[] = "Дзивнель2005Marta";

    wchar_t Lfie[] = L"DzivnelMarta2005";
    wchar_t Rfie[] = L"ДзивнельМарта2005";
    wchar_t LR[] = L"Дзивнель2005Marta";

    cout << hello << lfie << endl;
    return 0;
}

