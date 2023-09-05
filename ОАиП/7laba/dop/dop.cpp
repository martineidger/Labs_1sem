#include <iostream>
using namespace std;

int main()
{
	
	int k=0, a[50]{};
	for(int j=3; j<32; j++)
	{
		for (int i = 2; i <= sqrt(j); i++)
		{
			if (j % i != 0)
			{

				a[k] = j;
				cout << a[k] << " ";
				k++;
				//return 0;
			}
		}
	//cout << "yes";
	}
}
