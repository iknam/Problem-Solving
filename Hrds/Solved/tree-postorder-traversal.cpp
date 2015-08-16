#include <iostream>

using namespace std;

node *head, *tail;

void Postorder(node *root)
{
	if (root != tail)
	{
		Postorder(root -> left);
		Postorder(root -> right);
		cout << root -> data << " ";
	}
}
