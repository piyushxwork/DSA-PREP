#include<iostream>
using namespace std;


void setRowAsMinusOne(int arr[4][4], int n, int m, int i){
    for(int j=0; j<m; j++){
        if(arr[i][j] != 0 && arr[i][j] != -1){
            arr[i][j] = -1;
        }
    }
}

void setColAsMinusOne(int arr[4][4], int n, int m, int j){
    for(int i=0; i<n; i++){
        if(arr[i][j] != 0 && arr[i][j] != -1){
            arr[i][j] = -1;
        }
    }
}

void SetMatrix(int arr[4][4], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                setRowAsMinusOne(arr,n,m,i);
                setColAsMinusOne(arr,n,m,j);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }
}
int main(){
    int n = 4, m = 4;
    int arr[4][4] = { {1,1,1,1},
                      {1,0,0,1},
                      {1,1,0,1},
                      {1,1,1,1} };

    SetMatrix(arr, n, m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}