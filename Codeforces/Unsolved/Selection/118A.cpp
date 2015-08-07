#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, j;
    char vowels[10] = { 'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O' };
    string str;
    
    cin >> str;
    
    for (i = 0; i < str.length(); i++)
    {
        for (j = 0; j < 10; j++)
        {
            // cout << vowels[j];
            if (str[i] != vowels[j])
            {
                // cout << i << " " << j << endl;
                cout << str[i];
                break;
            }
            else
            {
                //cout << str[i];
                break;
            }
        }
    }
    
    // cout << vowels[2];
    
    return 0;
}
