#include<iostream>
using namespace std;

void selectionSort(int arr[] , int size){
   for( int i=0 ; i<size-1 ; i++){
     int minindex = i;
     for(int j = i+1 ; j<size ; j++){
        if(arr[j]<arr[minindex]){
            minindex = j;
        }
     }
        swap(arr[i],arr[minindex]);
   }

   
}

int main(){
    int size;
    cout<<"Enter size of Array :";
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter no "<<i+1<<" :";
        cin>>arr[i];
    }

    cout<<"Array before Selection Sort :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    selectionSort(arr,size);

    cout<<endl<<"Array after Selection Sort :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}