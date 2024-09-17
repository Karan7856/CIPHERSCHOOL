//QUESTION 1
//Write a C++ code that take 2D array and key from user. Now you have to check that key exist inside the array or not if it exits print YES otherwise NO.

#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the row of the array: ";
    cin>>row;
    int col;
    cout<<"Enter the column of the array: ";
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[row][col];
        }
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    bool flag=false;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key==arr[i][j]){
                flag=true;
            }
        }
        
    }
    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}