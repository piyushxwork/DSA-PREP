#include<iostream>
using namespace std;




// void moveZero(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j = n - 1; j > i; j--){
//             if(arr[i] == 0 && arr[j] != 0){
//                 swap(arr[i], arr[j]);
//                 break;
//             }
//         }
//     }
// }







void moveZero(int arr[], int n){
    int j = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}




int main(){
    int n = 14;
    int arr[14] = {1,0,2,0,3,0,4,4,4,0,0,1,1,1};


    moveZero(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}