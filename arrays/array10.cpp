//kadanes algorithm
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
    int sum =0;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi = max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    cout<<"Maximum sum of subarray is :"<<maxi;
    return 0;
}