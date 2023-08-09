#include<iostream>
using namespace std;

int factorial(int n){
    // n! = n * (n-1)! ;
    // and base cond will be if n==0 return 1

    if(n==0)return 1;

    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int ans = factorial(n);

    cout<<"Factorial is :"<<ans;
    return 0;
}