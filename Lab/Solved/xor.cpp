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

int main()
{
	// no temp yes XOR
	
	int i = 3, j = 2;

	cout << i << endl;
	i = i ^ j;
	j = i ^ j;
	i = i ^ j;
	cout << i;

	return 0;
}
