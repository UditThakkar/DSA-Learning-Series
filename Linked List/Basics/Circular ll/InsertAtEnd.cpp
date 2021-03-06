struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

node* insertAtEnd(node* head, int x){
    node* temp = new node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        node* curr = head;
        while(curr->next!= head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next = head;
        return head;
    }
}

node* insertAtEndEfficient(node* head, int x){
    node* temp = new node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
}
