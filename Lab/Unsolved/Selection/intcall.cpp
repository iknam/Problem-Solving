#include <iostream>

using namespace std;
int foo()
{
	//int ret = 1;
	int ar[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
	int ret = ar[1][1];
	return ret;
}
int main()
{
	int a = 10;
	int c = a;
	int *p;
	*p = c;

	cout << *p;
//	cout << foo();

    return 0;
}

