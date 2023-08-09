#include<iostream>
using namespace std;

int leftMost(int arr[],int size,int ele){
   int start=0;
   int end=size-1;
   int mid;
   int ans;

   while(start<=end){
      mid = start + ((end-start)/2);

      if(arr[mid]==ele){ 
         ans=mid;
         end=mid-1;
      }
      else if(ele>arr[mid]){
         start=mid+1;
      }
      else if(ele<arr[mid]){
         end=mid-1;
      }
   }
   return ans;
}

int rightMost(int arr[],int size,int ele){
   int start=0;
   int end=size-1;
   int mid;
   int ans;

   while(start<=end){
   
      mid = start + ((end-start)/2);

      if(arr[mid]==ele){ 
        ans=mid;
        start=mid+1;
      }
      else if(ele>arr[mid]){
         start=mid+1;
      }
      else if(ele<arr[mid]){
         end=mid-1;
      }
   }
   return ans;
}

int main(){
    int arr[]={1,2,2,2,3,3,4,5,5,6};
    int size=10;
    int ele;
    int l,r;

    cout<<"Enter Element :";
    cin>>ele;

    l=leftMost(arr,size,ele);
    r=rightMost(arr,size,ele);

    cout<<"The left-most index for "<<ele<<" is :"<<l<<endl;
    cout<<"The right-most index for "<<ele<<" is :"<<r;

    return 0;
}