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
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> v;

	int T, i;

	cin >> T;

	v.resize(T);

	while(T--) {
		cin >> v[T];
		for(i = 0; i < v[T].size(); i += 2)
			cout << v[T][i];
		for(i = 1; i < v[T].size(); i += 2)
			cout << v[T][i];
		cout << endl;
	}

	return 0;
}
