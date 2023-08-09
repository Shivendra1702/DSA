//Write a recursive function that takes a number and returns the sum of all the numbers from zero to that number.
#include<iostream>
using namespace std;

int rec_sum(int n){
    if(n==0){
        return 0;
    }
    return n+rec_sum(n-1);
}

int main(){
    int num;
    cout<<"Enter number :";
    cin>>num;
    int sum = rec_sum(num);
    cout<<"SUM is :"<<sum;
    return 0;
}