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

int main()
{
	string bowl;
	int i, ans = 10;
	
	cin >> bowl;

	for(i = 0; i < bowl.length(); i++)
	{
		if ((bowl[i] == 40 && bowl[i + 1] == 40)
			|| (bowl[i] == 41 && bowl[i + 1] == 41))
		{
			ans += 5;
		}
		else if ((bowl[i] == 40 && bowl[i + 1] == 41)
			|| (bowl[i] == 41 && bowl[i + 1] == 40))
		{
			ans += 10;
		}
	}

	cout << ans;
	return 0;
}
