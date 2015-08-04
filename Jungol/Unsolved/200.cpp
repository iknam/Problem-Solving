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
	int *p, *q, *r;

	p = (int *)malloc(100*sizeof(int));
	q = (int *)malloc(100*sizeof(int));
	r = (int *)malloc(100*sizeof(int));

	cin >> *p >> *q;

	*r = abs(*p - *q);
	
	cout << *r;

	return 0;
}
