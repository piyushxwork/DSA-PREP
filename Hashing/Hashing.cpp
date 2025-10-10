#include<iostream>
#include<map>
using namespace std;


int main(){
    int arr[5] = {1,2,2,4,1};
    int n = 5;

    map<int, int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    int query;
    cout<<"Enter the number of query you want to perform: ";
    cin>>query;

    while(query--){
        int number;
        cout<<"Enter the number to check its occurance : ";
        cin>>number;

        cout<<hash[number]<<endl;

    }

    return 0;
}




// int main(){
//     string s;
//     cout<<"Enter the string: ";
//     cin>>s;

//     int hash[26] = {0};
//     for(int i=0; i<s.length() - 1; i++){
//         hash[s[i]- 'a']++;
//     }

//     int query;
//     cout<<"Enter the number of query you want to perform: ";
//     cin>>query;

//     while(query--){
//         char ch;
//         cout<<"Enter the character to check its occurance : ";
//         cin>>ch;

//         cout<<hash[ch - 'a']<<endl;

//     }

//     return 0;
// }