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

int fibo(int );

int main()
{
	int n;

	cin >> n;

	cout << fibo(n);

	return 0;
}

int fibo(int n) {
	if (n == 1 || n == 2)
		return 1;
	else
		return fibo(n-1) + fibo(n-2);
}
