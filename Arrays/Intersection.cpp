#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// vector<int> intersection(vector<int> &arr1, vector<int> &arr2, int n, int m) {
//     vector<int> ans;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr1[i] == arr2[j]){
//                 ans.push_back(arr2[j]);
//                 arr2[j] = -1;
//             }
//         }
//     }
//     return ans;
// }


// int main(){
//     int n = 5;
//     int m = 5;
//     int arr1[5] = {2, 3, 4, 5, 6};
//     int arr2[5] = {1, 2, 3, 4, 5};

//     vector<int> v1(arr1, arr1 + n);
//     vector<int> v2(arr2, arr2 + m);
//     vector<int> ans = intersection(v1, v2, n, m);
//     for(int i=0; i<ans.size(); i++){
//         cout << ans[i] << " ";
//     }
//     return 0;

// }

vector<int> intersection(vector<int> &arr1, vector<int> &arr2, int n, int m) {
    vector<int> ans;
    int i =0 , j = 0;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr2[j]);
            i++;
            j++;
        }

        else if(arr1[i] < arr2[j]){
            i++;
        }

        else{
            j++;
        }
    }

    return ans;
}

int main(){
    int n = 5;
    int m = 5;
    int arr1[5] = {2, 3, 4, 5, 6};
    int arr2[5] = {1, 2, 3, 4, 5};

    vector<int> v1(arr1, arr1 + n);
    vector<int> v2(arr2, arr2 + m);
    vector<int> ans = intersection(v1, v2, n, m);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;

}