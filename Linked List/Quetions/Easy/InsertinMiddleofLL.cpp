// que link: https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1/

Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node* temp = new Node(x);
	if(head==NULL){
	    return temp;
	}
    Node* slow=head, *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    temp->next = slow->next;
    slow->next = temp;
    return head;
}
