#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int main()
{
	#if true
	clock_t start, finish;
	double duration;
	start = clock();
	
	

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration;
	#endif
    
    return 0;
}

