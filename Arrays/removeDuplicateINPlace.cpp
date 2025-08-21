#include<iostream>
#include<set>
using namespace std;


// int Duplicate(int arr[], int n){
//     set<int> st;
//     int index = 0;

//     for(int i=0; i<n; i++){
//         st.insert(arr[i]);
//     }

//     for(auto it : st){
//         arr[index] = it;
//         index++;
//     }
//     return index;
// }


// int main(){
//     int n = 7;
//     int arr[7] = {1,2,2,4,4,4,7};

//     Duplicate(arr, n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



// int main(){
//     int n = 7;
//     int arr[7] = {1,2,2,4,4,4,7};


//     set<int> st;
//     for(int i=0; i<n; i++){
//         st.insert(arr[i]);
//     }


//     cout<<"The total Unique element present in array are : "<<st.size()<<endl;
//     return 0;
// }


int duplicate(int arr[], int n){
    int i=0;
    for(int j = 1; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}



int main(){
    int n = 7;
    int arr[7] = {1,2,2,4,4,4,7};

    cout<<"The total Unique element present in array are : "<<duplicate(arr, n)<<endl;
}

