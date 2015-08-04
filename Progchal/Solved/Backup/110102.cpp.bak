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

// all take input and after do processing output
int main()
{
	int i, j, l, k, n, m, ans_num = 1;
	while(true){

		cin >> n >> m;

		if(n == 0 && m == 0)
		{
			return 0;
		}

		char mine[n][m];

		// memset(mine, 0, sizeof(mine));

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				cin >> mine[i][j];
			}
		}

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (mine[i][j] == '.')
				{
					mine[i][j] = '0';
					//mine[i][j]++;
					// cout << endl << mine[i][j] << endl;

					// point is here
					for (l = -1; l <= 1; l++)
					{
						for (k = -1; k <= 1; k++)
						{
							if (mine[i + l][j + k] == '*' && i + l > -1 && j + k > -1 && i + l < n && j + k < m) //|| mine[i][j + 1] == '*')  // || miss mine sum number 2
							{

								mine[i][j]++;
								//cout << mine[-1][2];
								//mine[i][j]++;

								// mine[-1][2] = 0;
								//if (mine[0][m - 1] != '1') // -1, 2
								//{
								//cout << mine[-1][2];
								//	cout << i << " " << j << " " << l << " " << k << " " << i + l << " " << j + k << endl;
								//}
								//cout << endl << mine[i][j] << endl;
							}
						}
					}
				}
			}
		}

		if (ans_num > 1)
		{
			cout << endl;
		}
		
		cout << "Field #" << ans_num << ":" << endl;

		// cout << mine[0][m - 1]; why value 1?

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				cout << mine[i][j];
			}
			cout << endl;
		}
		ans_num++;
	}

	return 0;
}
