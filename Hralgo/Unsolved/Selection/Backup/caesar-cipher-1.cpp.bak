#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    int i, j, N, K;
    string S;

    cin >> N >> S >> K;

    for (i = 0; i < N; i++)
    {
        if ((S[i] > 'a' && S[i] < 'z') || (S[i] > 'A' && S[i] < 'Z'))
        {
            S[i] += K;
        }
        else if (S[i] > (char)('z' - K))
        {
            cout << (char)('z' - K) << endl;
            S[i] = (char)('a' + K - 1);
            cout << S[i] << endl;
        }
        /*if (S[i] > char('Z' - K))
        {
            S[i] = (char)('A' + K - 1);
            cout << S[i] << endl;
        }*/
    }

    cout << S;

    return 0;
}
