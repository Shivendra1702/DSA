//Record breaking days
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,ans=0,mx=-1;
    cin>>n;
    int arr[n+1];
    arr[n]=-1;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==1){
        cout<<1;
        return 0;
    }

    for(int i=0;i<n;i++){
      if(arr[i]>mx && arr[i]>arr[i+1]){
        ans++;
      }
      mx = max(mx,arr[i]);
    }

    cout<<ans<<endl;
}