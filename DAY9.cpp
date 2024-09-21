// Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int* ptr=&n;
//     cout<<"Printing the value using the variable itself: ";
//     cout<<n;
//     cout<<endl;
//     cout<<"Printing the value using the pointer: ";
//     cout<<*ptr;
// }

//Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int* ptr=&arr[0];
//     for(int i=0;i<n;i++){
//         cout<<*(ptr+i)<<" ";
//     }
// }

//Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* ptr1=&n;
    int** ptr2=&ptr1;
    cout<<"The output of the n using double pointer: ";
    cout<<**ptr2;
}