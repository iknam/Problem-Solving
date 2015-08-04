#include <iostream>
#include <algorithm>
#include <vector>

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

using namespace std;

int gcd(int a, int b)
{
	int temp;

	if (b > a)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int main()
{
	int n, i, ans;

	cin >> n;

	int *num = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	for (i = 0; i < n; i++)
	{
		ans = ans < b ? a : b; // no sort yes 3
	}
	ans = num[0];

	for (i = 0; i < n; i++)
	{
		ans = min(ans, gcd(num[i], ans));
	}

	cout << ans;

	delete [] num;

	return 0;
}
