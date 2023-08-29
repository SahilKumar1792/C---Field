#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    Node* next;
};
void push(Node** head_ref, int data){
    Node* new_node=new Node();
    Node* last_node=(*head_ref);

    new_node->key=data;

    if((*head_ref)==NULL){
     (*head_ref)=new_node;
     return;
    }
    while(last_node->next != NULL){
        last_node=last_node->next;
    }
    last_node->next=new_node;
    return;
}

void display(Node* head_ptr){    
    if(head_ptr==NULL)return;
    cout<<head_ptr->key<<'\t';
     display(head_ptr->next);
}
int length(Node* head_ptr,int count){
    if(head_ptr==NULL) return count;
    count++;
    return length(head_ptr->next,count);
}
int lengthRecursive(Node* head_ptr){
    if(head_ptr==NULL) return 0;    
    return 1+lengthRecursive(head_ptr->next);
}
int main(){

    Node* head=nullptr;
    push(&head,40);
    push(&head,30);
    push(&head,20);
    push(&head,10);
    display(head);
    int count=0;
    cout<< length(head,count)<<endl;
    cout<< lengthRecursive(head);
    return 0;
}