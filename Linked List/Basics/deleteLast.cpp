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

node *deleteLast(node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    } 
    node *curr=head->next;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}