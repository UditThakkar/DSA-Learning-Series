// que link : https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        Node* slow = head, *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(slow!=fast){
            return;
        }
        int size = 1;
        fast = fast->next;
        while( fast != slow )
        {
            size++;
            fast = fast->next;
        }
        slow = head;
        fast = head;
        
        for(int i=0; i<size-1; i++)
            fast = fast->next;
        
        while(fast->next!=slow){
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = NULL;
    }
};
