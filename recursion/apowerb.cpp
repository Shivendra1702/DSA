#include<iostream>
using namespace std;

int aPowerb(int a,int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    return a*aPowerb(a,b-1);
}

int main(){
    int a,b;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    
    int ans = aPowerb(a,b);

    cout<<"answer is :"<<ans;

    return 0;
}