#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i, n, gemnum;
	double ans = 0;
	vector< pair<int, int> > gem;

	cin >> n >> gemnum;

	gem.resize(gemnum);

	for (i = 0; i < gemnum; i++)
	{
		cin >> gem[i].first >> gem[i].second;
		gem[i].second / gem[i].first //prior
	}


	cout << fixed;
	cout << setprecision(2) << ans;

    return 0;
}

