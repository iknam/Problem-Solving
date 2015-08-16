Node *head, *tail;

void Print(Node* head)
{
    while (head != tail)
    {
        cout << head -> data << endl;
        head = head -> next;
    }
}
