#include<iostream>
#include<vector>
using namespace std;

// vector<int> leader(int arr[], int n){
//     vector<int> ans;
//     for(int i=0; i<n; i++){
//         bool leader = true;
//         for(int j= i+1; j<n; j++){
//             if(arr[j] > arr[i]){
//                 leader = false;
//                 break;
//             }
//         }

//         if(leader == true){
//             ans.push_back(arr[i]);
//         }
//     }
//     return ans;
// }


vector<int> leader(int arr[], int n){
    vector<int> ans;
    int maxc = INT_MIN;
    for(int i=n-1; i>=0; i--){
        if(arr[i] > maxc){
            ans.push_back(arr[i]);
            maxc = arr[i];
        }
    }
    return ans;
}
int main(){
    int n = 6;
    int arr[6] = {10,22,12,3,0,6};

    vector<int> Ans = leader(arr, n);
    for(int i=0; i<Ans.size(); i++){
        cout<<Ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}
