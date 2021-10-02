//reverse a linked list using recursion
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(node* &head , int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp-> next != NULL){
        temp = temp -> next;
    }
    temp->next = n;
}
void display(node* head){
    node*temp = head;
    while(temp != NULL){
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
node* reverseRecur(node* &head){
    //base
    if(head == NULL || head->next==NULL){
        return head;

    }
    node* newHead = reverseRecur(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}
int main(){
    node* head = NULL;
    for(int i=1;i<=6;i++){
        insertAtTail(head,i);
    }
    cout<<"original Linked List"<<endl;
    display(head);    
    node *newHead1 = reverseRecur(head);
    cout<<"Reversed Linked List"<<endl;
    display(newHead1);

    return 0;
}