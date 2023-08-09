#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    cout<<"Size of s :"<<s.size()<<endl;
    for(auto i :s){
        cout<<i<<" ";
    }

    // set<int>::iterator it=s.begin();
    s.erase(++s.begin());

    cout<<endl<<"Size of s :"<<s.size()<<endl;
    for(auto i :s){
        cout<<i<<" ";
    }

    cout<<endl<<"4 is present or not :"<<s.count(4)<<endl;

    // cout<<s.find(5);
    set<int>::iterator a=s.find(3);

    for(auto itr=a;itr!=s.end();itr++){
        cout<<*itr<<" ";
    }
    
    return 0;
}