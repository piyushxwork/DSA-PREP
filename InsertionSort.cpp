#include<iostream>
using namespace std;


// void InsertionSort(int arr[], int n){

//     for(int i=1; i<n; i++){
//         int temp = arr[i];


//         for(int j = i - 1; j>= 0; j--){
//             if(arr[j] > temp){
//                 arr[j+ 1] = arr[j];
//                 arr[j] = temp;
//             }

//             else{
//                 break;
//             }
//         }
//     }
// }



void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];

        for(int j=i-1; j>=0; j--){
            if(arr[j] > temp){
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[5] = {1,2,3,1,2};
    int n = 5;
    
    InsertionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}