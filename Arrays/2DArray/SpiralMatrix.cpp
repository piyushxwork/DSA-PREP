#include<iostream>
#include<vector>
using namespace std;

vector<int> SpiralMatrix(int arr[4][4], int n, int m){
    vector<int> ans;

    int count = 0;
    int total = n * m;

    int startR = 0;
    int endR = n - 1;
    int startC = 0;
    int endC = m - 1;

    while(count < total){

        // Print Starting Row
        for(int i = startC; i <= endC && count < total; i++){
            ans.push_back(arr[startR][i]);
            count++;
        }
        startR++;

        // Print Ending Column
        for(int i = startR; i <= endR && count < total; i++){
            ans.push_back(arr[i][endC]);
            count++;
        }
        endC--;

        // Print Ending Row
        for(int i = endC; i >= startC && count < total; i--){
            ans.push_back(arr[endR][i]);
            count++;
        }
        endR--;

        // Print Starting Column
        for(int i = endR; i >= startR && count < total; i--){
            ans.push_back(arr[i][startC]);
            count++;
        }
        startC++;
    }

    return ans;
}

int main(){
    int n = 4;
    int m = 4;
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13,14,15,16}
    };

    vector<int> ans = SpiralMatrix(arr,n,m);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

