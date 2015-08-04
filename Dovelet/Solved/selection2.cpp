#include <iostream>

using namespace std;

int main()
{
	int i, j, n, s;

	cin >> n >> s;

	int *a = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < s; i++)
	{
		for (j = i + 1; j <= n; j++)
		{
			if (a[i] > a[j])
			{
				a[i] = a[i] ^ a[j];
				a[j] = a[i] ^ a[j];
				a[i] = a[i] ^ a[j];
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	delete [] a;

    return 0;
}

