#include<iostream>
#include<algorithm>
using namespace std;

void nextPermut(int arr[], int n){
    int pivot = -1;
    for(int i= n-2; i >=0; i--){
        if(arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    }

    if(pivot == -1){
        reverse(arr, arr+n);
        return;
    }

    for(int i= n-1; i>=0; i--){
        if(arr[i] > arr[pivot]){
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    int i = pivot + 1;
    int j = n - 1;

    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n = 6;
    int arr[6] = {1,2,3,6,5,4};

    nextPermut(arr, n);
    printArray(arr, n);
    return 0;
}