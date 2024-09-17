//QUESTION 1
#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next=NULL;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtTail(Node* &head,int data){
    Node* new_node=new Node(data);
    if(head==NULL){
        head=new_node;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
void InsertElement(Node* &head,int value){
    Node* new_node=new Node(value);
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        if(new_node->data<curr->data&&new_node->data>prev->data){
            prev->next=new_node;
            new_node->next=curr;
        }
        prev=curr;
        curr=curr->next;
    }
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        InsertAtTail(head,m);
        }
    cout<<"Original List: ";
    print(head);
    int value;
    cin>>value;
    InsertElement(head,value);
    cout<<"New List: ";
    print(head);
}