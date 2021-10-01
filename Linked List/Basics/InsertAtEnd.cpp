#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node* insertAtEnd(Node* head,int x){
    Node* temp = new Node(x);
    if(head==NULL) return temp;
    Node* curr = head;
    while(curr->next!=NULL) curr = curr->next;
    curr->next=temp;
    return head;
} 

int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data;
	return 0;
} 