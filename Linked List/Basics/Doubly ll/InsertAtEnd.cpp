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

node* insertAtEnd(node* head,int x){
    node* temp = new node(x);
    if(head==NULL){
        return temp;
    }
    node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}
