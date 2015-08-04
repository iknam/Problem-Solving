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
	vector<int> albet(26);
	int i, j, max_val;
	string str, str1, str2, str3;

	getline(cin, str);
	getline(cin, str1);
	getline(cin, str2);
	getline(cin, str3);
	
	for (i = 0; i < str.length(); i++)
	{
		if (str[i] >= 65  && str[i] <= 90)
		{
			albet[str[i] - 65]++;
		}
	}
	for (i = 0; i < str1.length(); i++)
	{
		if (str1[i] >= 65  && str1[i] <= 90)
		{
			albet[str1[i] - 65]++;
		}
	}
	for (i = 0; i < str2.length(); i++)
	{
		if (str2[i] >= 65  && str2[i] <= 90)
		{
			albet[str2[i] - 65]++;
		}
	}
	for (i = 0; i < str3.length(); i++)
	{
		if (str3[i] >= 65  && str3[i] <= 90)
		{
			albet[str3[i] - 65]++;
		}
	}
	
	max_val = *max_element(albet.begin(), albet.end());

	int display[26][max_val + 1];

	memset(display, 0, sizeof(display));
	
	for (j = 0; j < 26; j++)
	{
		for (i = 0; i < albet[j]; i++)
		{
			display[j][max_val - (albet[j] - i)] = 1;
		}
	}

	for (j = 0; j < (max_val + 1); j++)
	{
		for (i = 0; i < 26; i++)
		{
			if ((display[i][j] == 0) && (j != max_val))
			{
				cout << "  ";
			}
			else if (display[i][j] != 0) 
			{
					cout << "* ";
			}

			if (j == max_val)
			{
				cout << char('A' + i) << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
