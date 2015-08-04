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
#include <cstdio>

using namespace std;

void f(int n, int k)
{
	if(n<k){
		printf("%x", n);
		return;
	}
	f(n/k, k), printf("%x", n%k);
}

int main()
{	
	int n, k;
	scanf("%d", &n);
	f(n, 2);

	return 0;
}
