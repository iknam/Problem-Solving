#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <math.h>                             
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{// not use long long int, improve time another solution make digit compare
	long long int C, K, min_money, min_money_oper, c_mod, ans;

	cin >> C >> K;

	min_money = pow(10, K);

	if (min_money > (C * 10))
	{
		// cout << min_money << " " << C << "min and c";
		// cout << "work";
		cout << "0";
		return 0;
	}

	// exam K = 5, digit 5th position is >= 5 or else, need one K-digit

	if ((c_mod = C % min_money) >= 5 * (min_money / 10)) // 5 is error so need to mix pow
	{
		// cout << c_mod << endl;
		// 7,1 -> 3
		// 184 -> 180 -> 190
		// cout << "if" << endl;
		// cout << c_mod << " " << min_money << endl;
		// cout << C << endl;
		// C = ((C / min_money_oper) * min_money_oper); //- c_mod + min_money;
		// cout << C;
		cout << C - c_mod + min_money;
		return 0;
	}
	else
	{
		// cout << "else" << endl;
		// C = ((C / min_money) * min_money) - c_mod;
		// cout << C << endl;
		cout << (C - c_mod); // / min_money) * min_money;
		// C = ((C / min_money_oper) * min_money_oper); //- c_mod + min_money;
		// cout << C;
		// cout << C - c_mod;
		return 0;
	}

	return 0;
}
