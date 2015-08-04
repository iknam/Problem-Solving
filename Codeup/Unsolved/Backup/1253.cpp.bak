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

void star(int ,int );

int main()
{
	int n;

	cin >> n;

	star(n, n);

	return 0;
}

void star(int n, int t)
{
	if(n < 1)
		return;
	else {
		for(int i = t; i >= n; i--) {
			cout << '*';
		}
		cout << endl;
		star(n - 1, t);
	}
} // need to edit for concise code
