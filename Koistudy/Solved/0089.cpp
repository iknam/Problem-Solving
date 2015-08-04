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
	vector<int> v;
	
	int n, n_temp, n_temp2;

	cin >> n;

	v.resize(n);

	n_temp = n;

	n_temp2 = n;

	// use for?

	while(n--) {
		cin >> v[n];
	}

	sort(v.begin(), v.end());

	while(n_temp--) {
		cout << v[n_temp2 - n_temp - 1] << " ";
	}

	return 0;
}
