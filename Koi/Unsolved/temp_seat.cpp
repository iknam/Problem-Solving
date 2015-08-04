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
	// point to point angle = 360/n

	double x = 0;
	double y = 3;
	double xx = x;
	double yy = y;
	double r = 120;

	xx=x*cos(3.14*r/180)+y*sin(3.14*r/180);
	yy=-1*x*sin(3.14*r/180)+y*cos(3.14*r/180);

	//if(abs(x-x2) <= 0.0000000000000000001)
	//{
		cout << xx << " " << yy;
	//}

	return 0;
}

