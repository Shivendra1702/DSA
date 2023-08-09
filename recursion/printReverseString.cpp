#include<iostream>
using namespace std;

void printReverseString(char str[]){
    if(str[0]=='\0')
        return ;
    printReverseString(str+1);
    cout<<str[0];
}

int main(){
    char str[20];
    cout<<"Enter a String :";
    cin>>str;
    printReverseString(str);
    return 0;
}