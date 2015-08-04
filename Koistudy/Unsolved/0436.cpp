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
// use string processing? maybe it isn't examiner purpose
void recur(int ,int );

int main()
{
	int n;

	cin >> n;

	recur(n, 1);

	return 0;
}

void recur(int n, int c)
{
	if(n < 10) {
		cout << c;
		return;
	}
	else {
		c++;
		n /= 10;
		recur(n, c);
	}
}

