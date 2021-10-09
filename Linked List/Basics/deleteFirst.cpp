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

node* deleteHead(node* head){
    if(head==NULL) return NULL;
    else{
        node* temp = head->next;
        delete head;
        return temp;
    }
}
