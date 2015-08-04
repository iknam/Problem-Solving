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

// input blank cutting approach is use while and skip blank
// char or string?

int main()
{
	//vector<char> ch; // use push_back ?
	//vector<char> ch2;

	int i = 0, j = 0;
	string str, ch[1000]; // 1st problem str2 make error need another solution

	getline(cin, str);
	
	while(true) // use break
	{
		if (str[i] != 32)
		{
			ch[j] = str[i];
			j++;
			//str2[j + 1] = '\0';
			//cout << endl << i << " and " << j << " and " << str[i] << " and " << str2[j] << endl;
		}

		i++;

		if (i == str.length())
		{
			ch[j + 1] = '\0';
			//str2[j + 1] = '\0';
			//cout << endl << j << endl;
			//str2[j+1] = '\0';
			//cout << endl << j << endl;
			//cout << str2[0];
			break;
		}
	}
	//reverse(str2.begin(), str2.end()); // null?
	//cout << str2;

	for (i = 0; i < j; i++)
	{
		cout << ch[j - i - 1];
	//	cout << endl << i << j << endl;
	}


	return 0;
}
