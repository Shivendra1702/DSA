#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    
    // d.pop_back();
    // cout<<endl;

    // for (int i = 0; i < d.size(); i++)
    // {
    //     cout<<d[i]<<" ";
    // }

    // d.pop_front();

    cout<<endl<<"Element at index 1 :"<<d.at(1)<<endl;

    cout<<"Element at front :"<<d.front()<<endl;
    cout<<"Element at back :"<<d.back()<<endl;

    cout<<"Empty or not :"<<d.empty()<<endl;

    d.erase(d.begin(),d.begin()+1);
    for (int i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<" ";
    }

    return 0;
}