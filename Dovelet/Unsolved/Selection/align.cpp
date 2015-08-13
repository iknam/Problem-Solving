#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, N;

    cin >> N;

    vector< int > child(N);

    for (i = 0; i < N; i++)
    {
        cin >> child[i];
    }

    return 0;
}

