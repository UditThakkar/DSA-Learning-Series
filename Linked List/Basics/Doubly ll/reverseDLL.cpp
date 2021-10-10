struct node{
    int data;
    node* next;
    node* prev;
    node(int d){
        data = d;
        prev = NULL;
        next = NULL:
    }
}

node* reverse(node* head){
    if(head==NULL && head->next==NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr=curr->prev;
    }
    return prev->next;
}
