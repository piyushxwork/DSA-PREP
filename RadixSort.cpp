#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;

// SORTING ALGORITHMS REVISION --> Bubble Sort, Selection Sort, Insertion Sort, Merge Sort

// Selection Sort

// void SelectionSort(vector<int> &arr, int n){
//     for(int i=0; i<n; i++){
//         int minIndex = i;
//         for(int j = i; j<n; j++){
//             if(arr[j] < arr[minIndex]){
//                 minIndex = j;

//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }

// Bubble Sort
// void BubbleSort(vector<int> &arr, int n){
//     for(int i=1; i<n; i++){
//         for(int j = 0; j<n - i; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// // Insertion Sort
// // void InsertionSort(vector<int> &arr, int n){
// //     for(int i=1; i<n; i++){
// //         int temp = arr[i];

// //         for(int j = i-1; j>=0; j--){
// //             if(arr[j] > temp){
// //                 arr[j+1] = arr[j];
// //                 arr[j] = temp;
// //             }
// //         }

// //     }
// // }


// // Merge Sort

// vector<int> mS(vector<int> &arr, int start, int end, int mid){
//     vector<int> ans;
//     int left = start;
//     int right = mid + 1;

//     while(left <= mid && right <= end){
//         if(arr[left] <= arr[right]){
//             ans.push_back(arr[left]);
//             left++;
//         }

//         else if(arr[right] < arr[left]){
//             ans.push_back(arr[right]);
//             right++;
//         }
        
//     }
    
//     while(left <= mid){
//         ans.push_back(arr[left]);
//         left++;
//     }

//     while(right <= end){
//         ans.push_back(arr[right]);
//         right++;
//     }

//     for(int i= start ; i <= end; i++){
//         arr[i] = ans[i - start];
//     }

//     return ans;
// }

// void mergeSort(vector<int> &arr, int start, int end){

//     if(start >= end) return;

//     int mid = start + (end - start)/2;

//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid + 1, end);
//     mS(arr, start, end, mid);
// }

// int main(){
//     vector<int> arr = {5,2,3,1,2};
//     int n = arr.size();

//     // SelectionSort(arr,n);
//     // InsertionSort(arr,n);

//     mergeSort(arr, 0, n-1);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }



// SEARCHING ALGORITHMS --> Linear Search, Binary Search

// int linearSearch(vector<int> &arr, int n, int key){
//     for(int i=0; i<n; i++){
//         if(arr[i] == key) return i;
//     }
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5,6,7,8,9};
//     int n = arr.size();
//     int key = 5;

//     cout<<linearSearch(arr,n,key)<<endl;
// }



// int BinarySearch(int arr[], int n, int key){
//     int start = 0;
//     int end = n - 1;

//     while(start <= end){
//         int mid = start + (end - start)/2;

//         if(arr[mid] == key) return mid;

//         else if(arr[mid] > key){
//             end = mid - 1;
//         }

//         else{
//             start = mid + 1;
//         }
//     }

//     return -1;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;
//     int key = 4;

//     cout<<BinarySearch(arr,n,key)<<endl;
// }



// ARRAYS REVISION --> Brute Force Approaches --> Better Approaches --> Optimal Approaches

// Two Pointer Approach --> Sliding Window Technique --> Hashing --> Prefix Sum --> Difference Array --> Sorting and Searching Algorithms
// Bit Manipulation --> Maths and Number Theory --> Linked List --> Stack and Queue --> Trees and Graphs
// Recursion and Backtracking --> Dynamic Programming --> Greedy Algorithms
// Divide and Conquer --> String Algorithms --> Geometry --> Miscellaneous Topics
// Advanced Data Structures --> System Design and Scalability --> Competitive Programming
// Problem Solving and Problem Patterns
// Time and Space Complexity Analysis --> Big O Notation --> Problem Solving Strategies
// C++ STL --> C++17 Features and Updates --> C++20 Features and Updates
// C++11 Features and Updates --> C++14 Features and Updates --> C++17 Features and Updates
// C++20 Features and Updates --> C++23 Features and Updates --> C++ Standard Library
// C++ Language Fundamentals --> C++ Syntax and Semantics --> C++ Data Types and Variables
// C++ Control Structures --> C++ Functions and Recursion --> C++ Pointers and References
// C++ Object-Oriented Programming --> C++ Templates and Generic Programming
// C++ Exception Handling --> C++ File I/O --> C++ Memory Management
// C++ Multithreading and Concurrency --> C++ Networking --> C++ GUI Programming
// C++ Game Development --> C++ Web Development --> C++ Mobile Development
// C++ Database Programming --> C++ Performance Optimization --> C++ Best Practices
// C++ Coding Standards --> C++ Code Reviews --> C++ Debugging and Testing
// C++ Development Tools --> C++ IDEs and Editors --> C++ Build Systems
// C++ Version Control --> C++ Collaboration and Teamwork --> C++ Open Source Contribution
// C++ Career Development --> C++ Interview Preparation --> C++ Resume Building
// C++ Job Search Strategies --> C++ Networking and Professional Development
// C++ Industry Trends --> C++ Future Directions --> C++ Community and Resources

// Largest Element in an Array

// int largestelement(int arr[], int n){
//     sort(arr, arr + n);
//     return arr[n - 1];
// }


// int largestelement(int arr[], int n){
//     int largest = INT_MIN;

//     for(int i=0; i<n; i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     return largest;
// }


// Second Largest Element in an Array

// int SecondLargest(int arr[], int n){
//     sort(arr, arr + n);

//     for(int i = n - 2; i >= 0; i--){
//         if(arr[i] != arr[n - 1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }


// int SecondLargest(int arr[], int n){
//     sort(arr, arr + n);

//     for(int i = n - 2; i >= 0; i--){
//         if(arr[i] != arr[n - 1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }


// int SecondLargest(int arr[], int n){
//     int largeest = INT_MIN;
//     int secondLargest = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i] > largeest){
//             largeest = arr[i];
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i] > secondLargest && arr[i] < largeest){
//             secondLargest = arr[i];
//         }
//     }
//     return secondLargest;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;

//     cout<<SecondLargest(arr,n)<<endl;
// }



// bool Sorted(int arr[], int n){
//     for(int i=1; i<n; i++){
//         if(arr[i] < arr[i -1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;


//     bool sort = Sorted(arr, n);

//     if(sort){
//         cout<<"The array is sorted."<<endl;
//     }

//     else{
//         cout<<"The array is not sorted."<<endl;
//     }

//     return 0;
// }

