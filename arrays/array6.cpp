// program to find the sub array with given sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cout<<"ENter Size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum to be searched :";
    cin>>s;

    int currSum;

    for(int i=0;i<n;i++){
        currSum = 0;
        for(int j=i;j<n;j++){
            currSum += arr[j];
            if(currSum == s){
                cout<<"The sub array is :"<<i<<".."<<j<<endl;
                return 0;
            }
        }
    }
    cout<<"No sub array found with sum equal to "<<s<<endl;

    return 0;
}