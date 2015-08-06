#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi;
	int i, n;

	cin >> n;

	vi.resize(n);

	for (i = 0; i < n; i++)
	{
		cin >> vi[i];
	}

	sort(vi.begin(), vi.end());

//	int a = *std::min_element(vi.begin(), vi.end());
	
	for (i = 0; i < n; i++)
	{
		if (vi[0] != vi[i])
		{
			cout << vi[i];
			return 0;
		}
	}

    return 0;
}

