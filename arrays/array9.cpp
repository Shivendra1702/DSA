//max sub array sum 
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

   int maxSum = INT_MIN;
   int currSum = 0;

    for(int i=0; i<n ; i++){
        for(int j=i;j<n;j++){
           for(int k=i;k<=j;k++) {
                currSum+=arr[k];
           }
              maxSum = max(maxSum,currSum);
                currSum = 0;
        }
    }
    cout<<maxSum;
   return 0;
}