#include<iostream>

int ReverseNumber(int n){
    int reversedNumber = 0;
    while(n != 0){
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n = n / 10;
    }

    return reversedNumber;
}

int main(){
    int n = 12345;

    std::cout<<"The reversed number is "<<ReverseNumber(n)<<std::endl;

    return 0;
}