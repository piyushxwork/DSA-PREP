#include<iostream>

using namespace std;


// void BubbleSort(int arr[], int n){
//     for(int i = 1; i<n - 1; i++){
//         for(int j = 0; j< n - i; j++){
//             if(arr[j]  > arr[j + 1]){
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     } 
// }


void BubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[5] = {1,2,3,1,2};
    int n = 5;


    BubbleSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    print endl;
}