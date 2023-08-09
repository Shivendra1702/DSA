//Write a recursive function that takes a list of numbers as an input and returns the sum of all the numbers in the list.

#include<iostream>
using namespace std;

int arr_sum(int arr[],int size){
    if(size==0)return 0;
    return arr[size-1]+arr_sum(arr,size-1);
}

int main(){
    int arr[]={10,20,30,40};
    int sum = arr_sum(arr,4);
    cout<<"Sum of all the numbers of array is :"<<sum;
    return 0;
}