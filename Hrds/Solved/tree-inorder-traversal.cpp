#include <iostream>

using namespace std;

node *head, *tail;

void Inorder(node *root)
{
	if (root != tail)
	{
		Inorder(root -> left);
		cout << root -> data << " ";
		Inorder(root -> right);
	}
}
