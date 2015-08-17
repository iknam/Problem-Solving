#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, T, mod, a, b, x;

	cin >> T;

	for (i = 0; i < T; i++)
	{
		cin >> a >> b >> x;
		if (b < 0)
		{
			cout << 0 << endl;
		}
		else
		{
			mod = (int)pow(a, b) % x;
			cout << a - mod << endl;
		}
	}

    return 0;
}

