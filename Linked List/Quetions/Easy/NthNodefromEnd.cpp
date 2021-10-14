// que link: https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/

int getNthFromLast(Node *head, int n)
{
       // Your code here
       int len = 0;
       for(Node* curr = head; curr!=NULL;curr=curr->next){
           len++;
       }
       if(len<n){
           return -1;
       }
       Node* curr = head;
       for(int i=1;i<len-n+1;i++){
           curr = curr->next;
       }
       return curr->data;
}

// EFFICIENT SOLUTION

void printNthFromEnd(Node * head,int n){
    if(head==NULL)return;
    Node *first=head;
    for(int i=0;i<n;i++){
        if(first==NULL)return;
        first=first->next;
    }
    Node *second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<(second->data);
}
