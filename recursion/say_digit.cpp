#include<iostream>
using namespace std;

void say_digit(int n,string arr[]){
     if(n==0){
        return;
     }
     int num = n%10;
     cout<<arr[num]<<" ";
     say_digit(n/10,arr);
}

int main(){
    int n;
    string nums[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Enter number :";
    cin>>n;
    say_digit(n,nums);
    return 0;
}