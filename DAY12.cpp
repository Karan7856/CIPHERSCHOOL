//QUESTION 1
//Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40 Output: 10 20 30 40
// #include <iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void InsertAtTail(Node* &head,int data){
//     Node* new_node=new Node(data);
//     if(head==NULL){
//         head=new_node;
//     }
//     else{
//         Node* temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=new_node;
//     }
// }
// void printLinkedList(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
// }
// int main(){
//     Node* head=NULL;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int m;
//         cin>>m;
//         InsertAtTail(head,m);
//     }
//     printLinkedList(head);
// }


// Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40
// Output: The linked list becomes 10 -> 20 -> 30 -> 40


#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
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
void printLinkedList(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
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
    cout<<"Original Linked List: ";
    printLinkedList(head);
    InsertAtTail(head,40);
    cout<<endl;
    cout<<"Modified Linked List: ";
    printLinkedList(head);
}
