
// Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: YES

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
//     int target_value;
//     cout<<"Enter the target value: ";
//     cin>>target_value;
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         if(target_value==arr[i]){
//             flag=true;
//         }
//     }
//     if(flag==true){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
// }



// Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: 3


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target_value;
    cout<<"Enter the target value: ";
    cin>>target_value;
    for(int i=0;i<n;i++){
        if(target_value==arr[i]){
            cout<<i+1;
            
        }
    }
}




