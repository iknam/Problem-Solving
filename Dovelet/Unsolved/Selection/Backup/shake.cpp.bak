#include <iostream>

using namespace std;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

int shake(int data[], int n)
{
	int i, cnt = 0, temp, high = n - 1, low = 0, low_temp = 0, high_temp = n - 1, ans = 0;
	
	while (low < high)
	{
		for (i = low; i < high; i++) 
		{
			if (data[i] > data[i + 1])
			{	
				low_temp = i;
			//	DEBUG(low_temp)
				temp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = temp;
				// cout << low_temp << endl;
			}
		}

		/*for (i = 0; i < n; i++)
		{
			if (data[low] == data[i]) 
			{
				low = i + 1;
				break;
			}
		}*/

		for (i = high; i >= low; i--) 
		{
			if (data[i - 1] > data[i])
			{
				high_temp = i;
			//	DEBUG(high_temp)
				temp = data[i];
				data[i] = data[i - 1];
				data[i - 1] = temp;
			}
		}

		/*for (i = 0; i < n; i++)
		{
			if (data[high] == data[i])
			{
				high = i - 1;
				break;
			}
		}*/
		//cout << low << " " << high << endl;
		cout << low_temp << " " << high_temp << endl;
		low = low_temp;
		high = high_temp;
		ans++;
	}

	for (i = 0; i < n; i++)
	{
		cout << data[i] << " ";
	}

	return ans;
}

int main()
{
	int i, j, n;
	
	while (cin >> n)
	{

		int *data = new int[n];

		for (i = 0; i < n; i++)
		{
			cin >> data[i];
		}

		cout << shake(data, n);
		cout << endl;
	}

    return 0;
}
