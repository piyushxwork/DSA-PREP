#include<iostream>
using namespace std;

void SortO1(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }

        while (arr[right] == 1 && left < right) {
            right--;
        }

        if (arr[left] == 1 && arr[right] == 0 && left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}


void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n = 10;
    int arr[10] = {1,1,1,0,0,0,0,0,1,0};
    
    SortO1(arr,10);
    printArray(arr,10);
    
    return 0;
}