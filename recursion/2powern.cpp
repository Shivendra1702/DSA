#include<iostream>
using namespace std;

int power(int n){
    // 2^n = 2 * 2^n-1;
    // base cond 
    if(n==0)return 1;

    return 2*power(n-1);
}


int main(){
    int num;
    cout<<"Enter num :";
    cin>>num;
    int ans = power(num);
    cout<<"2 raised to "<<num<<" is :"<<ans;
    return 0;
}