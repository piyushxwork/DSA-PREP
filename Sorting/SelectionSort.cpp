#include<iostream>
using namespace std;


// void SelectionSort(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int minIndex = i;

//         for(int j = i+1; j<n; j++){
//             if(arr[j] < arr[minIndex]){
//                 minIndex = j;
//             }
            
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }



void SelectionSort(int arr[], int n){

    for(int i=0; i<n; i++){
        int minIndex = i;

        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main(){
    int arr[5] = {1,2,3,1,2};
    int n = 5;


    SelectionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}