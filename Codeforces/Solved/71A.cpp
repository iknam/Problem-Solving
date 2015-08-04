#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> vs;
	int i, n;

	cin >> n;

	vs.resize(n);

	for (i = 0; i < n; ++i)
	{
		cin >> vs[i];

		if (vs[i].size() <= 10)
		{
			cout << vs[i] << endl;
		}
		else
		{
			cout << vs[i][0] << vs[i].size() - 2 << vs[i][vs[i].size() - 1] << endl;
		}
	}

    return 0;
}

