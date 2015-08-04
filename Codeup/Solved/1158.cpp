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

int sum(int );

int main()
{
	int n;

	cin >> n;

	cout << sum(n);

	return 0;
}

int sum(int n) {
	if(n == 1)
		return 1;
	else
		return n + sum(n - 1);
}
