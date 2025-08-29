#include<iostream>
using namespace std;

void subarrays(int arr[],int n){
    for(int start = 0; start <n; start++){
        for(int end = start; end < n; end++){
            for(int i=start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};

    // cout<<"All possible subarrays are : "<<subarrays(arr,5);
    subarrays(arr,5);
    
    return 0;
}