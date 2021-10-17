// que link: https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1/

// METHOD 1 : USING HASHING

class Solution
{
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        unordered_map<Node*,Node*> h;
        for(Node* curr = head;curr!=NULL;curr=curr->next){
            h[curr] = new Node(curr->data);
        }
        for(Node *curr=head;curr!=NULL;curr=curr->next){
            Node *cloneCurr=h[curr];
            cloneCurr->next=h[curr->next];
            cloneCurr->arb=h[curr->arb];
        }
        Node *head2=h[head];
        
        return head2;
    }
};
