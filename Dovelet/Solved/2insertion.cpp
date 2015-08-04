#include <iostream>

using namespace std;

void insertion_sort(int A[], int n, int s)
{
	for (int i = 0; i < n; i++)
	{
		int temp = A[i];
		int j = i;
		while(temp < A[j - 1] && j > 0 && j < s)
		{
			A[j] = A[j - 1];
			j = j - 1;
		}

		A[j] = temp;
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
}

int main()
{
	int i, j, n, s, temp;

	cin >> n >> s;

	int *data = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> data[i];
	}

	insertion_sort(data, n, s);	

	delete [] data;

    return 0;
}

