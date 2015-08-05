#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int main()
{
	clock_t start, finish;
	double duration;
	start = clock();
	
	

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration;

    return 0;
}

