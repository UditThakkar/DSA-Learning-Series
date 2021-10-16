// que link : https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1/

//  METHOD 1 : USING STACK
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        stack<int> s;
        for(Node* curr = head;curr!=NULL;curr=curr->next){
            st.push_back(curr->data);
        }
        for(Node* curr = head;curr!=NULL;curr=curr->next){
            if(st.top()!=curr->data){
                return false;
            }
            st.pop();
        }
        return false;
    }
};

// EFFICIENT SOLUTION

class Solution{
  public:
  
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
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL) return true;
        Node* slow = head, *fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* rev = reverse(slow->next);
        Node* curr = head;
        while(rev!=NULL){
            if(rev->data!=curr->data)
                return false;
            rev = rev->next;
            curr = curr->next;
        }
        return true;
    }
};
