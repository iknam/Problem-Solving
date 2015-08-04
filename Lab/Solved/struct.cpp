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
	struct member {
		char *name;
		int number[5], korean, english, math;
	};

	member student;

	student.name = "kang";

	student.number[0] = 10;

	student.number[1] = 50;

	student.number[2] = 40;

	sort(&student.number[0], &student.number[2], greater<int>());

	cout << student.number[0];

	return 0;
}
