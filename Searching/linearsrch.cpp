#include<iostream>
using namespace std ;

bool linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return true;
        }
    }
    return false;
}

int main(){
    int size,src;
    bool res;
    cout<<"Enter size of array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
       cout<<"Enter no "<<i+1<<" :";
       cin>>arr[i];
    }
    cout<<"Enter Element to Be searched :";
    cin>>src;
    res = linearsearch(arr,size,src);
    if(res==true)
     cout<<"Element Present !";
    else
     cout<<"Element not present !";
    return 0;
}