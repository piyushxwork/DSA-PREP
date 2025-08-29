#include<iostream>
#include<vector>

using namespace std;



int missingNo(vector<int> &arr, int n){
    for(int i=1; i<n; i++){
        bool flag = false;

        for(int j=0; j<n; j++){
            if(arr[j] == i){
                flag = true;
            }
        }

        if(flag == false) return i;
    }

    return -1;
}

// int missingNo(vector<int> &arr, int n){
    
//     vector<int> hash(n + 1, 0);
//     for(int i=0; i<arr.size(); i++){
//         hash[arr[i]]++;
//     }

//     for(int i=1; i<=n; i++){
//         if(hash[i] == 0) return i;
//     }

//     return -1;
// }


int main(){
    int n = 5;
    vector<int> arr = {1,2,4,5};

    int missing = missingNo(arr,5);

    cout<<"the missing number present in the array is : "<< missing <<endl;

    return 0;
}