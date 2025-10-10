#include<iostream>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n != 0){
        count ++;
        n = n/10;
    }
    return count;
}

int main(){
    int n = 12345;

    cout<<"The total number of digits present is "<<countDigits(n)<<endl;

    return 0;
}