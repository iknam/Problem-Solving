#include <map>
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

// try string
// find another approach

int main()
{
	string str;
	int j = 0, cnt = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, a[12] = {0, }, b[12] = {0, }, c[12] = {0, }, i, e = 0, d = 0, f = 0;

	cin >> str;

	for (i = 0; i < str.length(); i++)
	{
		if (str[i] != '$' && cnt == 0)
		{
			cnt2++;
		}
		else if (str[i] == '$' && cnt == 0)
		{
			cnt++;
			i++;
		}	

		// except cnt3 all erase 
		if (str[i] != '$' && cnt == 1)
		{
			cnt3++;
		}
		else if (str[i] == '$' && cnt == 1)
		{
			cnt++;
			i++;
		}

		if (str[i] != '$' && cnt == 2)
		{
			cnt4++;
		}
	}

	cnt = 0;

	// 1$1 == 100 , 11$1 == 10
	// 12$1234 == 1234 , 123$1234 == 123
	// 890 -> 98 , if reverse num processing after 0 first position then 0 cutting adjuct part 1 , part 2
	for (i = 0; i < str.length(); i++)
	{
		if (str[i] != '$' && cnt == 0)
		{
			a[cnt2 - i - 1] = str[i] - 48;
			e += a[cnt2 - i - 1] * (int)pow(10, i);
		}
		else if (str[i] == '$' && cnt == 0)
		{
			i++;
			cnt++;
			j = 0;
		}
		//cout << endl << i << "i val" << endl;
		//cout << e << "e-val" << endl;
		

		// digit prob
		if (str[i] != '$' && cnt == 1)
		{	// i is fluid! and also cnt3
			//cout << endl << i << "i-val" << endl;
			//cout << endl << str[i] - 48 << endl; // use str[i] - 48 instead b[i~~]omg
			//choice i need more research
			//cout << endl << b[i - cnt3] << endl;
			d += (str[i] - 48) * (int)pow(10, cnt3 - j - 1); // edit pow check reverse
			//cout << endl << d << endl;
			//cout << endl << i - cnt3 << endl; // cnt~~ need edit, 
			//when state 0 repeat number 2 or 3 after change i, i is fluid
			//cout << endl << i - cnt2 << "i-val" << endl;
			//if (str[i] == '$') cout << "here";
			j++;
		} // not work last number i jump
		else if (str[i] == '$' && cnt == 1)
		{
			j = 0;
			i++;
			cnt++;
		}

		//cout << d << "d-val" << endl;

		// digit prob
		if (str[i] != '$' && cnt == 2)
		{
			c[i - (cnt2 + cnt3) - 2] = str[i] - 48;
			f += c[i - (cnt2 + cnt3) - 2] * (int)pow(10, i - (cnt2 + cnt3) - 2); // fix it
			//cout << endl << cnt2+cnt3 << endl;
		}

		//cout << f << "f-val" << endl;
	}
	//cout << cnt2 << " " << cnt3 << " " << cnt4 << endl;

	//cout << e << " " << d << " " << f << endl;

	cout << e + d + f;

	return 0;
}
