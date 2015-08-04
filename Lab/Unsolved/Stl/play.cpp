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

#define	DEBUG(x) cout << '>' << #x << ':' << x << endl;

using namespace std;

int main()
{
	vector < vector < vector <int> > > vvvi; // not work?

	vvvi[0][0][0] = 1; // init cubic element

	cout << vvvi[0][0][0];
	return 0;
}
