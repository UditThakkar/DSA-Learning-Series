// que link : https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1/

Node *removeDuplicates(Node *head)
{
    // your code goes here
    Node* curr = head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node*temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
    
}
