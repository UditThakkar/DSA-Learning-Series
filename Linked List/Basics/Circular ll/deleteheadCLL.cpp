struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

node* deleteHead(node* head){
    if(head==NULL) return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    node* curr = head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
}

node* deleteHeadEfficent(node* head){
    if(head==NULL) return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    node* temp = head->next;
    head->next = temp->next;
    delete temp;
    return head;
}
