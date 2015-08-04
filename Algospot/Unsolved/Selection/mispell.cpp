#include <map>
#include <set>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

// pair and vector<string> ?
// why i'm not pass with :this code i don't know

int main() 
{
	vector<string> vstr;
	vector<int> vint;

	int N, N_temp, N_temp_2, i;

	cin >> N;

	N_temp = N;
	N_temp_2 = N;

	vstr.resize(N);
	vint.resize(N);

	while(N_temp_2--) {
		cin >> vint[N_temp_2] >> vstr[N_temp_2];
	}
	while(N--) {
		cout << N_temp-N << " ";
		for(i = 0; i < vstr[N].size() - vint[N] + 1; ++i) {
			vstr[N][vint[N] + i - 1] = vstr[N][vint[N] + i];
		}
		vstr[N][vstr[N].size() - 1] = '\0';
		cout << vstr[N] << endl;
	}
}
