#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T, N, K, i, a;

	cin >> T;

	while(T--)
	{
		cin >> N >> K;
		
		for (i = 0; i < N; i++)
		{
			cin >> a;
			if (a <= 0)
			{
				K--;
			}
		}
		if (K > 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

    return 0;
}

