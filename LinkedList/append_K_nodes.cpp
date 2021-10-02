//append last k nodes of linked list to the front
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
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int length(node* head){
    int l=0;
    node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
node* appendK(node* &head,int k){
    int l = length(head);
    if(k >= l){
        return head;
    }
    node* newtail;
    node* newhead;
    node* tail = head;
    k = k%l;
    int count = 1;
    while(tail->next != NULL){
        if(count == l-k){
            newtail = tail;
        }
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
    int k;cin>>k; //k node to be appended
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        insertAtTail(head,a);
    }
    cout<<"Original Linked List"<<endl;
    display(head);
    node* newhead = appendK(head,k);
    cout<<k<<" node appended Linked List"<<endl;
    display(newhead);

    return 0;
}