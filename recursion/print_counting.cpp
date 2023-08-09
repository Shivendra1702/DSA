#include<iostream>
using namespace std;

void print_counting(int num){
   //base cond. if(n==0) stop
   if(num==0)return;
   cout<<num<<endl;
   print_counting(num-1);

}

int main(){
   int num;
   cout<<"Enter num :";
   cin>>num;
   print_counting(num);
}