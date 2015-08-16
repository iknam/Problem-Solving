#include <iostream>

using namespace std;

node *head, *tail;

void Preorder(node *root)
{	 
	if (root != tail)
	{
		cout << root -> data << " ";
		Preorder(root -> left);
		Preorder(root -> right);
	}
}
