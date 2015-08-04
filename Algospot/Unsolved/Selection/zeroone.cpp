#include <map>
#include <set>
#include <list>
#include <stdio.h>
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

// TLE

using namespace std;

int main()
{
	int N, i, j, l, cnt;
	char cstr[1000000];

	scanf("%s %d", cstr, &N);

	while(N--) {
		cnt = 0;
		scanf("%d %d", &i, &j);
		for(l = i; l <= j; l++){
			if(cstr[l] == '1') {
				cnt++;
			}
		}

		if(cnt == j - i + 1 || cnt == 0) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}
	}

	return 0;
}
