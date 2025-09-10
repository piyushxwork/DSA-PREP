#include<iostream>
using namespace std;


int main(){
    int n = 3;
    int m = 4;

    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
        cout<<"Sum of row "<<i<<" is "<<sum<<endl;
    }

    return 0;
}