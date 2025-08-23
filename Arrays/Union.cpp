#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;


vector<int> Unionofarrays(int arr1[], int arr2[], int n, int m){

    vector<int> ans;

    set<int>s;
    for(int i=0; i<n; i++){
        s.insert(arr1[i]);
    }

    for(int i=0; i<m; i++){
        s.insert(arr2[i]);
    }


    for(auto it : s){
        ans.push_back(it);
    }

    return ans;
}


int main(){
    int n = 5;
    int m = 3;
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {1,2,3};

    vector<int> ans = Unionofarrays(arr1,arr2,n,m);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}