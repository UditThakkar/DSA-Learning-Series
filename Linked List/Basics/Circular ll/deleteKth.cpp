struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

node* deleteKth(node* head, int k){
    if(head==NULL) return NULL;
    if(k==1){
        delete head;
        return NULL;
    }
    node* curr = head;
    for(int i=0;i<k-2;i++){
        curr = curr->next;
    }
    node * temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}
