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
#include <cstdio>

// const int EOF = -1;

using namespace std;

int main()
{
	int i;
	string str;

	while (getline(cin, str))
	{
		for (i = 0; i < str.length(); i++)
		{
			if (str[i] == 'F' && str[i + 2] == 'O')
			{
				str[i] = 'O';
				str[i + 2] = 'F';
			}
		}
		cout << str << endl;
	}
	
	return 0;
}
