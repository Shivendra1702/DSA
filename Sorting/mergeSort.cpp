#include<bits/stdc++.h>
using namespace std;

void merge(int arr[] , int start ,int mid , int end){
    vector<int> temp;
    int left = start , right = mid+1;

    while(left<=mid && right <= end){
       if(arr[left]<=arr[right]){
          temp.push_back(arr[left]);
          left++;
       }
       else{
          temp.push_back(arr[right]);
          right++;
       }
    }

    while(left<=mid){
     temp.push_back(arr[left]);
     left++;  
    }

    while(right<=end){
     temp.push_back(arr[right]);
     right++;
    }

    for(int i=start ; i<=end ; i++){
        arr[i]=temp[i-start];
    }
}


void mergeSort(int arr[] , int start , int end){
    if(start >= end){
        return ; 
    }

    int mid = start + (end - start) / 2;

    //left part
    mergeSort(arr,start,mid);

    //right part
    mergeSort(arr,mid+1,end);
    // cout<<"haa";

    merge(arr , start ,mid, end);
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