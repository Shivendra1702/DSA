#include<iostream>
#include<array>
using namespace std;

int main(){
    // this array is also static
    array<int,4> arr = {1,2,3,4}; 

    int size = arr.size();

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    cout<<"Element at index [2] :"<<arr.at(2)<<endl;

    cout<<"Empty or not :"<<arr.empty()<<endl;

    cout<<"1st Element is :"<<arr.front()<<endl;

    cout<<"2nd Element is :"<<arr.back();

    return 0;
} 