#include<iostream>
using namespace std;

bool linearSearch(int arr[],int ele,int size){
   if(size==0){
     return false;
   }
   
   if(arr[0]==ele)
    return true;
   else 
    return linearSearch(arr+1,ele,size-1);
}

int main(){
    int arr[] = {22,43,52,23,19,34,27,56,65,12};
    int size = 10,ele;

    cout<<"Enter element to be searched :";
    cin>>ele;

    bool index = linearSearch(arr,ele,size);

    if(index)
      cout<<"Element present !!";
    else
      cout<<"Element not present";

    return 0;
}