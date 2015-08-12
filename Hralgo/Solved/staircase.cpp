#include <iostream>

using namespace std;

int main()
{
    int i, j, k, N;

    cin >> N;

    for (i = 1; i <= N; i++)
    {
        for (j = N; j > 0; j--)
        {
            if (i < j)
            {
                cout << " ";
            }
            else 
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}

