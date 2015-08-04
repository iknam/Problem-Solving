#include <map>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <math.h>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <sstream>

	
using namespace std;

ostringstream ostr;

int main()
{
	int i, j;
	string str, str2[9];

	getline(cin, str);

	int N1, N2;

	N1 = str[6] - 48;
	N2 = str[8] - 48;

	int C[N1][N2];
	
//	ostr.str("");
//	ostr << str;
//	str2 = ostr.str().c_str();

	// if need init C use for-loop

	for (i = 0; i < N1; i++)
	{
		cin >> str2[i]; //00 -> 0 0
	}

	//cout << str2[0][1];

	//cout << str2[0][1];

	// split str2
	// ch[i][j] = str[][i or j];
	
	for (i = 0; i < N1; i++)
	{
		for (j = 0; j < N2; j++)
		{
			C[i][j] = str2[i][j] - 48;
		}
	}
	
	for (i = 0; i < N1 - 1; i++)
	{
		for (j = 0; j < N2 - 1; j++)
		{	
			//if ((i != N1 - 1) || (j != N2 - 1)) // need fix? clear trash value
			//{
				C[i][j] = (C[i][j] + C[i + 1][j] + C[i][j + 1] + C[i + 1][j + 1]) / 4;
				cout << C[i][j];
			//}
		}
		cout << endl;
	}
	return 0;
}
