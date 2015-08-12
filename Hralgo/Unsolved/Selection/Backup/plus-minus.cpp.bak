#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, N, plus = 0, minus = 0, zero = 0;

    cin >> N;

    int *data = new int[N];

    for (i = 0; i < N; i++)
    {
        cin >> data[i];
        if(data[i] > 0) plus++;
        else if(data[i] < 0) minus++;
        else zero++;
    }

    cout << fixed << setprecision(N);
    cout << (double)plus / N << endl;
    cout << (double)minus / N << endl;
    cout << (double)zero / N << endl;

    return 0;
}

