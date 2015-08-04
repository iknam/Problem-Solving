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
	int i, j, n, s, min_index, temp;

	cin >> n >> s;
	
	int *ia = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> ia[i];
	}

	for (i = 0; i < s; i++)
	{
		min_index = i;
		for (j = i + 1; j <= n; j++)
		{
			if (ia[min_index] > ia[j]) min_index = j;
		}
		
		temp = ia[i];
		ia[i] = ia[min_index];
		ia[min_index] = temp;
		/*ia[i] = ia[i] ^ ia[min_index];
		ia[min_index] = ia[i] ^ ia[min_index];
		ia[i] = ia[i] ^ ia[min_index];*/
	}

	// -8 -8 duplicate = 0, fix
	for (i = 0; i < n; i++)
	{
		cout << ia[i] << " ";
	}

	delete [] ia;

    return 0;
}

