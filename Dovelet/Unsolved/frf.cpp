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

int w(int ,int , int);

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c);

	return 0;
}

int w(int a, int b, int c)
{
	if (a <= 0 || b <= 0 or c <= 0) {
		//w(a, b, c);
		return 1;
	}
	else if (a > 20 || b > 20 || c > 20) {
		//w(a, b, c);
		return w(20, 20, 20);
	}
	else if (a < b && b < c) {
		//w(a, b, c);
		return w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
	}
	else {
		return w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
	}
}
