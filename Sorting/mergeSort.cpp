#include<iostream>
using namespace std;

void merge(int arr[] , int start , int end){
    int mid = start + (end-start)/2;

    
}


void mergeSort(int arr[] , int start , int end){
    if(start > end){
        return ; 
    }

    int mid = start + (end - start) / 2;

    //left part
    mergeSort(arr,start,mid);

    //right part
    mergeSort(arr,mid+1,end);

    merge(arr , start , end);
}

int main()           
{
    int size;
    cout<<"Enter size of Array :";
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter no "<<i+1<<" :";
        cin>>arr[i];
    }

    cout<<"Array before merge Sort :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    mergeSort(arr,0 , size-1);

    cout<<endl<<"Array after merge Sort :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}