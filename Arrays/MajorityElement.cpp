#include<iostream>
#include<algorithm>
using namespace std;

// Brute force
// int majority(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int freq = 0;

//         for(int j=0; j<n; j++){
//             if(arr[i] == arr[j]){
//                 freq++;
//             }

//         }
//         if(freq > n/2){
//             return arr[i];
//         }
//     }
//     return -1;
// }


// Better Approach

// int majority(int arr[], int n){
//     sort(arr, arr+n);
//     int freq = 1;
//     int ans = arr[0];

//     for(int i=1; i<n; i++){
//         if(arr[i] == arr[i - 1]) freq++;

//         else{
//             freq = 1;
//             ans = arr[i];
//         }
//         if(freq > n/2) return ans;
//     }
//     return ans;
// }



// MOORE VOTING ALGO

int majority(int arr[], int n){
    int freq = 0;
    int ans = 0;

    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = arr[i];
        }

        if(arr[i] == ans) freq++;

        else{
            freq--;
        }

    }
    return ans;
}

int main(){
    int n = 5;
    int arr[5] = {1,1,1,2,5};

    cout<<"The majority element present in array is : "<<majority(arr,5)<<endl;
    return 0;
}