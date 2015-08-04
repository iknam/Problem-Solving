#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#define	ON	1
#define	OFF	0

using namespace std;

int main()
{
	const int m = 1000, c = 100, x = 10, i = 1;

	int j, k, l, n, flag[4] = {0, }, num_ascii = 48;

	string str[500] = ""; // init str

	cin >> n;

	getline(cin, str[0]);

	for (j = 0; j < n; j++) //why 0 skip, target malloc, not clear use 1,2,n ans = init str
	{
		int save = 0, m_val = 0, c_val = 0, x_val = 0, i_val = 0;
		getline(cin, str[j]);
		// cout << str[0][0];

		for (k = 0; k < str[j].length(); k++)
		{   
			if (1 < (str[j][k] - num_ascii) && (str[j][k] - num_ascii) < 10)
			{
				//cout << str[0][0] - num_ascii;
				if (str[j][k + 1] == 'm')
				{
					save += (str[j][k] - num_ascii) * m;
					flag[0] = OFF;
				}

				if (str[j][k + 1] == 'c')
				{
					save += (str[j][k] - num_ascii) * c;
					flag[1] = OFF;
				}

				if (str[j][k + 1] == 'x')
				{
					save += (str[j][k] - num_ascii) * x;
					flag[2] = OFF;
				}

				if (str[j][k + 1] == 'i')
				{
					save += (str[j][k] - num_ascii) * i;
					//	cout << save << "first" << endl;
					flag[3] = OFF;
					//cout << "work";
				}
			}
			else if (!(1 < (str[j][k - 1] - num_ascii) && (str[j][k - 1] - num_ascii) < 10))
			{
				{ // 2 time oper
					//cout << save << endl;
					if (str[j][k] == 'm' && flag[0] == OFF)
					{
						save += m;
						flag[0] = ON;
						//cout << "work" << endl;
					}

					if (str[j][k] == 'c' && flag[1] == OFF)
					{
						save += c;
						flag[1] = ON;
						//cout << "work1" << endl;
					}

					if (str[j][k] == 'x' && flag[2] == OFF)
					{
						save += x;
						flag[2] = ON;
						//cout << "work2" << endl;
						//cout << save << endl;
					}

					if (str[j][k] == 'i' && flag[3] == OFF)
					{ // prob here
						save += i;
						flag[3] = ON;
						//cout << "work3" << endl;
						//cout << save << endl;
					}
				}
			}
			//cout << save << endl;
			for (l = 0; l < 4; l++)
			{
				flag[l] = OFF;
			}
			// cout << save << endl;
			// 9i i not oper 10i disallow therefore 10i -> x
			}
			// display work perpect
			m_val = save / 1000;
			c_val = save % 1000 / 100;
			x_val = save % 100 / 10;
			i_val = save % 10;
			// use ostr?
			if (m_val > 0)
			{
				if (m_val != 1)
				{
					cout << m_val << "m";
				}
				else
				{
					cout << "m";
				}
			}

			if (c_val > 0)
			{
				if (c_val != 1)
				{
					cout << c_val << "c";
				}
				else
				{
					cout << "c";
				}
			}

			if (x_val > 0)
			{
				if (x_val != 1)
				{
					cout << x_val << "x";
				}
				else
				{
					cout << "x";
				}
			}

			if (i_val > 0)
			{
				if (i_val != 1)
				{
					cout << i_val << "i";
				}
				else
				{
					cout << "i";
				}
			}
			cout << endl;
			//cout << save;
		
	}
}
