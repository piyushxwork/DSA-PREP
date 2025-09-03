#include<iostream>
#include<vector>
using namespace std;

// vector<int> rearrange(int arr[], int n){
//     vector<int> ans;
//     vector<int> dup1;
//     vector<int> dup2;

//     for(int i=0; i<n; i++){
//         if(arr[i] > 0) dup1.push_back(arr[i]);

//         else if(arr[i] < 0) dup2.push_back(arr[i]);
//     }

//     int i=0, j=0;

//     while(i < dup1.size() && j < dup2.size()){
//         ans.push_back(dup1[i++]);
//         ans.push_back(dup2[j++]);
//     }

//     return ans;
// }



vector<int> rearrange(int arr[], int n){
    vector<int> ans(n ,0);

    int pos = 0;
    int neg = 1;

    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            ans[pos] = arr[i];
            pos += 2;
        }

        else{
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    return ans;
}

int main(){
    int n = 6;

    int arr[6] = {2,-2,-4,5,1,5};

    vector<int> Ans = rearrange(arr,6);
    for(int i=0; i<n; i++){
        cout<<Ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}