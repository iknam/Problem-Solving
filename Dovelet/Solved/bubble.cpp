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

/////////////////////////////////////////////////////////////////////

int main()
{
	int i, j, cnt = 0, n, s, *data; 

	cin >> n >> s;

	data = (int *)malloc(n*sizeof(int));
	memset(data, 0, sizeof(data));

	for (i = 0; i < n; i++) cin >> data[i];

	for (i = 0; i < s; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (data[j] > data[j + 1] && j != n - 1) // if n over array
			{
				data[j] = data[j] ^ data[j + 1];
				data[j + 1] = data[j] ^ data[j + 1];
				data[j] = data[j] ^ data[j + 1];
			}
		}
	}

	for (i = 0; i < n; i++) cout << data[i] << " ";

	return 0;
}
