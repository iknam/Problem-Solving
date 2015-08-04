#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

// why diff else or if-else think about it
// i, j < 10 mixed cause a error, if i = 6, j = 7 print i at once j

int main()
{
	long long int i, j, k, l, cnt = 1, max = 0;

	while (cin >> i >> j)//(scanf("%lld %lld", &i, &j) == 2)
	{	
		if (i > j)
		{
			i = i ^ j;
			j = i ^ j;
			i = i ^ j;
		}
		l = i;
		for (; i <= j; i++) // prob here i++ oper 1,10->i=9
		{
			k = i;
			while(i != 1){
				if ((i % 2) == 0)
				{
					// cout << "work1";
					cnt++;
					i /= 2;
					
					//cout << endl << i << "i-val" << endl;
				}
				else if((i % 2) != 0)
				{
					// cout << "work2";
					cnt++;
					i = (i * 3) + 1;
				}

				// cout << i << endl;
				
				// if (i == 1) break;
				// break;
				// tri-oper compare max value
							
			}
			i = k;
			
			max = (cnt > max) ? cnt : max;

			//cout << endl << max + 1 << endl;
			cnt = 1;
		}
	// init prob
			cout << l << " " << j << " " << max << endl;
			max = 0;
	}

	return 0;
}
