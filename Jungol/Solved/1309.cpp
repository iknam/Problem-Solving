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

long long int fac(long long int );

int main()
{
	long long int n;

	cin >>  n;

	cout << fac(n);

	return 0;
}

long long int fac(long long int n)
{	
	if(n != 1)
		cout << n << "! = " << n << " * " << n-1 << "!" << endl;
	else
		cout << n << "! = " << n << endl;
	if(n == 0 || n == 1)
		return 1;
	else
		return n*fac(n-1);
}
