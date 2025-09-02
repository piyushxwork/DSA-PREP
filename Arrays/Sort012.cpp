#include<iostream>
using namespace std;

void DutchNationalFlag(int arr[], int n){
    int left = 0;
    int mid = 0;
    int right = n - 1;

    while(mid <= right){
        if(arr[mid] == 0){
            swap(arr[left], arr[mid]);
            left++;
            mid++;
        }

        else if(arr[mid] == 1){
            mid++;
        }

        else if(arr[mid] == 2){
            swap(arr[mid], arr[right]);
            right--;
        }
    }
}


void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n = 10;
    int arr[10] = {2,0,2,0,1,1,1,0,0,2}; 

    DutchNationalFlag(arr,10);
    printArray(arr, 10);
    return 0;
}