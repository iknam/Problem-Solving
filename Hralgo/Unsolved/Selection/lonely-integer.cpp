#include <iostream>

using namespace std;

int main()
{
	int i, N, v;

	cin >> N;

	for (i = 0; i < N; i++)
	{
		cin >> v;
		if (v % 2 == 0)
		{
			cout << v;
		}
	}

    return 0;
}

