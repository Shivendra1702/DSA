#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);

    for(auto x:v){
        cout<<x<<" ";
    }cout<<endl;
    cout<<"11 is present :"<<binary_search(v.begin(),v.end(),11)<<endl;  

    int a=10;
    int b=20;
    cout<<"Before swap a="<<a<<" and b="<<b<<endl;
    swap(a,b);
    cout<<"after swap a="<<a<<"  b="<<b<<endl;

    cout<<endl;

    string s ="abcd";
    cout<<"before reverse :"<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"after reverse :"<<s;


    return 0;
}