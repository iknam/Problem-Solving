#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int i, N;
	vector< int > vi;

	cin >> N;

	vi.resize(N);

	for (i = 0; i < N; i++)
	{
		cin >> vi[i];
	}

	sort(vi.begin(), vi.end());

	for (i = 0; i < N; i++)
	{
		cout << vi[i] << " ";
	}

    return 0;
}

