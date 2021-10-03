/*
Question : Given a linked list and an integer K. Append the last k node of the linked list to front.
    Case 1:
    if size of linked list <= k then return the linked list as it is.
    Case 2:
    if size of linked list is > k then appen last k node to the front and return the new Linked list

Approach :
find the length of linked list:- length = l;
now the new tail will be at l-k th position
and new head will be at l-k+1 th position
make next of new tail to null and next of original tail to original head
return new head

Time complexity :- O(n)
Space complexity :- O(1)
   
*/
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
//inserting node at tail function
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
//printing linked list function
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
//finding length of the linked list
int length(node* head){
    int l=0;
    node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
//function for appending last k node to front
node* appendK(node* &head,int k){
    int l = length(head);
    //if length is <= k then it will return the original linked list 
    if(l <= k){
        return head;
    }
    node* newtail;
    node* newhead;
    node* tail = head;
    k = k%l;
    int count = 1;
    while(tail->next != NULL){
        //new tail will be at l-k th position
        if(count == l-k){
            newtail = tail;
        }
        //new head will be at l-k+1 th position
        if(count == l-k + 1){
            newhead = tail;
        }
        count++;
        tail = tail->next;
    }
    newtail->next =NULL;
    tail->next = head;
    return newhead;
}

int main(){
    node* head = NULL;
    int n;cin>>n; //no of nodes
    int a;
    for(int i=0;i<n;i++){
        cin>>a; //taking input of node value
        insertAtTail(head,a);
    }
    int k;cin>>k; //k node to be appended
    cout<<"Original Linked List"<<endl;
    display(head);
    node* newhead = appendK(head,k);
    cout<<k<<" node appended Linked List"<<endl;
    display(newhead);

    return 0;
}
/*
Sample input/output :-
    Input :
    5
    1 2 3 4 5
    3

    output:
    Original linked list
    1->2->3->4->5->NULL
    3 node appended linked list
    3->4->5->1->2->NULL
*/