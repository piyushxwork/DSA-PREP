#include<iostream>

using namespace std;

bool ls(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x) return true;
    }
    return false;
}

int longSeq(int arr[], int n){
    int longest = 1;

    for(int i=0; i<n; i++){
        int x = arr[i];
        int count = 1;


        while(ls(arr, n, x+1) == true){
            x = x + 1;
            count = count + 1;
        }
        longest = max(longest, count);
        
    }
    return longest;

}


int main(){
    int n = 7;
    int arr[7] = {100,4,200,1,3,2,5};

    cout<<"The length of the longest consecutive sequence is : "<<longSeq(arr, n)<<endl;

    return 0;
}