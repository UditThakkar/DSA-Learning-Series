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

node* deleteLastNode(node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        node* curr = head;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->prev-.next = NULL;
        delete curr;
        return head;
    }
}
