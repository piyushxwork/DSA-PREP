#include <iostream>
#include <map>
using namespace std;

pair<int, int> twoSum(int arr[], int n, int target) {

    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int number = arr[i];
        int moreNeeded = target - number;

        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }

        mpp[number] = i; 
    }
    return {-1, -1};
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    pair<int, int> ans = twoSum(arr, n, target);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}