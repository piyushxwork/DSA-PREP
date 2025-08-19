#include<iostream>
using namespace std;

                            // RECURSIOM


// Printing names N times using recursion
// Time Complexity = O(N)
// Space Complexity = O(N)

// void func(int i, int n){
//     if(i > n) return;

//     cout<<"Piyush"<<endl;
//     func(i+1, n);
// }
// int main() {
//     func(1, 5);
//     return 0;
// }

// Output: 
    // Piyush
    // Piyush
    // Piyush
    // Piyush
    // Piyush




// Printing N numbers using recursion from 1 to N
// Time Complexity = O(N)
// Space Complexity = O(N)

// void func(int count, int n){
//     if(count > n) return;

//     cout<<count<<endl;
//     func(count + 1, n);
// }

// int main() {
//     func(1, 5);
//     return 0;
// }

// Output: 
    // 1
    // 2
    // 3
    // 4
    // 5


// Printing N numbers using recursion from N to 1
// Time Complexity = O(N)
// Space Complexity = O(N)

// void func(int i, int n){
//     if(i <= 0) return;

//     cout<<i<<endl;
//     func(i-1, n);
// }

// int main(){
//     func(10, 10);
//     return 0;
// }

// Output:
    // 10
    // 9
    // 8
    // 7
    // 6
    // 5
    // 4
    // 3
    // 2
    // 1


// Printing N numbers using recursion from 1 to N using Backtracking
// Time Complexity = O(N)
// Space Complexity = O(N)

// void func(int i, int n){
//     if(i <= 0) return;

//     func(i-1, n);
//     cout<<i<<endl;
// }

// int main(){
//     func(10, 10);
//     return 0;
// }

// Output:
    // 1
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // 10


// Printing N numbers using recursion from N to 1 using Backtracking
// Time Complexity = O(N)
// Space Complexity = O(N)

// void func(int i, int n){
//     if(i > n) return;

//     func(i+1, n);
//     cout<<i<<endl;
// }

// int main(){
//     func(1, 10);
//     return 0;
// }

// Output:
    // 10
    // 9
    // 8
    // 7
    // 6
    // 5
    // 4
    // 3
    // 2
    // 1




                     //    PARAMETERISED RECURSION


// Printing SUM of numbers from 1 to N using recursion
// Time Complexity = O(N)
// Space Complexity = O(N)

// void func(int i, int n, int sum){
//     if(i > n){
//         cout << sum << endl;
//         return;
//     }
    
//     func(i + 1, n, sum + i);
// }

// int main(){
//     func(1, 10, 0);
//     return 0;
// }

// Output: 
    // 55



// Printing SUM of numbers from N to 1 using recursion
// Time Complexity = O(N)
// Space Complexity = O(N) 

// void func(int n, int sum){
//     if(n < 1){
//         cout << sum << endl;
//         return;
//     }
    
//     func(n - 1, sum + n);
// }

// int main(){
//     func(10, 0);
//     return 0;
// }

// Output: 
    // 55


    // FUNCTIONAL RECURSION


// Printing SUM of numbers from 1 to N using recursion
// Time Complexity = O(N)
// Space Complexity = O(N)

// int func(int n){
//    if(n == 0) return 0;


//    return n + func(n -1);
// }

// int main(){

//     cout<<func(10)<<endl;

//     return 0;
// }



// Factorial of a number using recursion
// Time Complexity = O(N)
// Space Complexity = O(N)

// int func(int n){
//     if(n == 0) return 1;

//     return n * func(n - 1);
// }

// int main(){

//     cout<<func(5)<<endl;

//     return 0;
// }



// Reverse an array using recursion
// Time Complexity = O(N)
// Space Complexity = O(N)

// void reverse(int arr[], int l, int r){
//     if( l >= r) return;

//     swap(arr[l], arr[r]);
//     reverse(arr, l+ 1, r-1);
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};

//     reverse(arr, 0, 4);
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }





// Valid Palindrome using recursion
// Time Complexity = O(N)
// Space Complexity = O(N)


// bool valid(string &s, int i, int j){
//     if(i >= j) return true;

//     if(s[i]!= s[j]) return false;

//     return valid(s, i+1, j - 1);
// }


// int main(){
//     string s = "MADAM";

//     cout<<valid(s, 0,s.length() - 1);
//     return 0;
// }




                    //   MULTIPLE RECURISON

// Fibonacci series using recursion
// Time Complexity = O(2^N)
// Space Complexity = O(N)

// int func(int n){
//     if( n <= 1) return n;

//     return func(n - 1) + func(n - 2);
// }

// int main(){

//     cout<<func(5)<<endl;
//     return 0;
// }