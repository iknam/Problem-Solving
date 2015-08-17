#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector< int > ar;
	int n, p, i, s_temp;

	cin >> n >> p;

	ar.resize(n);

	ar[0] = p;

	for (i = 1; i < n; i++)
	{
		cin >> ar[i];
	}
	
	s_temp = ar[0];
	ar[0] = ar[n/2];
	ar[n/2] = s_temp;

    return 0;
}

