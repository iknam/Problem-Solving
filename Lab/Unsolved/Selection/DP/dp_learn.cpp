#include <iostream>

#define DP_MAX 100

using namespace std;

int main()
{
    int i, N, DP[DP_MAX];

    N = 1;

    DP[0] = 1;
    
    for (i = 0; i < N; i++)
    {
        DP[i + 1] = DP[i] + i;
    }

    cout << DP[N];
    return 0;
}

