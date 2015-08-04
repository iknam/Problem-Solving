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
	//vector<int> v;
	int n, k, c, n_temp;

	cin >> n >> k;

	n_temp = n;

	while (n--) {
		cin >> c;
		if (c == k) {
			cout << n_temp - n;
			return 0;
		}
	}
	
	cout << "-1";

	return 0;
}
