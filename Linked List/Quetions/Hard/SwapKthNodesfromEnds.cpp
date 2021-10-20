// que link : https://practice.geeksforgeeks.org/problems/swap-kth-node-from-beginning-and-kth-node-from-end-in-a-singly-linked-list/1/

Node *swapkthnode(Node* head, int num, int k)
{
    // Your Code here
    if(k>num) return head;
    if(2*k-1 == num) return head;
    
    Node* prev1 = NULL;
    Node* curr1 = head;
    
    Node* prev2 = NULL;
    Node* curr2 = head;
    
    int count = k-1;
    while(count--){
        prev1 = curr1;
        curr1 = curr1->next;
    }
    count = num-k;
    while(count--){
        prev2 = curr2;
        curr2 = curr2->next;
    }
    if(prev1!=NULL){
        prev1->next = curr2;
    }if(prev2!=NULL){
        prev2->next = curr1;
    }
    
    Node* temp = curr1->next;
    curr1->next = curr2->next;
    curr2->next = temp;
    
    if(k==1) return curr2;
    if(k==num) return curr1;
    return head;
}
