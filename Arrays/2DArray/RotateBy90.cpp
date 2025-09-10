#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// vector<vector<int>> RotateMatrix(int arr[4][4], int n){
//     vector<vector<int>> matrix(n, vector<int>(n));

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             matrix[j][n - 1 - i] = arr[i][j]; 
//         }
//     }
//     return matrix;
// }


void rotate(vector<vector<int>>& matrix, int n){

    for(int i=0; i<n-1; i++){
        for(int j = i+ 1; j<n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}


int main(){
    int n = 4;
    int arr[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };

    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = arr[i][j];
        }
    }

    rotate(matrix, n);

    cout << "Rotated Matrix:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}