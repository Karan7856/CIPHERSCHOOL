//QUESTION1
// #include <iostream>
// #include <cstring>

// int main() {
//     char str1[100], str2[100], result[200];
//     std::cout << "Enter the first string: ";
//     std::cin.getline(str1, 100);
//      std::cout << "Enter the second string: ";
//     std::cin.getline(str2, 100);
//     strcpy(result, str1);
//     strcat(result, str2);
//     std::cout << "Concatenated string: " << result << std::endl;
//     return 0;
// }


//QUESTION2

// #include <iostream>
// using namespace std;
// int main(){
//     float grade1;
//     cout<<"Enter grade 1: ";
//     cin>>grade1;
//     float grade2;
//     cout<<"Enter grade 2: ";
//     cin>>grade2;
//     float grade3;
//     cout<<"Enter grade 3: ";
//     cin>>grade3;
//     float grade4;
//     cout<<"Enter grade 4: ";
//     cin>>grade4;
//     float grade5;
//     cout<<"Enter grade 5: ";
//     cin>>grade5;
//     float average=(grade1+grade2+grade3+grade4+grade5)/5;
//     cout<<"The average grade is: "<<average;
// }



//QUESTION3
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int square=n*n;
    cout<<"The square of ";
    cout<<n;
    cout<<" is: ";
    cout<<square;
}