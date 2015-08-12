#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string str;
	int num;
	while (num != 0)
	{
		//cin >> num;
		//cout << num;
	}
	
    cin >> num;
    
	str = to_string(num);
	
    cout << str;
	sort(str.begin(), str.end());
	
	do
	{
		cout << str[0] << str[1] << str[2];
	} while (next_permutation(str.begin(), str.end()));
	
	return 0;
}
