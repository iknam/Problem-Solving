#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i, j, C, n;
	vector< vector<int> > vii(2, vector<int>(2));
	
	cin >> C;

	// for (i = 0; i < C; i++)
	while (C--)
	{
		cin >> n;

		// vii.resize(n);

		vii[0][0] = 1;

		cout << vii[0][0];

		double (* data)[n][n] = new (double[n][n][n]);

		// int *data[n] = new int[n][n];
		/*for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> vii[i][j];
				cout << vii[i][j];
			}
		}*/
			
		//delete [] data;
	}	

    return 0;
}

