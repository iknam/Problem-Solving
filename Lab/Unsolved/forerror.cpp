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
#include <cstring>

using namespace std;

int main()
{
	int i, j;

	j = 5;

	int ar[6][j];

	memset(ar, 0, sizeof(ar));

	ar[2][2] = 1;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (ar[i][j] == 0)
			{
				cout << "O";
			}
			else
			{
				//cout << ar[i][j];
			}
		}
		//cout << endl;
	}

	return 0;
}
