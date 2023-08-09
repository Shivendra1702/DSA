#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("shivendra");
    q.push("pratap");
    q.push("jadia");

    cout<<"Front :"<<q.front()<<endl;
    cout<<"size :"<<q.size()<<endl;

    q.pop();

    cout<<"Front :"<<q.front()<<endl;
    cout<<"size :"<<q.size()<<endl;
    

    return 0;
}