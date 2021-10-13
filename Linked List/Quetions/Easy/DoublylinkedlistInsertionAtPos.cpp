que link: https://practice.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1/

void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node* temp = new Node(data);
    if(pos==1){
       temp->next=head;
    }
    
    Node* curr = head;
    for(int i=1;i<pos+1;i++){
        curr = curr->next;
    }
    temp->next = curr->next;
    temp->prev = curr;
    curr->next = temp;
        
}
