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
	// set coordinate?
	// two point matching?

	// another aproach is not set to coordinate
	// use polygon angle 360/n
	// heptagon, enneagon all seat_on? find pattern
	// divide 360/n equal double type instead int type
	// then all seat_on may possible

	double ar[2000] = {0, };

	int D1, D2, seat_all = 0, seat_off = 0, ans, i;
	// (0, Y) is only one point

	cin >> D1 >> D2;

	for(i = D1; i <= D2; i++)
	{
		ar[i] = 360 / (double)i;

		if(ar[i] > (int)ar[i]) // check double,
		// all seat_on(except one point) like heptagon
		{
			seat_off++; // only once (0, Y)
		}
		seat_all += i;
	}

	cout << seat_all;
	// use dp? also use another approach, absolutly DP
	// how to compare this problem
	// anyway same angle make seat_off
	// and if over 3 seat direct same point then only one point seat_on

	// cout << v_cir[D1] << " " << v_cir[D2];

	ans = seat_all - seat_off;

	return 0;
}

