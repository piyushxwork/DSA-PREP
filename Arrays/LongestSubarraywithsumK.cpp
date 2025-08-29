#include<iostream>
using namespace std;

// int LongestSumK(int arr[], int n, int k){
//     int len = 0;
//     for(int i=0; i < n; i++){
//         for(int j= i; j < n; j++){
//             int sum = 0;
//             for(int p = i; p <= j; p++){
//                 sum = sum + arr[p];
//             }

//             if(sum == k){
//                 len = max(len, j - i + 1);
//             }
//         }
//     }
//     return len;
// }

// int main(){
//     int arr[10] = {1,2,3,1,1,1,1,4,2,3};

//     cout<<"The longest subarray with sum k is : "<<LongestSumK(arr,10, 3)<<endl;
//     return 0;
// }



int LongestSumK(int arr[], int n, int k){
    int len = 0;
    for(int i=0; i < n; i++){
        int sum = 0;
        for(int j= i; j < n; j++){
            sum = sum + arr[j];
            
            if(sum == k){
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

int main(){
    int arr[10] = {1,2,3,1,1,1,1,4,2,3};

    cout<<"The longest subarray with sum k is : "<<LongestSumK(arr,10, 3)<<endl;
    return 0;
}