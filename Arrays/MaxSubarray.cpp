#include<iostream>
using namespace std;

// int maxSubarray(int arr[], int n){
//     int maxSum = INT_MIN;

//     for(int start = 0; start < n; start++){
//         int current_Sum = 0;
//         for(int end = start; end<n; end++){
//             current_Sum += arr[end];
//             maxSum = max(maxSum, current_Sum);
//         }
//     }
//     return maxSum;
// }


int maxSubarray(int arr[], int n){
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0; i<n; i++){
        currentSum += arr[i];

        maxSum = max(maxSum, currentSum);
    }

    if(currentSum < 0){
        currentSum = 0;
    }

    return maxSum;
}


int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};

    cout<<"The maximum sum of the subarrays is : "<<maxSubarray(arr,5)<<endl;
    return 0;
}