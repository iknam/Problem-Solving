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
	int N, i, n = 0; // ar[1000] = {0, };

	cin >> N;

	// ar[0] = 0;

	for (i = 0; i < N; i++)
	{
		cout << "1.." << i + 1 << " " << n + i + 1 << endl;
		n = n + i + 1;
	}

	return 0;
}
