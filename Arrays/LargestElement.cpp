#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;


// int largestElement(int arr[], int n){
//     int maxElement = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i] > maxElement){
//             maxElement = arr[i];
//         }
//     }
//     return maxElement;
// }

// int main(){
//     int n = 7;
//     int arr[7] = {9,4,7,2,5,2,3};

//     cout<<"the largest element present in the array is : "<<largestElement(arr,n)<<endl;
//     return 0;

    
// }


int largestElement(int arr[], int n){
    sort(arr, arr + n);

    return arr[n-1];
}

int main(){
    int n = 7;
    int arr[7] = {9,4,7,2,5,2,3};

    cout<<"the largest element present in the array is : "<<largestElement(arr,n)<<endl;
    return 0;

    
}