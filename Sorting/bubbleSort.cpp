#include<iostream>
using namespace std;

// void bubbleSort(int arr[],int size)
// {
//    for (int i = 0; i < (size-1); i++)
//    {
//        for (int j = 0; j < (size-1-i); j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                swap(arr[j],arr[j+1]);
//            }
//        } 
//    }
// }

void bubbleSort(int arr[],int size)
{
   for(int i=0 ; i<size-1 ; i++){
      for(int j = 0 ; j<size-1-i ; j++){
         if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
         }
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

    cout<<"Array before Bubble Sort :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    bubbleSort(arr,size);

    cout<<endl<<"Array after Bubble Sort :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}







