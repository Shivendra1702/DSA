#include<bits/stdc++.h>
using namespace std;

class maxHeap{
   int arr[100];
   int size;
   public:

    maxHeap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index / 2;
            if(arr[parent] < arr[index]){
               swap(arr[parent],arr[index]);
               index = parent;
            }
            else return;
        }
    }

    void deleteFromMaxHeap(){
       if(size == 0){
         return;
       }
       arr[1]=arr[size];
       size--;

       int i=1;
       while(i<=size){
          int largest = i;
          int left = 2*i , right = 2*i+1;

          if(left<=size && arr[largest]<arr[left]){
           largest = left;
          }
          if(right<=size && arr[largest]<arr[right]){
           largest = right;
           }

          if(largest != i){
           swap(arr[i],arr[largest]);
           i = largest;
          }else{
            return;
          }
       }

    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

void heapify(int arr[] , int n  , int i){
    int largest = i;
    int left = 2*i , right = 2*i+1;

    if(left<=n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[] , int n){
    int size = n;
    while(size>1){
        swap(arr[1],arr[size]);
        size--;
        heapify(arr,size,1);
    }
}

int main(){
    maxHeap mh;
    mh.insert(5);
    mh.insert(20);
    mh.insert(15);
    mh.insert(30);
    mh.insert(10);
    mh.insert(35);
    mh.insert(25);

    mh.print();

    mh.deleteFromMaxHeap();
    mh.print();

    mh.deleteFromMaxHeap();
    mh.print();

    mh.deleteFromMaxHeap();
    mh.print();

    mh.deleteFromMaxHeap();
    mh.print();


    cout<<endl<<"heapify"<<endl;
    int arr[8]={-1,5,20,15,30,10,35,25};
    int n=7;
    for(int i=n/2 ; i>0 ; i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
       cout<<arr[i]<<" ";
    }cout<<endl;



    cout<<endl<<"heapify"<<endl;
    heapSort(arr,n);
    for(int i=1;i<=n;i++){
       cout<<arr[i]<<" ";
    }    

    return 0;
}