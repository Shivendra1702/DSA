#include<iostream>
using namespace std;

void insertionSort(int arr[],int size)
{   
   for(int i=1 ; i<=size ;i++){
      int temp = arr[i];
      int j ;

      for(j = i-1; j >= 0 ; j--){
         if(arr[j]>temp){
            arr[j+1] = arr[j];
         }
         else{
            break;
         }
      }
      arr[j+1] = temp;
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