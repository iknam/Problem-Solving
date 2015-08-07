#include <iostream>

using namespace std;

int n = 5, k = 4;
int A[5] = { 1, 4, 5, 6, 9 };

int solve(int s, int e)
{	
	int m;
	while (e - s >= 0)
	{
		m = (s + e) / 2;
		if (A[m] == k) return m + 1;
		if (A[m] < k) s = m + 1;
		else e = m - 1;
	}
	return -1;
}

int main()
{
	cout << solve(0, n - 1);

	return 0;
}

