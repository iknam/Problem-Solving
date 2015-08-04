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
	vector<int> vi;
	vi.resize(5);
	int ec = vi.size();

	// cout << ec;

	/*vector<int> v; 
	for(int i = 1; i < 10; i += 2) { 
		v.push_back(i); 
	} 
	int elements_count = v.size(); 
	// cout << elements_count;*/

/*	 vector<int> v(20); 
	  for(int i = 0; i < 20; i++) { 
		        v[i] = i+1; 
				 } 
	   v.resize(15); 
	    for(int i = 20; i < 25; i++) { 
			      v.push_back(i*2); // Writes to elements with indices [25..30), not [20..25) ! <
				   } 
		cout << v.size();
*//*
	 int data[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 }; 
	  vector<int> primes(data, data+(sizeof(data) / sizeof(data[0])));
	  //for(int i = 0; i < 10; i++)
		  //cout << primes[i];
	cout << sizeof(data); cout << " " << sizeof(data[0]);
	*/
/*int data[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; 
 reverse(data.begin(), data.end());//, data.rend()); 

cout << data[0];*/
/*
	 vector<int> v(10);
	 for (int i = 0; i < 10; i++)
		 v[i] = i;
	  vector<int> v2(v.rbegin()+(v.size()/2) v.rend());
	  cout << v2.size();
	  cout << " " << v2[1];*/
	

	return 0;
}
