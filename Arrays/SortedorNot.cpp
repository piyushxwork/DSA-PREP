#include<iostream>
using namespace std;


bool SortedorNot(int arr[], int n){

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}


int main(){
    int n = 7;
    int arr[7] {1,2,4,4,5,6,7};


    bool sorted = SortedorNot(arr, n);

    if(sorted){
        cout<<"The array is sorted."<<endl;
    }

    else{
        cout<<"The array is not sorted."<<endl;
    }

    return 0;
}