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

int main()
{
	char *str;
	int i;
	vector<string> vstr(30);

	str = {"김병현", "김보창", "김준희", "김지섭", "박범수"};

	//vstr.push_back("김병현");
	//vstr.push_back("김보창");
	//vstr.push_back("김준희");
	//vstr.push_back("김지섭");
	//vstr.push_back("박범수");

	for(i = 0; i < 5; i++)
	{
		cout << vstr[i] << endl;
	}

	return 0;
}
