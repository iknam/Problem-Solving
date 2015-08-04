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
	//cout << ans << endl;
	for (i = 0; i <= 10; i++)
	{
		//	cout << endl << i << endl;
		// about X input output
		if (((ans + (10 - save) * i) % 11) == 0) // condition use and attach else if
		{	
			if (i == 10 && save == 9) {
				cout << "X";
				return 0;
			}
			else if (i < 10)
			{
				cout << i;
				return 0;
			}
			//cout << endl << (((ans + (10 - save) * i))) << "con" << endl;// 'X' consider
			//cout << endl << i << "i-val" << endl;
			//if ((ans + (10 - save) * i) == 10)
			/*if ( i == 10)
			{
				cout << "X";
				return 0;
			}
			else
			{
				cout << i;
				return 0;
			}*/

		}
	}
	//cout << endl << save << endl;
	//cout << endl << ans << endl;
	cout << "-1";

	return 0;
}
