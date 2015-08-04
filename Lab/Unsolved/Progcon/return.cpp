#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int i = 0, sum = 0, k = 0;

int ret()
{
	if (i == 0) return sum == k;
}

int main()
{
	//cout << ret();
	cout << (sum == k) * 3;
	return 0;
}
