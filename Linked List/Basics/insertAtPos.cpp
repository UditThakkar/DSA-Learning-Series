#include <bits/stdc++.h> 
using namespace std; 

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

node *insertAtPos(node* head,int x,int pos){
    node* temp = new node(x);
    if(pos==1){
        temp->next = head;
        return temp;
    }
    node *curr = head;
    for(int i=1;i<pos-2 && curr!=NULL;i++){
        curr = curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}