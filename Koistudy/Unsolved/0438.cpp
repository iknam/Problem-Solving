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

int main()
{
	int a, b, n1, n2, n3;

	cin >> a >> b;

	n1 = a;
	n2 = b;
	n3 = 0;

	while (n1 != 0) {
		if (n1 % 2 == 1)
			n3 += n2;
		n1 = n1 >> 1;
		n2 = n2 << 1;
	}

	cout << n3;

	return 0;
}
