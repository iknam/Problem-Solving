#include <iostream>

using namespace std;

int main()
{
	int i, n;

	cin >> n;

	int *ak = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> ak[i];
	}
	
	/*if (n == 2){
		cout << "2";
		return 0;
	}
	else 
	{
		ak[2] = 4;
		for (i = 2; i < n; i++)
		{
			ak[i + 1] = ak[i] + i;
		}
	}*/	

	delete ak;

    return 0;
}

