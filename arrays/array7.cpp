//In an given array arr[] of N integers including 0 , the task is to find the smallest positive number missing from the array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int N = 1e6+2;
    bool check[N];

    for(int i=0;i<N;i++){
        check[i]=false;
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]=true;
        }
    }

    for(int i=0;i<N;i++){
        if(check[i]==false){
            cout<<i<<endl;
            break;
        }
    }
    // cout<<"-1";

    return 0;
}