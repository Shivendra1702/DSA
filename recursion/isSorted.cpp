#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){    
   if(size==0||size==1)
    return true;

   if(arr[0]>arr[1])
    return false;
   else 
    return isSorted(arr+1,size-1); 
}

int main(){  
    int arr[] = {10,20,30,40,50};
    int size = 5;

    if(isSorted(arr,size))
        cout<<"Array is Sorted !!";
    else
        cout<<"Array not sorted !!";

    return 0;
}