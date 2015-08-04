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

void f(int );

int main()
{
	int n;

	cin >> n;

	f(n);

	return 0;
}

void f(int n)
{
	if(n == 1) {
		cout << n;
		return;
	}
	if(n % 2 == 1)
		cout << 3 * n + 1 << endl;
	else
		cout << n / 2 << endl; // f(4) error
	f(n - 1); // modify
}
