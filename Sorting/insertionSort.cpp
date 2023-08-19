#include<iostream>
using namespace std;

void insertionSort(int arr[],int size)
{   
   for(int i=0;i<size;i++){
      int j = i;
      while(j>0 && arr[j-1]>arr[j]){
         swap(arr[j-1],arr[j]);
         j--;
      }
   }
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

    cout<<"Array before Insertion Sort :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    insertionSort(arr,size);

    cout<<endl<<"Array after Insertion Sort :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
