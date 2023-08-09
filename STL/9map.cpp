#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    m[1]="shivendra";
    m[2]="pratap";
    m[3]="jadia";

    m.insert({4,"engineer"});

    for(auto i:m){
        cout<<i.first<<" ";
    }

    cout<<endl;

    for(auto i:m){
        cout<<i.second<<" ";
    }

    cout<<endl<<"Size of m is :"<<m.size()<<endl;  

    cout<<"is 4 present :"<<m.count(4);

    m.erase(4);
    cout<<"\nafter erase :";

    cout<<endl<<"Size of m is :"<<m.size()<<endl;  

    auto itr = m.find(2);

    for(auto i=itr;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    return 0;
}