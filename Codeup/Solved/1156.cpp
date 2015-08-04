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

void star(int );

int main()
{
	int n;

	cin >> n;

	star(n);

	return 0;
}

void star(int n)
{
	if(n == 1) {
		cout << "*";
		return;
	}
	else
		cout << "*";
	star(n-1);
}
