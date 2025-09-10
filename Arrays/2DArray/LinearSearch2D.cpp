#include<iostream>
using namespace std;

// bool LinearSearch(int arr[3][4], int n, int m, int key){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j] == key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }


// int main(){
    
//     int n = 3;
//     int m = 4;
//     int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

//     int key;
//     cout<<"Enter the key to search : ";
//     cin>>key;

//     bool ispresent = LinearSearch(arr,n,m,key);
//     if(ispresent){
//         cout<<"Key is present in the 2D array"<<endl;
//     }
//     else{
//         cout<<"Key is not present in the 2D array"<<endl;
//     }

//     return 0;


// }



#include<iostream>
using namespace std;

pair<int,int> LinearSearch(int arr[3][4], int n, int m, int key){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == key){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}


int main(){
    
    int n = 3;
    int m = 4;
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int key;
    cout<<"Enter the key to search : ";
    cin>>key;

    pair<int,int> index = LinearSearch(arr,n,m,key);
    if(index.first != -1 && index.second != -1){
        cout<<"Key is present in the 2D array at index "<< index.first << index.second << endl;
    }
    else{
        cout<<"Key is not present in the 2D array"<<endl;
    }

    return 0;


}