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

// divide 500 after 100 ...

int main()
{
	int n, ans = 0;

	cin >> n;


	while(n >= 500)
	{
		n -= 500;
		ans++;
	}
	while(n >= 100)
	{
		n -= 100;
		ans++;
	}
	while(n >= 50)
	{
		n -= 50;
		ans++;
	}
	while(n >= 10)
	{
		n -= 10;
		ans++;
	}

	cout << ans;

	return 0;
}
