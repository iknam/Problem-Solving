#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
	int i, j, n, gemnum, weight = 0;
	double ans = 0;
	vector< pair<int, int> > gem;
	vector< pair<int, int> > prior;

	cin >> n >> gemnum;

	gem.resize(gemnum);
	prior.resize(gemnum);

	for (i = 0; i < gemnum; i++)
	{
		cin >> gem[i].first >> gem[i].second;
		prior[i].first = gem[i].second / gem[i].first; //prior
		prior[i].second = gem[i].first;
		//cout << prior[i].second << endl;
	}

	sort(prior.begin(), prior.end(), greater< pair<int, int> >());
	//cout << prior[0].first << " " << prior[0].second << endl;
	
	for (i = 0; i < gemnum; i++)
	{
		for (j = 0; j < gemnum; j++)
		{
			if (prior[i].second == gem[j].first)
			{
				ans += (double)(gem[j].second);
				cout << ans << endl;
				weight += gem[i].first;
				if (weight > n)
				{
					weight - n
					ans -= 
				}
				//if (accumulate(
			}
		}
	}
	
	cout << fixed;
	cout << setprecision(2) << ans;

    return 0;
}

