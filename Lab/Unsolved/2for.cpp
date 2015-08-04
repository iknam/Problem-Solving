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
	int i, j, n;

	cin >> n;

	for(i = 0; i <= n; i++) {
		for(j = 0; j < i; j++) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}
