#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int i, T;
	
	cin >> T;
	
	string *S = new string[T];
	string *R = new string[T];
	
	for (i = 0; i < T; i++)
	{
		cin >> S[i];
		//cout << S[i];
	}
	
	S.reverse_copy(S.begin(), S.end(), R);
	
	cout
	
	for (i = 0; i < T; i++)
	{
	if (abs(S[i][0]-S[i][1]) == abs(S[i][2] - S[i][3]))
	{
		cout << "Funny" << endl;
	}
	else if (abs(S[i][0]-S[i][1]) != abs(S[i][2] - S[i][3]))
	{
		cout << "Not Funny" << endl;
	}
	}
}
