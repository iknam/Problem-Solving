#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int main()
{
	int i, j, k;
	int start = clock();
	
	for (i = 0; i < 300; i++)
	{
		for (j = 0; j < 30; j++)
		{
			for (k = 0; k < 30; k++)
			{
			}
		}
	}
	
	cout << (double)(clock()-start)/CLOCKS_PER_SEC;
	
	#if false
	clock_t start, finish;
	double duration;
	start = clock();
	
	

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration;
	#endif
    
    return 0;
}

