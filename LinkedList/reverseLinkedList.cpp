/*
Problem : reverse a linked list using iterative method.

Approach :
    make three pointers, for previous,current,next node
    connect, current->next to previous node, and then move to the next node

Time complexity :- O(n)
Space complexity -: O(1)
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
    int n;cin>>n; //number of nodes
    int a;
    for(int i =0;i<n;i++){
        cin>>a;
        insertAtTail(head,a);
    }
    cout<<"Original Linked List"<<endl;
    display(head);
    node* newHead = reverse(head);
    cout<<"reversed linked List"<<endl;
    display(newHead);

    return 0;
}
/*
Sample input/output :
    input :
    5
    1 2 3 4 5

    output:
    original linked list
    1->2->3->4->5->NULL
    reversed linked list
    5->4->3->2->1->NULL

*/