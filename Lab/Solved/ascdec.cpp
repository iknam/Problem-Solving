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
	vector<int> v(5);
	int i;

	v[0] = 3;
	v[1] = 5;
	v[2] = 4;
	v[3] = 1;
	v[4] = 7;

	for(i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}

	cout << endl;

	sort(v.begin(), v.end()-1, greater<int>());

	for(i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}

	return 0;
}
