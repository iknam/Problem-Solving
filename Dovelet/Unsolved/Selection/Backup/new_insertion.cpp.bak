#include <iostream>

using namespace std;

int main()
{
	int i, j, n, s, temp;

	cin >> n >> s;

	int *data = new int[n];

	for (i = 1; i < n; i++)
	{
		cin >> data[i];
	}
	
	temp = data[n - 1];
	j = n - 2;

	while (j != -1 && temp < data[j])
	{
		data[j + 1] = data[j];
		j--;
	}

	data[j + 1] = temp;

	for (i = 1; i < n; i++)
	{
		cout << data[i] << " ";
	}

	delete [] data;

    return 0;
}

