#include<iostream>
#include<vector>
#include<map>
#include <unordered_map>

using namespace std;

// BRUTE FORCE APPROACH
// TIME COMPLEXITY: O(N^2)
// SPACE COMPLEXITY: O(1)
// vector<int> Majority(int arr[], int n){
//     vector<int> ans;

//     for(int i=0; i<n; i++){
//         int count = 0;
//         for(int j=0; j<n; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
        
//         if(count > n/3){
//             bool isAlreadyPresent = false;
//             for(int k=0; k<ans.size(); k++){
//                 if(ans[k] == arr[i]){
//                     isAlreadyPresent = true;
//                     break;
//                 }
//             }
            
//             if(!isAlreadyPresent){
//                 ans.push_back(arr[i]);
//             }
//         }
//     }

//     return ans;
// }


// vector<int> Majority(int arr[], int n){
//     vector<int> ans;

//     unordered_map<int,int> mpp;
//     for(int i=0; i<n; i++){
//         mpp[arr[i]]++;    
        
//         if(mpp[arr[i]] > n/3){
//             bool isAlreadyExists = false;
//             for(int k=0; k<ans.size(); k++){
//                 if(ans[k] == arr[i]){
//                     isAlreadyExists = true;
//                     break;
//                 }
//             }

//             if(!isAlreadyExists){
//                 ans.push_back(arr[i]);
//             }
//         }
//     }
//     return ans;
// }


// OPTIMAL APPROACH
// TIME COMPLEXITY: O(N)
// SPACE COMPLEXITY: O(1)


vector<int> Majority(int arr[], int n){
    int count1 = 0;
    int count2 = 0;
    int el1 = 0;
    int el2 = 0;

    for(int i=0; i<n; i++){
        if(count1 == 0 && arr[i] != el2){
            count1 = 1;
            el1 = arr[i];
        }

        else if(count2 == 0 && arr[i] != el1){
            count2 = 1;
            el2 = arr[i];
        }

        else if (arr[i] == el1) count1++;
        else if(arr[i] == el2) count2++;

        else count1--, count2--;
    }


    count1 = 0;
    count1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == el1) count1++;
        else if(arr[i] == el2) count2++;
    }

    vector<int> ans;
    if(count1 > n/3) ans.push_back(el1);
    if(count2 > n/3) ans.push_back(el2);

    return ans;
}
int main(){
    int n = 8;
    int arr[8] = {1,1,1,3,3,2,2,2};

    vector<int> ans = Majority(arr, n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
