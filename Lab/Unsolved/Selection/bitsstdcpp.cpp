#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str = "abcde";

	sort(str.begin(), str.end(), greater<int>());

	cout << str;

    return 0;
}

