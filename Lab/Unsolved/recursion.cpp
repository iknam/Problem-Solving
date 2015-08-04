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
#include <stdio.h>

using namespace std;

void star(int n);



int main()

{

	star(5);

}



// 양수일때는 라인처리, 음수일때는 별표 출력.

void star(int n)

{

	if(n > 0)

	{

		// 라인을 줄여서 재귀호출.

		star(n-1);

		// n을 음수로 만들어 n개의 별표 출력.

		//star(-n);

		printf("\n");

	}

	else if(n < 0)

	{

		printf("*");

		star(n+1);

	}
}
