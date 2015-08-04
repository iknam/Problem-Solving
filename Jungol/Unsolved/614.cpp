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
	struct student {
		string school;
		int grade;
	};

	student student1;
	student student2;

	student1.school = "제주초등학교";
	student1.grade = 6;

	cin >> student2.school >> student2.grade;

	cout << student1.school << " " << student1.grade << "학년" << endl;

	cout << student2.school << " " << student2.grade << "학년";


	return 0;
}
