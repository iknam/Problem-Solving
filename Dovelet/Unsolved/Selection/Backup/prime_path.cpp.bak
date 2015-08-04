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

bool isprime(int n)
{
	int i;

	for(i = 2; i*i <= n; i++)
		if(n%i == 0) return false;

	return true;
}

// use 4-for-statement

int main()
{
	int i, j, l, k, ans = 0;
	string start, end, comp;

	cin >> start >> end;

	comp = start;

	sort(comp.begin(), comp.end());

//	cout << end[0] - 48 << " " << end[1] - 48 << endl;

	//fail, i'll try bi-search
	for (i = (start[0] - 48) * 1000; i < (end[0] - 48) * 1000; i++)
	{
		for (j = (start[1] - 48) * 100; j < (end[1] - 48) * 100; j++)
		{
			for (k = (start[2] - 48 ) * 10; k < (end[2] - 48) * 10; k++)
			{
				for (l = (start[3] - 48); l < (end[3] - 48); l++)
				{
					if (isprime(i + j + k + l))
					{
						// cout << "work";
						if (l == (comp[0] - 48) && k == (comp[1] - 48) && j == (comp[2] - 48) && k == (comp[3] - 48))
						{
							ans++;
						}
					}
					// sort start, proc match, a[0] == b[0] is able to same of start-proc number
				}
			}
		}
	}

	cout << ans;
	// cout << start << end;

	// last queue {1, 2, 3, 4} == visible end, (cout << top()) after pop()

    return 0;
}

