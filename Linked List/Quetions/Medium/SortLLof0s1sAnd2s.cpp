// que link : https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1/

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        if(head==NULL || head->next==NULL) return head;
        Node* zero = new Node(0);
        Node* one = new Node(0);
        Node* two = new Node(0);
        
        Node* curr0 = zero, *curr1 = one, *curr2 = two;
        Node* curr = head;
        while(curr!=NULL){
            if(curr->data==0){
                curr0->next = curr;
                curr0 = curr0->next;
                curr = curr->next;
            }
            else if(curr->data==1){
                curr1->next = curr;
                curr1 = curr1->next;
                curr = curr->next;
            }
            else{
                curr2->next = curr;
                curr2 = curr2->next;
                curr = curr->next;
            }
        }
        curr0->next = (one->next) ? (one->next) : (two->next); 
        curr1->next = two->next; 
        curr2->next = NULL;
        head = zero->next;
    }
};
