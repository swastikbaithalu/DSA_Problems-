//reverse a linked list using iterative method
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
node* reverse(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* nex;
    while(curr != NULL){
        nex = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
}
int main(){
    node* head = NULL;
    for(int i =1;i<=5;i++){
        insertAtTail(head,i);
    }
    cout<<"Original Linked List"<<endl;
    display(head);
    node* newHead = reverse(head);
    cout<<"reversed linked List"<<endl;
    display(newHead);

    return 0;
}