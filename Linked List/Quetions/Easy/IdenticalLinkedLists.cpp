// que link: https://practice.geeksforgeeks.org/problems/identical-linked-lists/1/

bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    Node* temp1 = head1, *temp2 = head2;
	while(temp1!=NULL && temp2!=NULL){
	    if(temp1->data!=temp2->data){
	        return false;
	    }
	    temp1 = temp1->next;
	    temp2 = temp2->next;
	}
	return (temp1==NULL && temp2==NULL);
}
