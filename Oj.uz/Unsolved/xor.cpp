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
	int N, answer = 0;
	vector<int> v;

	cin >> N;

	v.resize(N);
	
	while(N--) {
		cin >> v[N];
		if(v[N] > answer)
			answer = v[N];
	}

	cout << answer;

	return 0;
}

// make function GetMax

int GetMax(int N, int * A)
{
	whlie(N--) {
		cin >> A[N];
	}
	return max_element(A.begin(), A.end());
}
