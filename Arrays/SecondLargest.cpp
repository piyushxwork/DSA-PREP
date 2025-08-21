#include<iostream>
#include<algorithm>
using namespace std;

// int SecondLargest(int arr[], int n){
//     sort(arr, arr + n);

//     for(int i= n-2; i>=0; i--){
//         if(arr[i]!= arr[n-1]){
//             return arr[i];
//         }
//     }
// }




int SecondLargest(int arr[], int n){
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int j=0; j<n; j++){
        if(arr[j] > secondMax && arr[j] < max){
            secondMax = arr[j];
        }
    }
    if(secondMax == INT_MIN) return -1;
    return secondMax;
}

int main(){
    int n = 7;
    int arr[7] = {9,4,7,2,5,2,3};

    cout<<"the second largest element present in the array is : "<<SecondLargest(arr,n)<<endl;
    return 0;
    
}
