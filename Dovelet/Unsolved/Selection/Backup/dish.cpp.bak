#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int i, j;
	stack<char> dish;
	string str = "";

	enum elem = {'a', 'b', 'c', 'd'};

	cin >> str;
	string *ans_str = new string[str.length()];
	
	// change push push pop pop, same push pop
	ans_str[0] = "ok";// resize, str[][]
	cout << ans_str[0][1];
	for (i = 0; i < str.length(); i++)
	{
		for (j = 0; j < 4; j++)
		{
			// str insert 0(push) 1(pop), 
			// for(;~;~) if (str[]=='0') cout << "push" else "pop"
			if (dish.push(elem[j]) == 1)
			{
				push();
				ans_str[i] = "push";
			}
			else if (dish.pop() == 1)
			{
				pop();
				ans_str[i] = "pop";
			}
		}
	}
	for (i = 0; i < str.length(); i++)
	{
		cout << ans_str[i] << endl;
	}

	delete [] ans_str;
	return 0;
}
