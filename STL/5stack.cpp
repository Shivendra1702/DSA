#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("shivendra");
    s.push("pratap");
    s.push("jadia");

    cout<<"Top --> "<<s.top()<<endl;

    s.pop();
    cout<<"Top --> "<<s.top()<<endl;

    cout<<"Size of stack is :"<<s.size();
    
    
    return 0;
}