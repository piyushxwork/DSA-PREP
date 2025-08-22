#include<iostream>
using namespace std;

int linearsearch(int arr[], int  n, int key){


    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}


int main(){
    int n = 14;
    int arr[14] = {1,0,2,0,3,0,4,4,4,0,0,1,1,1};

    int key = 3;
    int index = linearsearch(arr,n,key);

    if(index != 0){
        cout<<"Key key is present at index: "<<index<<endl;
    }

    else{
        cout<<"The key is not present in the array"<<endl;
    }
    return 0;
}