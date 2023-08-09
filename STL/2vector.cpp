#include<iostream>
#include<vector>
using namespace std;

int main(){

    //1st way to initialize vector
    vector<int> v;

    //2nd way to initialize vector in which size and values can be initialized
    vector<int> x(5,1);
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }

    //3rd way , in which we can copy a vector to another
    vector<int> z(x);
    for(int i=0;i<x.size();i++){
        cout<<z[i]<<" ";
    }


    cout<<"Capacity -->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity -->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity -->"<<v.capacity()<<endl;
    //it doubles the size whenever extra space is needed

    cout<<"Size -->"<<v.size()<<endl;

    cout<<"Element at index 2 is :"<<v.at(2)<<endl;

    cout<<"First Element is -->"<<v.front()<<endl;
    cout<<"Last Element is --> "<<v.back()<<endl;

    cout<<"Before POP :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    v.pop_back();

    cout<<endl<<"After POP :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<"Size before clear :"<<v.size()<<endl;
    cout<<"capacity before clear :"<<v.capacity()<<endl;


    v.clear();

    cout<<"Size after clear :"<<v.size()<<endl;
    cout<<"capacity after clear :"<<v.capacity()<<endl;
  
    
    return 0;
}
