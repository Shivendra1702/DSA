#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q; //max-heap

    priority_queue<int,vector<int>,greater<int>> m; //min heap

    q.push(12);
    q.push(9);
    q.push(11);
    q.push(15);
    q.push(13);

    cout<<"Top :"<<q.top()<<endl;
    cout<<"Size :"<<q.size()<<endl;

    int size = q.size();
    for(int i=0;i<size;i++){
        cout<<q.top()<<" ";
        q.pop();
    }

    cout<<endl;

    m.push(12);
    m.push(9);
    m.push(11);
    m.push(15);
    m.push(13);

    cout<<endl<<"Top of m :"<<m.top()<<endl;
    
    int msize = m.size();
    for(int i=0;i<msize;i++){
        cout<<m.top()<<" ";
        m.pop();
    }

    return 0;

}