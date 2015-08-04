#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
	// next_permutation and stack? how to mix
	stack<int> s;

	vector<int> v;

	int n, series;

	cin >> n;

	v.resize(n);
		
	while(n--) {
		cin >> series;
		v[n] = series;
	}
	s.push(series);
	s.pop();
}
// use only stack
// need macro?
// need all data? processing?
// study c code?
