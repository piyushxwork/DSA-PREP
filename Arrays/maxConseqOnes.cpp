#include<iostream>
using namespace std;

int maxConseOne(int arr[], int n){
    int cnt = 0;
    int maxc = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            cnt++;
            maxc = max(maxc, cnt);
        }
        else{
            cnt = 0;
        }
    }
    return maxc;
}

int main(){
    int arr[10] = {1,1,2,3,4,51,1,1,1,1};

    cout<<"The maximum number of consecutive one present in array is : "<<maxConseOne(arr,10)<<endl;

    return 0;
}

