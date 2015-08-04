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
	struct {
		char name[10];
		char school[50];
		int grade;
	} student;
	
	cin >> student.name >> student.school >> student.grade;
	cout << student.school << " " << student.grade 
		<< "학년에 재학중인 " << student.name << "입니다.";

	return 0;
}
