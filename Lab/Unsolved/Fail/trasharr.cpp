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
#include <cstring>

using namespace std;

int main()
{
	char ch[10][10];
	memset(ch, ' ', sizeof(ch));

	for (int j = 0; j < strlen(ch); j++)
	{
		for (int i = 0; i < strlen(ch); i++)
		{
			cout << ch[j][i];
			ch[j][i] = '-';
		}
	}

	// cout << ch[0];

	return 0;
}
