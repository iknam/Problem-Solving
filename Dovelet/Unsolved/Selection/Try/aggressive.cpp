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

// use %ld?

int main()
{
	int i, N, C;

	scanf("%d %d", &N, &C);

	int xi[N], dis[N - 1];

	for (i = 0; i < N; i++)
	{
		scanf("%d" , &xi[i]);
	}

	sort(xi, xi + N);
	
	for (i = 0; i < N - 1; i++)
	{
		dis[i] = xi[i + 1] - xi[i];
	}

	// prev dis[] sum until i  < dis[i + 1]
	// { stop and dis[i + 1] is min_max but C over 3 i don't know}
	printf("%d", dis[1]);

	return 0;
}
