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

int main()
{
	int i, ar[5], *p;

	p = ar;

	for(i = 0; i < 5; i++)
	{
		cin >> ar[i];
	}

	cout << *(p) << " " << *(p + 2) << " " << *(p + 4);

	return 0;
}
