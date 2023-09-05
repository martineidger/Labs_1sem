#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float c1, c2, k=0;
	cin >> c1 >> c2;
	for (int i = 0; i < 4; i++)
	{
		c2= c2 + c1 / 2;
		c1 = c1 / 2;
		//c2 = k;
		c1 = c1 + c2 / 2;
		c2 = c2 / 2;
		//c1 = k;
		
	}
	cout  << c1 << ' ';
	cout  << c2 << endl;
	
}