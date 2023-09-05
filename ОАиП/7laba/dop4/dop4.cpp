#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int i = 1000, s, j = 0,x=0,z=0;
	do
	{
		s = 0;
		j = i;
		while (i != 0) {
			int g = i % 10;
			s += g;
			i /= 10;
		}

		int a[10]{};
		while (i != 0) {
			a[i % 10]++;
			i /= 10;
		}

		int counter = 0;
		for (int i = 0; i < 10; i++) {
			if (a[i] != 0) {
				counter++;
			}
		}

		i = j;
		if (i % 7 == 0 && i % 2 == 0 && i % 11 == 0 && s == 30 && counter<3) {
			cout << i;

		}
			
		i++;

	} while (i <= 9999);

}