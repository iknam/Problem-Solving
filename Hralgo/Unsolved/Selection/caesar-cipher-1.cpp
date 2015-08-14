#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    int i, j, N, K;
    string S = {"ab", "zx"};
    regex reg("[a-z] + \\");

    smatch m;

    if (regex_match(S, m, reg))
    {
        for (auto &sm : m)
            cout << sm << endl;
    }

    //cin >> N >> S >> K;

    /*for (const auto &str : S)
    {
        cout << str << ": " << regex_match(str, reg) << endl;
    }*/

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < K; j++)
        {
            /*if (S[i] != 'a')
            {
                //S[i]++;
            }*/
        }
    }

    //cout << S;

    return 0;
}

