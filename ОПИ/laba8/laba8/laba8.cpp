#include <iostream>
#include "file_sum.h"
#include "file_mul.h"
using namespace std;

int main(int argc, char* argv[])
{
	int parm1 = 5;
	for (int i = 0; i < 5; i++)
	{
		int parm2 = parm1 + i;
		int result_getSum = getSum(parm1, parm2);
		cout << "i = " << i;
		cout << " getsum(" << parm1 << "," << parm2 << ") = " << result_getSum << endl;
	}
	int result_getMul = getMul(2, 3);
	cout << result_getMul << endl;

	system("pause");
	return 0;
}