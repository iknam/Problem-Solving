#include <iostream>

using namespace std;

node *head, *tail

void Preorder(node *root)
{
    if (root != tail)
    {
        cout << Preorder(root -> left) << " ";
        cout << Preorder(root -> right) << " ";
    }
}
