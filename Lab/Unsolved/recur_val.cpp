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

using namespace std;

int recur(int n)
{
	int t = 0, i;
	
	for(i = 0; i < 3; i++)
	{
		int t += recur(i - 1);
	}

	return t;
}

int main()
{
	n = 5;

	cout << recur(n);

	return 0;
}
