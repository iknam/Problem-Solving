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
#include <iomanip>

using namespace std;

// a = sum/n - min <- if vi[] > a then vi[] - a else vi[] + a
// double type point below number prob

int main()
{
	vector<double> vi;
	int i, n;
	double sum = 0, ans = 0, val;

	while (true)
	{
		cin >> n;

		if (n == 0) break;

		vi.resize(n);

		for (i = 0; i < n; i++)
		{
			cin >> vi[i];
			sum += vi[i];
		}

		val = sum / n;

		// save point number?
		for (i = 0; i < n; i++)
		{
			if (vi[i] > val)
			{
				vi[i] -= val;
			}
			else
			{
				vi[i] = val - vi[i];
			}
			cout << vi[i] << " " << val << endl;
		}

		cout << fixed;
		// cout << setprecision(2) << vi[0] * 2 << endl;
	}

	return 0;
}
