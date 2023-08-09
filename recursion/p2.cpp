//Write a recursive function that takes a number ‘n’ and returns the nth number of the Fibonacci number.

#include<iostream>
using namespace std;

int fibonnaci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonnaci(n-1)+fibonnaci(n-2);
}

int main(){
    int num;
    cout<<"Enter number :";
    cin>>num;
    int n = fibonnaci(num);
    cout<<"The fibonnaci number is :"<<n;
    return 0;
}