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

node* insertAtBegin(node* head,int x){
    node* temp1 = new node(x);
    temp->next=head;
    if(head!=NULL){
        head->prev = temp;
    }
    return temp;
}
