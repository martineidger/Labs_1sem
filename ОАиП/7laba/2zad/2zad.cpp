#include <iostream>
using namespace std;

int main()
{
	for (int i = 99; i >= 0; i--)
	{
		if (i % 11 != 0)
			cout << i << ' ';
	}
}