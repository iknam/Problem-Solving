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

using namespace std;

// ? pattern, use for
// if, else optimize

int main()
{
	int i, ans = 0, save;
	string str;

	getline(cin, str);

	for (i = 0; i < 10; i++)
	{
		if (str[i] != 'X')
		{
			if (str[i] == '?')
			{
				save = i;
				//cout << i << endl;
			}
			else
			{
				ans += (10 - i) * (str[i] - 48);
			}
		}
		else if (str[i] != '?') // need edit
		{
			ans += (10 - i) * (10);
		}
	}

	// con 1 all process so con 2 need modify
	for (i = 0; i < 10; i++)
	{
		// about X input output
		cout << endl << ((ans + (10 - save) * i) % 11 == 0) << endl;
		

		// 'X' consider
		/*{	
			if(i != 'X')
			{
				cout << i;
			}
			else
			{
				cout << "X";
			}
			return 0;
		}
		else if (i == 9)// not enough condition
		{
			cout << "-1";
			return 0;
		}*/
	}
	//cout << endl << save << endl;

	//cout << ans;

	return 0;
}
