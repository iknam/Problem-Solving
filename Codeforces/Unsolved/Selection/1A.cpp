#include <iostream>

using namespace std;

int main()
{
	int n, m, a;

	cin >> n >> m >> a;

	if (a == 1)
	{
		cout << 1;
		return 0;
	}

	cout << (n + m) - (2 * a);
	
    return 0;
}

