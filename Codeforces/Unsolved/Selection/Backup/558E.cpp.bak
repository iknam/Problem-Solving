#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

// how to pass time limit?

// array prob? - no
// implementation sort - no
// answer is data structures

int main()
{
	string str;
	//vector<string> str;
	vector<long long> i, j, k;
	//multiset<string> str;
	long long n, q, l;
	// S able to S[0], S[1]?

	cin >> n >> q >> str;

	//str.resize(n);
	// string *str = new string[n];
	
	//cin << str;

	//str.resize(n);

	//cin >> str;

	//char *chstr = new char[n];

	//int i[q], j[q];

	//bool k[q];
	// int *i = new int[q];
	// int *j = new int[q];
	// int *k = new int[q];
	i.resize(q);
	j.resize(q);
	k.resize(q);
	
	//	(S.begin(), S.end());

	for (l = 0; l < q; l++)
	{
		cin >> i[l] >> j[l] >> k[l];
		//scanf("%d %d %d", &i[l], &j[l], &k[l]);
		// sort() > stable_sort() > partial_sort()
		if (k[l] == 1)
		{
			sort(str.begin() + i[l] - 1, str.end() - (n - j[l]));
			// sort(chstr.begin() + i[l] - 1, chstr.end() - (n - j[l]));
		}
		else if (k[l] == 0)
		{
			sort(str.begin() + i[l] - 1, str.end() - (n - j[l]), greater<int>());
			// sort(chstr.begin() + i[l] - 1, chstr.end() - (n - j[l]), greater<int>());
		}
	}

	cout << str;

	/*delete i;
	delete j;
	delete k;*/

	return 0;
}
