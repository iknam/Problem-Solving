#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

#define	DEBUG(x) cout << '>' << #x << ':' << x << endl;

using namespace std;

// setw(1) -> space 1 fill
// make one and one; 1 clear -> 2 attempt

// analysis 1-case (3, 5)

int main()
{
	int i, j, k, l, s;
	string n;

	while (true)
	{
		cin >> s >> n;
		char sign[n.length()][s + 2][(2 * s) + 3]; // s + 2 and 2 * s change?

		memset(sign, ' ', sizeof(sign));

		if (s == 0 && n[0] == '0') break;

		// cout << sign[0][0][0] << endl;

		// use for to | height size
		// need 2 FOR height and width
		// sign[0][j][i] = '|';
		// @ s == 2 : frame '|' 1-2-1-2-1 and '-' 1-2-1
		// @ s == 2 : call divided sign and construct of saved '|' 2, '-' 2
		// @ s == 3 : '|' 1-3-1-3-1, '-' 1-3-1
		// @ s == 3 ; '|' 3, '-' 3
		// trash value?

		// @ space prob

		// for prob
		for (k = 0; k < n.length(); k++)
		{			
			for (j = 0; j < ((2 * s) + 3); j++)
			{
				for (i = 0; i < (s + 2); i++) // 3-for?
				{
					// use switch, processing space like blank
					switch (n[k])
					{
						// point is here
						case '0':
							// third oper : ?
							// if () 
							// cout << sign[0][1][1] << endl;
							// sign[0][j][i] = ' ';
							// DEBUG(i)
							//if (i == 1)
							//{
								// sign[0][i][j] = ' ';
							//}
							//if (i == 0)
							//{
								//for (l = 0; l < (2 * s) + 3; l++)
								//{
									sign[0][0][j] = '|';
									// use if?
									// setw(s+2);
									sign[0][s + 1][j] = '|';
									sign[0][i][0] = '-';
									sign[0][i][(2 * s) + 2] = '-';
									// sign
								//}
							//}
							//else if (j == 0)
							//{
								//sign[0][i][j] = '-';
							//}

							
							// DEBUG(sign[0][i][j])

							// cout << sign[0][i][j];
							// cout << "count" << endl;
							// if ()
							//  sign[j][i] = '|';
							// cout << "yell";
							break;
						case '1':
							// sign[0][j][(2 * s) + 4] = '|';
							// for (l = 0; l < 3; l++)
							sign[0][0][0] = '*';
							

							// cout << ;
							break;
						case '2':
							break;
						case '3':
							break;
						case '4':
							break;
						case '5':
							break;
						case '6':
							break;
						case '7':
							break;
						case '8':
							break;
						case '9':
							break;
						default:
							break;
							// ...case
					}
					// cout << endl;
					cout << sign[k][i][j];
					// memset(sign, ' ', sizeof(sign));
				}
				cout << endl;
			}
			//cout << endl;
		}
		/*for (k = 0; k < n.length(); k++)
		{
			for (j = 0; j < (s + 2); j++)
			{
				for (i = 0; i < ((2 * s) + 3); i++) // 3-for?
				{
					// cout << sign[k][j][i];
				}
				cout << endl;
			}
			cout << endl;
		}*/
	}
	return 0;
}
