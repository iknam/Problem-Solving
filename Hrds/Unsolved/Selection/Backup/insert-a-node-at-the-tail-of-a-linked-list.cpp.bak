Node *head, *tail;

Node *Insert(Node* head, int data)
{
	Node *insert, *fortail;
	insert = (Node*)malloc(sizeof(Node));
	fortail =  (Node*)malloc(sizeof(Node));

/*	insert -> data = data;
	tail -> next = tail;
	insert -> next = tail;
*/	
    insert -> data = data;
	insert -> next = tail -> next;
	tail -> next -> next = fortail;
	//insert = tail;

    return head;	
}
