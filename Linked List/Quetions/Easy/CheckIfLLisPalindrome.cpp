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
