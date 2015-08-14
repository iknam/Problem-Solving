#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector< int > price;
    long long i, N, K, ans = 0, sum = 0;

    cin >> N >> K;

    price.resize(N);

    for (i = 0; i < N; i++)
    {
        cin >> price[i];
    }

    sort(price.begin(), price.end(), greater< int >());

    for (i = 0; i < N; i++)
    {
        if (price[i] <= K)
        {
            if (sum <= K)
            {
                sum += price[i];
                ans++;
                cout << price[i] << endl;
            }
        }
    }

    cout << ans;

    return 0;
}

