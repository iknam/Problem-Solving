#include <map>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int *p, *q, s, r;

	cin >> s >> r;

	p = &s;
	q = &r;

	cout << *p << " + " << *q << " = " << *p + *q << endl;
	cout << *p << " - " << *q << " = " << *p - *q << endl;
	cout << *p << " * " << *q << " = " << *p * *q << endl;
	cout << *p << " / " << *q << " = " << *p / *q;
	
	return 0;
}
