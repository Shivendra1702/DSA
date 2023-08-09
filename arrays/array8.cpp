// program to print all sub arrays of an array
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cout<<"Enter size of array :" ;
   cin>>n;
   int arr[n];
   cout<<"Enter Elements of array :";
   for(int i=0;i<n;i++){
         cin>>arr[i];
   }
    for(int i=0; i<n ; i++){
        for(int j=i;j<n;j++){
           for(int k=i;k<=j;k++) {
                cout<<arr[k]<<" ";
           }
           cout<<endl;
        }
    }
   return 0;
}