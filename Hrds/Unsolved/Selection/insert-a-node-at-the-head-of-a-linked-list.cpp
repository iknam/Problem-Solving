Node *head, *tail, *nextNode, *insert;

Node *Insert(Node* head, int data)
{
	insert = (Node*)malloc(sizeof(Node));
	nextNode = (Node*)malloc(sizeof(Node));
	
	insert -> data = data;
	insert -> nextNode = head -> nextNode;
	head -> nextNode = nextNode;
	/*if(head -> next == nullptr) return insert;
	else
	{
		nextNode = insert -> next;
		while(nextNode -> next != nullptr)
		{
			nextNode = nextNode -> next;
		}*/
		//nextNode -> next = insert;
		return head;
		
}
