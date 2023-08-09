#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int size , int ele){
    int start=0 , end = size -1 , mid;

    while (start <= end){        
        mid = start + (end - start)/2;

        if(arr[mid] == ele)
           return mid;
        
        else if(arr[mid] < ele)
            start = mid + 1;
        
        else if(arr[mid] > ele)
            end = mid - 1;        
    }
    return -1;
}

int main(){
    int arr[6] = {2,4,8,10,12,16};
    int brr[5] = {1,3,5,7,9};

    int arr_ans = BinarySearch(arr,6,2);
    cout<<"2 is present at index :"<<arr_ans<<endl;

    int brr_ans = BinarySearch(brr,5,9);
    cout<<"9 is present at index :"<<brr_ans<<endl;

    return 0;
}