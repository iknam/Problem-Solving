#include <iostream>

using namespace std;

// 6 2 9 8 3 4 7 not work {0,2,4,6,8,9,7} work why?

int main()
{
	int i, j, n, s, temp;

	cin >> n >> s;

	// n++;

	int *data = new int[n];

	data[0] = 0;

	for (i = 1; i < n; i++)
	{
		cin >> data[i];
	}
	
	temp = data[n - 1];
	j = n - 2;

	while (temp < data[j])
	{
		data[j + 1] = data[j];
		j--;
		// cout << data[j];
	}

	data[j + 1] = temp;

	for (i = 1; i < n; i++)
	{
		cout << data[i] << " ";
	}

	delete [] data;

    return 0;
}

