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

using namespace std;

int main()
{
	int i, a[100];
	a[1] = 1;
	a[0] = 1;
	
	for (i = 0; i < 10; i++)
	{
		a[i + 2] = a[i + 1] + a[i];
	}

	cout << a[6];

	return 0;
}
