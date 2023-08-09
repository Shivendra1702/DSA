//longest arithmetic subarray
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int ans = 2 , curr = 2 , pd = arr[0]-arr[1];
    
    for(int i=1;i<n-1;i++){
      if(pd == arr[i]-arr[i+1])
        curr++;        
      else{
        pd = arr[i]-arr[i+1];
        curr = 2;
      }

      if(curr>ans)
        ans = curr;
    }
    cout<<ans<<endl;
    return 0;
}