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
#include <iomanip>

#define	DEBUG(x) cout << '>' << #x << ':' << x << endl;

using namespace std;

int main()
{
	int row = 10, col = 10;
	vector < vector <int> > vvi; // 2-array

	vvi.assign(row, vector<int> (col, 0)); // init

	cout << setw(4) << vvi[0][0] << setw(4) << vvi[1][1]; // setw is view of space
	//cout << setw(4) << "ok2";

	return 0;
}
