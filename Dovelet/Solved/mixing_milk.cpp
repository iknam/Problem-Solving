#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int i, N, M, ans = 0, sum = 0;
	vector< pair<int, int> > PA;

	cin >> N >> M;

	PA.resize(M);

	for (i = 0; i < M; i++)
	{
		cin >> PA[i].first >> PA[i].second;
	}

	sort(PA.begin(), PA.end());

	for (i = 0; sum < N; i++)
	{
		ans += PA[i].first * PA[i].second;
		sum += PA[i].second;	
		if (sum > N)
		{
			ans -= (sum - N) * PA[i].first;
		}
	}

	cout << ans;

	return 0;
}
