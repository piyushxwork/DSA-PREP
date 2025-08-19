#include<iostream>
#include<vector>
using namespace std;

void mS(vector<int> &arr, int start, int end , int mid){
    int left = start;
    int right = mid + 1;

    vector<int> temp;

    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= end){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = start; i <= end; i++){
        arr[i] = temp[i - start];
    }
}

void MergeSort(vector<int> &arr, int start, int end){
    if(start >= end) return;

    int mid = start + (end - start) / 2;

    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    mS(arr, start, end, mid);
}

int main(){
    vector<int> arr = {5,2,3,1,2};
    int n = arr.size();

    MergeSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}