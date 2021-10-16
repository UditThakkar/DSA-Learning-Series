// que link: https://practice.geeksforgeeks.org/problems/pairwise-swap-of-nodes-in-linkelist/1/

// METHOD 1: SWAPPING DATA

struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node* curr = head;
    while(curr!=NULL && curr->next!=NULL){
        swap(curr->data,curr->next->data);
        curr = curr->next->next;
    }
    return head;
}

// METHOD 2 : Changing Pointers/References

struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    if(head==NULL||head->next==NULL)
        return head;
    Node *curr=head->next->next;
    Node *prev=head;
    head=head->next;
    head->next=prev;
    while(curr!=NULL&&curr->next!=NULL){
        prev->next=curr->next;
        prev=curr;
        Node *next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return head;
}
