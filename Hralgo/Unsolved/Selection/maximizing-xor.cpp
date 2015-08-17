#include <iostream>

using namespace std;

int main()
{
	int L, R, i, j, max = 0;
	
	cin >> L >> R;

	for (i = L; i <= R; i++)
	{
		for (j = L; j <= R; j++)
		{
			max = (i ^ j) > max ? i ^ j : max;
		}
	}

	cout << max;
    return 0;
}

