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
	int i, n, max = 0, *ia, *ib, *ic;
	
	cin >> n;

	ia = (int *)malloc((n + 1)*sizeof(int));
	memset(ia, 0, sizeof(ia));
	ic = (int *)malloc((n + 1)*sizeof(int));
	memset(ic, 0, sizeof(ic));

	for (i = 1; i <= n; i++)
	{
		cin >> ia[i];
		// max_val = max(max_val, ia[i]); diff speed?
		max = ((max > ia[i]) ? max : ia[i]);
	}

	ib = (int *)malloc((max + 1)*sizeof(int));
	memset(ib, 0, sizeof(ib));

	for (i = 1; i <= n; i++)
	{
		ib[ia[i]]++;
	}

	/*for (i = 1; i <= max; i++)
		cout << ib[i] << " ";*/

	for (i = 1; i <= max; i++)
	{
		ib[i] += ib[i - 1];
		// cout << ib[i] << " ";
	}

	for (i = 1; i <= n; i++)
	{
		ic[ib[ia[i]]] = ia[i];
		ib[ia[i]]--;
	}

	for (i = 1; i <= n; i++)
	{
		cout << ic[i] << " ";
	}

    return 0;
}

