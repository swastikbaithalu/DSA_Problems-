/*
Problem : reverse a linked list using recursive method

Approach :
    we are at head,recursively reverse remaining linked list
    the head->next node should be second last node and it's next should be head
    so head->next->next = head
    as the head will be the last node so it's next will be null
    head->next = null
    then return reversed linked list

Time complexity :- O(n)
Space complexity :- O(1)
*/
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
    node* newHead = reverseRecur(head->next); //calling for the remaining linked list
    head->next->next = head;
    head->next = NULL;

    return newHead;
}
int main(){
    node* head = NULL;
    int n;cin>>n; //number of nodes
    int a;
    for(int i=0;i<n;i++){
        cin>>a
        insertAtTail(head,a);
    }
    cout<<"original Linked List"<<endl;
    display(head);    
    node *newHead1 = reverseRecur(head);
    cout<<"Reversed Linked List"<<endl;
    display(newHead1);

    return 0;
}
/*
Sample input/output:
    input:
    5
    1 2 3 4 5

    output:
    original linked list
    1->2->3->4->5->NULL
    reversed linked list
    5->4->3->2->1->NULL
*/