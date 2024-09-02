//QUESTION1
// #include <iostream>
// using namespace std;
// int main(){
//     int n1;
//     cout<<"Enter the first number: ";
//     cin>>n1;
//     int n2;
//     cout<<"Enter the second number: ";
//     cin>>n2;
//     int n3;
//     cout<<"Enter the third nnumber: ";
//     cin>>n3;
//     if(n1>n2&&n1>n3){
//         cout<<"The largest number is: ";
//         cout<<n1;
//     }
//     else if(n2>n1&&n2>n3){
//         cout<<"The largest number is: ";
//         cout<<n2;
//     }
//     else{
//         cout<<"The largest number is: ";
//         cout<<n3;
    
//         }
// }


//QUESTION2

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the score: ";
//     cin>>n;
//     if(n>=90&&n<=100){
//         cout<<"Grade: A";
//     }
//     else if(n>=80&&n<=89){
//         cout<<"Grade: B";
//     }
//     else if(n>=70&&n<=79){
//         cout<<"Grade: C";

//     }
//     else if(n>=60&&n<=69){
//         cout<<"Grade: D";
//     }
//     else if(n>=0&&n<=59){
//         cout<<"Grade: F";
//     }
// }

//QUESTION 3


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    switch(n){
        case 1:
        cout<<"The month is:January";
        break;
        case 2:
        cout<<"The month is:February";
        break;
        case 3:
        cout<<"The month is:March";
        break;
        case 4:
        cout<<"The month is:April";
        break;
        case 5:
        cout<<"The month is:May";
        break;
        case 6:
        cout<<"The month is:June";
        break;
        case 7:
        cout<<"The month is:July";
        break;
        case 8:
        cout<<"The month is:August";
        break;
        case 9:
        cout<<"The month is:September";
        break;
        case 10:
        cout<<"The month is:October";
        break;
        case 11:
        cout<<"The month is:November";
        break;
        case 12:
        cout<<"The month is:December";
        break;
        default:
        cout<<"Invalid";
        break;
        }
}