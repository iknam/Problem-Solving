#include <iostream>

using namespace std;

int main()
{
	string str[2];

	cin >> str[0] >> str[1];

	cout << str[0].size() << " " << str[1].size() << endl;
	cout << str[0] + str[1] << endl;
	char temp = str[0][0];
	str[0][0] = str[1][0];
	str[1][0] = temp;
	cout << str[0] << " " << str[1];
    return 0;
}

