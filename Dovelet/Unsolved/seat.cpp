#include <map>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int comb(int N, int K)
{
	int cnt = 0;
	std::string bitmask(K, 1); // K leading 1's
	bitmask.resize(N, 0); // N-K trailing 0's

	// print integers and permute bitmask
	do {
		//for (int i = 0; i < N; ++i) // [0..N-1] integers
		//{
		//if (bitmask[i]) std::cout << " " << i;
		//}
		//std::cout << std::endl;
		cnt++;
	} while (std::prev_permutation(bitmask.begin(), bitmask.end()));
	return cnt;
}

int main()
{ 
	// if use next_permutation? then 321 skip
	// if fixed seat 4, 7 then 123 solve after 56, 89 solve
	// it isn't comb prob?

	//vector<int> fixed;
	//vector<int> vi2;
	int N, M, i, seat_sum = 1;

	cin >> N >> M;

	int fixed[M];

	//vi2.resize(M);

	for (i = 0; i < M; i++)
	{
		// use if? i - 1, i + 1, or make another for
		cin >> fixed[i];
		fixed[-1] = 0;
		// cout << seat_sum << endl;
		if (fixed[i] - fixed[i - 1] - 1 == 2)
		{
			seat_sum *= 2;
			cout << fixed[i] - fixed[i - 1] - 1 << endl;
			// cout << seat_sum << "one" << endl;
		}
		else
		{
			seat_sum *= comb(fixed[i] - 1, 2); // consturt
			// cout << seat_sum << "two" << endl;
		}

		if (i == M - 1)
		{	
			// cout << seat_sum << endl;
			if (N - fixed[i] == 2)
			{
				seat_sum *= 2;
				// cout << seat_sum << "three" << endl;
			}
			else
			{
				seat_sum *= comb(N - fixed[i], 2);
				// cout << seat_sum << "four" << endl;
			}
		}
		// vi2[i] = comb(fixed[i] - 1, 2); 
		// comb(fixed[i+1] - fixed[i], 2); // fail i + 1 pending
		// cout << comb(N-1 - fixed[i+1], 2) << endl; // fail i + 1 pending
	}

	//* comb(i, j) if(i == j) then comb + 1, ans = comb*comb*comb	
	// maybe comb need to DP

	cout << seat_sum;

	return 0;
}

