#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <vector>
#include <string>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std; 

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }

const int INF = 1<<29;
typedef long long ll;

inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }

template<class T> void chmax(T & a, const T & b) { a = max(a, b); }
template<class T> void chmin(T & a, const T & b) { a = min(a, b); }

/////////////////////////////////////////////////////////////////////

int main()
{
	int i, j, dx, dy, max = 0, block[9][9];

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			cin >> block[i][j];
		}
		// center [1][1], [4][1], [7][1],// [1][4], [4][4], [7][4],// [1][7], [4][7], [7][7] 
	}

	// find if- 
	for (i = 1; i < 8; i += 3)
	{
		for (j = 1; j < 8; j += 3)
		{
			for (dx = -1; dx <= 1; dx++)
			{
				for (dy = -1; dy <= 1; dy++)
				{
					chmax(max, block[i + dx][j + dy]);
				}
			}
			cout << max << endl;
			max = 0;
		}
	}
    return 0;
}

