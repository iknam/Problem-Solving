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
	int i, ar[8], sum = 0;

	for (i = 0; i < 8; i++)
	{
		cin >> ar[i];
	}

	// a[0] a[7] oper, if until 6 sort then ignore oper it ordered, 1~5
	if (ar[0] == 1 && ar[7] == 8)
	{
		for (i = 1; i < 6; i++)
		{
			if (ar[i + 1] - ar[i] != 1)
			{
				cout << "mixed";
				return 0;
			}
		}
		cout << "ascending";
		return 0;
	}
	else if (ar[0] == 8 && ar[7] == 1)
	{
		for (i = 6; i > 1; i--)
		{
			if (ar[i] - ar[i - 1] != -1)
			{
				cout << "mixed";
				return 0;
			}
		}
		cout << "descending";
		return 0;
	}
	else
	{
		cout << "mixed";
	}

	return 0;
}
