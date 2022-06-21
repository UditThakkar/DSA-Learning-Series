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


	Node *addTwoNumbers(Node *l1, Node *l2)
{
    // Write your code here.
    Node* dummy = new Node(NULL);
    Node* temp = dummy;
    int carry = 0;
    while(l1!=NULL or l2!=NULL or carry){
        int sum = 0;
        if(l1!=NULL){
            sum+=l1->data;
            l1 = l1->next;
        }
        if(l2!=NULL){
            sum+=l2->data;
            l2 = l2->next;
        }
        sum+=carry;
        carry = sum/10;
        Node* node = new Node(sum%10);
        temp->next = node;
        temp = temp->next;
    }
    return dummy->next;
}
