#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// first - second, second - third
	// 1 2 2 3, 1 2 2 1, 2 2 2 2
	vector< vector<int> > vii;
	int i, j, k, n, save = 0;

	cin >> n;

	vii.resize(3, vector<int>(n, 0));

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			cin >> vii[i][j];
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (vii[i][j] == vii[i + 1][k])
				{
					vii[i][j] = 0;
					//if (save == vii[i][j]) break;
					//save = vii[i][j];
				}
			}
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (vii[i][j] != 0)
			{
				cout << vii[i][j] << endl;
				break;
			}
		}
	}

	return 0;
}
