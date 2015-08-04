#include <map>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	double N, a;
	int n = 0;

	cin >> N;
	
	if (N > 0)
	{
		while(N >= 1)
		{
			N--;
			n++;
		}
		a = N;
	}
	else
	{
		N = abs(N);
		n--;
		while(N > 1)
		{
			N--;
			n--;
		}
		a = 1-N;
	}
	
	cout << fixed;
	cout << setprecision(2) << n << " " << a;

	return 0;
}
