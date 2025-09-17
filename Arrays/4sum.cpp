#include<iostream>
#include<set>
#include<vector>
using namespace std;

vector<vector<int>> Foursome(vector<int>& arr, int n){
    set<vector<int>> st;

    for(int i = 0; i<n; i++){
        for(int j = i + 1; j<n; j++){
            for(int k = j + 1; k<n; k++){
                for(int p = k + 1; p<n; p++){
                    if(arr[i] + arr[j] + arr[k] + arr[p] == 0 && i != j && i != k && i != p && j != k && j != p && k != p){
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[p]};
                        st.insert(temp);
                    }
                }
            }
        }
    }


    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}


int main(){
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int n = arr.size();

    vector<vector<int>> result = Foursome(arr, n);

    for(auto vec : result){
        for(auto val : vec){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}