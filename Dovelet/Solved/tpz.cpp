#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi(3);
	int N, ans = 0, i, min;

	cin >> N;

	for (i = 0; i < 3; i++)
	{
		// insert if?
		cin >> vi[i];
	}

	min = vi[0];

	for (i = 0; i < 2; i++)
	{
		//if (;i !=  2){
		min = ((min < vi[i + 1]) ? min : vi[i + 1]);
	}

	//N = 10, vi[0] = 10, vi[1] = 10, vi[2] = 10;

	// sort(vi.begin(), vi.end());

	cout << min << " ";

	ans = (vi[0] - (2*N - (vi[1] + vi[2])));
	if (ans > 0)
	{
		cout << ans;
	}
	else
	{
		cout << "0";
	}

	return 0;
}

