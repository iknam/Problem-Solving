#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
#include <cassert>
#include <sstream>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	double n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	cout << fixed;
	cout << setprecision(3) << (n1 + n2 + n3)/(double)3;

	return 0;
}
