struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void print(node* head){
    if(head==NULL) return NULL;
    cout<<head->data<<" ";
    for(node* p=head->next;p!=head;p=p->next){
        cout<<p->data<<" "; 
    }
}
