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

node* deleteHead(node* head){
    if(head == NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
}
