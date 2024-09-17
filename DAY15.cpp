//QUESTION 1
//Write a program that defines a Student class and uses the this pointer in a member function to display the student's details
#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int age;
    float marks;
    Student(string name,int age,float marks){
        this->name=name;
        this->age=age;
        this->marks=marks;
    }
    
};
void print(Student s){
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.marks<<endl;
}

int main(){
    Student s1("Karan Raj",19,8.5);
    print(s1);
}
//QUESTION 2
//Write a C++ code that take linked list from user input and a value integer . Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40
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
//     ~Node(){
//         int value=this->data;
//         if(this->next!=NULL){
//             delete next;
//             this->next=NULL;
//         }
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
// void DeleteAtValue(Node* &head,int del){
//     Node* temp=head;
//     Node* prev=NULL;
//     while(temp!=NULL){
//         if(temp->data==del){
//             prev->next=temp->next;
//             temp=NULL;
//             delete temp;
//             break;

//         }
//         prev=temp;
//         temp=temp->next;


//     }
// }
// void print(Node* &head){
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
//     print(head);
//     cout<<"After alter: ";
//     DeleteAtValue(head,2);
//     print(head);
// }