#include <bits/stdc++.h>
using namespace std;

class Node {
    public:    
    int key;
    Node* next;
};
void push(Node** head_ref, int data){
    Node* new_node = new Node();
    new_node->key = data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;    
}
bool Find(Node* node,int key){
    if(node==NULL){        
        return false;
    } 
    if(node->key==key){        
        return true;
    }
    return Find(node->next,key);
}
int main(){

    Node* Head=nullptr;
    push(&Head,10);
    push(&Head,20);
    push(&Head,30);
    push(&Head,40);
    push(&Head,50);
    Find(Head,10) ? cout<<"Yes":cout<<"No";
    
    return 0;
}