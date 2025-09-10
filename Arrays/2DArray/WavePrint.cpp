#include<iostream>
#include<vector>
using namespace std;

vector<int> WaveMatrix(int arr[4][4], int n, int m){

    vector<int> ans;
    for(int j=0; j<m; j++){

        if(j&1){

            for(int i= n-1; i>=0; i--){
                ans.push_back(arr[i][j]);
            }
            
        }
        else{
            for(int i = 0; i<n; i++){
                ans.push_back(arr[i][j]);
            }
        }

    }

    return ans;
}


int main(){
    int n = 4;
    int m = 4;
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    vector<int> ans = WaveMatrix(arr,n,m);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}