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
	int n, n_temp, cnt = 0, ans;
	
	cin >> n;

	n_temp = n;

	while(n > 0) {
		if(n % 3 
		n /= 3;
		cnt++;
	}

	n = n_temp;

	while(n > 0) {
		n /= 4;
		cnt++;
	}

	n = n_temp;

	ans = n - cnt;

	cout << ans;
	
	return 0;
}
