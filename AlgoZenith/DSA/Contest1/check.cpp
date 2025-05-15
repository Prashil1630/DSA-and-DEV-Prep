#include <iostream>
using namespace std;

int main()
{
	int a = 2147483646; 
	int b = 2147483645; 

	int res1 = (a % 11 * b % 11) % 11;
	int res2 = (a * b) % 11;
	int res3 = (a * 1LL * b) % 11;
	int res4 = (a * b * 1LL) % 11;
	
	cout << res1 << " " << res2 << " " << res3 << " " << res4;
}

