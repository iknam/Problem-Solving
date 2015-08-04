#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
#include <cassert>
#include <sstream>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

void up(int n)
{
	if (n != 1) up(n - 1);
	cout << n;
}

int down(int n)
{
	if (n <= 1)
		return 1;
	else
		cout << n-1;
	return down(n - 1);
}

int main()
{
	int n;

	cin >> n;

	up(n);
	down(n);

	return 0;
}

// integrate up and down
