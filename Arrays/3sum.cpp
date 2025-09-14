#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

// vector<vector<int>> threeSum(vector<int> &arr, int n){
//     set<vector<int>> st;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             for(int k=0; k<n; k++){
//                 if(arr[i] + arr[j] + arr[k] == 0 && i != j && j != k && i != k){
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }

//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }


vector<vector<int>> threesum(vector<int>& arr, int n){

    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        if(i > 0 && arr[i] == arr[i-1]) continue;

        int j = i + 1;
        int k = n - 1;

        while( j< k){
            int sum = arr[i] + arr[j] + arr[k];

            if(sum < 0){
                j++;
            }

            else if (sum > 0){
                k--;
            }

            else if(sum == 0){
                vector<int> temp = {arr[i] , arr[j] , arr[k]};
                ans.push_back(temp);
                j++;
                k--;



            while(j < k && arr[j] == arr[j + 1]) j++;
            while(j < k && arr[k] == arr[k + 1]) k--;
            }

            
        }

    }
    return ans;
}






int main(){
    int n = 6;

    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threesum(arr, n);
    for(auto i: ans){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;

}