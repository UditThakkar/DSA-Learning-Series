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

int searchIterative(node* head,int x){
    int pos = 1;
    node*curr = head;
    while(curr!=NULL){
        if(curr->data = x){
            return pos;
        }
        else{
            curr = curr->next;
        }
    }
    return -1;
}

int recursiveSearch(node* head,int data){
    if(head==NULL) return -1;
    if(head->data == data) return 1;
    else{
        int res = recursiveSearch(head->next,data);
        if(res==-1) return -1;
        else{
            return res+1;
        }
    }
}