#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float sosud_1, sosud_2;
	const int KOL_PERELIV = 6;
	cin >> sosud_1 >> sosud_2;

	for (int i = 0; i < KOL_PERELIV; i++)
	{
		sosud_2 += sosud_1 / 2;
		sosud_1 /= 2;
		
		sosud_1 += sosud_2 / 2;
		sosud_2 /= 2; 
	}

	cout << sosud_1 << ' ' << sosud_2 << endl;
}