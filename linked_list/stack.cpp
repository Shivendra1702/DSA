#include<iostream>
using namespace std;

class Node{
   public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
   public:
    Node* top;

    Stack(){
        this->top = NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);

        if(!newNode){
            cout<<"Stack OverFlow !!"<<endl;
            return ;
        }
        newNode->next = top;
        top = newNode;
        cout<<data<<" Pushed !"<<endl;
    }

    void pop(){
        if(top == NULL){
            cout<<"Stack UnderFlow !!"<<endl;
            return ;
        }
        Node* temp = top;
        int val = top->data;
        top = top -> next;
        delete temp;
        cout<<val<<" poped !!"<<endl;
    }

    void display(){
       if(top == NULL) {
         cout<<"Stack Empty !!";
         return ; 
       }
       Node* temp = top; 
       while(temp != NULL){
         cout<<temp->data<<" "; 
         temp = temp -> next;
       }cout<<endl;
       return;
    }

    int peek(){
        if(top == NULL){
            cout<<"Stack is Empty !!"<<endl;
            return -1;
        }
        return top->data;
    }

};

int main(){
   Stack s;

   s.push(10);
   s.push(20);
   s.push(30);
   
   s.push(40);
   s.push(50);
   s.push(60);
   s.display();

   s.pop();
   s.pop();
   s.pop();
   s.display();

   cout<<"Top Element is :"<<s.peek();
   return 0;
}