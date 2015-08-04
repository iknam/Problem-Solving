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
	// n(n-1)/2 ?

	long long int n, i, ans = 0;

	cin >> n;

	for (i = 2; i < (n + 2); i++)
	{
		ans += i * (i - 1)/2;
	}

	cout << ans;

	return 0;
}
