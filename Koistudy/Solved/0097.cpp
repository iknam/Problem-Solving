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

void multi(int, int);

int main()
{
	int N;

	cin >> N;

	multi(N, 1);

	return 0;
}

void multi(int N, int val)
{
	if(val > 9)
		return;
	else {
		cout << N << "*" << val << "=" << N*val << endl;
		val++;
		multi(N, val);
	}
}
