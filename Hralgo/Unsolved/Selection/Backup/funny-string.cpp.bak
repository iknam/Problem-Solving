#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string S[10];
    string R[10];
    int i, T;

    cin >> T;

    //S.resize(T);
    //R.resize(T);

    for (i = 0; i < T; i++)
    {
        cin >> S[i];
        //cout << S[i][0];
        //cout << S[i];
        reverse_copy(S[i].begin(), S[i].end(), back_inserter(R[i]));
        cout << R[i];
    }

    // cout << R;

    for (i = 0; i < T; i++)
    {
        if (abs(S[i][0]-S[i][1]) == abs(S[i][2] - S[i][3]))
        {
            //cout << "Funny" << endl;
        }
        else if (abs(S[i][0]-S[i][1]) != abs(S[i][2] - S[i][3]))
        {
            //cout << "Not Funny" << endl;
        }
    }
}
