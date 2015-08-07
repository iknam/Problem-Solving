#include <iostream>
#include <ctime>

inline int clkstart(int start) { return start = clock(); }

using namespace std;

int main()
{
	clkstart(int start);
	//int start = clock();



	cout << (double)(clock() - start) / CLOCKS_PER_SEC;

    return 0;
}

