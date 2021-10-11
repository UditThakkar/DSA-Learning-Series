// que link: https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1/

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* temp = new Node(x);
	temp->next = head;
	return temp;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
        Node* temp = new Node(x);
    	if(head==NULL) return temp;
    	Node* curr = head;
    	while(curr->next != NULL){
    	    curr = curr->next;
    	}
    	curr->next = temp;
    	return head;
        }
};
