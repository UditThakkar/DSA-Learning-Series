// que link: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1/

Node* reverse(Node* head){
    Node* curr = head, *prev = NULL;
    while(curr!=NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);
        Node* sum=NULL;
        int carry = 0;
        while(first!=NULL || second!=NULL || carry!=0){
            int val = carry;
            if(first!=NULL){
                val += first->data;
            }
            if(second!=NULL){
                val+=second->data;
            }
            carry = val/10;
            val = val%10;
            
            Node* node = new Node(val);
            node->next = sum;
            sum = node;
            
            if(first!=NULL){
                first = first->next;
            }
            if(second!=NULL){
                second = second->next;
            }
        }
        return sum;
    }
};
