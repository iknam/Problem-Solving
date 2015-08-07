#include <iostream>
#include <string>

using namespace std;

int i, j, flag = true;
char vowels[12] = { 'a', 'i', 'u', 'e', 'o', 'y', 'A', 'I', 'U', 'E', 'O', 'Y' };
string str;

void solve(void)
{

	for (i = 0; i < str.length(); i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (str[i] == vowels[j])
			{
				break;
			}
			else if (j == 11)
			{
				if (str[i] >= 65 && str[i] <= 90)
				{
					cout << "." << (char)(str[i] + 32);
				}
				else
				{
					cout << "." << str[i];
				}
			}
		}
	}
}

int main()
{
	cin >> str;

	solve();

	return 0;
}
