#include<iostream>
using namespace std;


// Array Palindrome Check

// void Palindrome(int arr[], int n){
//     int start = 0;
//     int end = n - 1;

//     while(start <= end){
//         if(arr[start] != arr[end]){
//             cout<<"Not a Palindrome"<<endl;
//             return;
//         }
//         else {
//             start++;
//             end--;
//         }
//     }
//     cout<<"Yes ! Array is aPalindrome"<<endl;
// }


// int main(){
//     int arr[5] = {1, 2, 3, 2, 1};
//     int n = 5;

//     Palindrome(arr, n);

//     return 0;
// }


// String Palindrome Check

// void Palindrome(string s, int n){
//     int start = 0;
//     int end = n - 1;

//     while(start <= end){
//         if(s[start] != s[end]){
//             cout<<"Not a Palindrome"<<endl;
//             return;
//         }

//         else{
//             start++;
//             end--;
//         }
//     }

//     cout<<"Yes ! String is a Palindrome"<<endl;
// }


// int main(){
//     string s = "MADAM";
//     int n = s.size();

//     Palindrome(s, n);
//     return 0;
// }



// Recursion Palindrome Check

bool palindromeCheck(string &s, int start, int end){
    if(start >= end) return true;

    if(s[start] != s[end]) return false;

    return palindromeCheck(s, start + 1, end - 1);
    
    
}


int main(){
    string s = "MADDM";
    int n = s.size();

    bool Palindrome = palindromeCheck(s, 0, n-1);

    if(Palindrome){
        cout<<"Yes ! String is a Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}
