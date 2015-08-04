#include <map>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void recur(int );

int main()
{
	int N;

	cin >> N;
	
	recur(N);

	return 0;
}

void recur(int N)
{
	if (N == 0) return;
	cout << N % 10;
	recur(N /= 10);
}
