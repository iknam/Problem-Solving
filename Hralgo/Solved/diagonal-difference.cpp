#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int i, j, N, left = 0, right = 0, left_val, right_val;

    cin >> N;

    vector< vector<int> > vii(N, vector<int>(N));
    
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cin >> vii[i][j];
            if (i == j)
            {
                left += vii[i][j];
            }
            if (i + j == N - 1)
            {
                right += vii[i][j];
            }
        }
    }

    cout << abs(left - right);

    return 0;
}

