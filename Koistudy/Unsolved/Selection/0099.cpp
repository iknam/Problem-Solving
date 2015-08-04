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
#include <cstdlib>
#include <cstdio>

using namespace std;

// itoa also bad approach because it isn't clear
// two way approach 1. in main 2. only recursive func
// in main is easy but only recursive func is nice

void reverse(int );

int main()
{
	int N;
	
	cin >> N;

	reverse(N);

	return 0;
}

void reverse(int N)
{
	// split N if N = 123
	cout << N%10;	
	cout << N%100/10;
	cout << N/100;
}
