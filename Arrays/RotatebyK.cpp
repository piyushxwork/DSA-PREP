#include<iostream>
#include<algorithm>
using namespace std;


void rotate(int arr[], int n, int k){

    if(n == 0) return;


    k = k % n;
    if(k == 0) return;


    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}

int main(){
    int n = 5; int k = 3;

    int arr[5] = {1, 2, 3, 4, 5};
    rotate(arr, n, k);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}