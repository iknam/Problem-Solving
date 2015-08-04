#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

int iton(int n)
{
	if(n == 1)
		return 1;
	else
		return n + iton(n-1);
}

int main()
{
	int n;

	cin >> n;

	cout << iton(n);

	return 0;
}
