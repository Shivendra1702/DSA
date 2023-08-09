#include<iostream>
using namespace std;

bool isPalindome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    i++;
    j--;
    isPalindome(str,i,j);
}

int main(){
    string str;
    cout<<"Enter String :";
    cin>>str;
    bool ans = isPalindome(str,0,str.length()-1);
    if(ans){
        cout<<"String is palindrome";
    }else{
        cout<<"String is not palindrome";
    }
    return 0;
}