#include<iostream>
using namespace std;

int binarySearch(int arr[],int ele,int start,int end){
    int mid = start + (end-start)/2; 
    
    if(start>end)
        return -1;

    if(arr[mid]==ele)
        return mid;
    else if(arr[mid]<ele)
        return binarySearch(arr,ele,mid+1,end);
    else if(arr[mid]>ele)
        return binarySearch(arr,ele,start,mid-1);    
}


int main(){

    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int start = 0, end = 9,ele;

    cout<<"Enter element to be searched :";
    cin>>ele;


    int index = binarySearch(arr,ele,start,end);

    if(index==-1) 
      cout<<"Element not present !!";
    else
      cout<<"Element present at index :"<<index;

    return 0;
}