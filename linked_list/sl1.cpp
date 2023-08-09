#include<bits/stdc++.h>
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

void insertAtHead(Node* &head , int data){
    Node* newNode  = new Node(data);
    newNode->next = head;
    head = newNode;   
}

void insertAtLast(Node* &head ,int data){
   Node* newNode = new Node(data);
   if(head == NULL){
      head = newNode;
      return;
   }
   Node* temp = head;
   while(temp->next!= NULL){
       temp = temp -> next;
   }
   temp->next = newNode;
}


void insertAtMiddle(Node* &head ,int data , int position){
   Node* newNode = new Node(data);
   if(head == NULL && position == 1){
     head = newNode;
     return;
   }
   if(position == 1 ){
    insertAtHead(head , data);
    return;
   }
   int count = 1;
   Node* temp = head;

   while(count < position-1){
      temp = temp -> next;
      count++;
   }
   newNode -> next = temp -> next;
   temp -> next = newNode;
}


void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    } 
    cout<<endl;
}

void deleteNode(Node* &head , int position){

    int val,count = 1;
    Node* temp = head;
    Node* current = temp->next;

    if(head == NULL){
        cout<<"Can't Delete , List Empty !!"<<endl;
        return ;
    }
    if(position == 1){
       val = head->data;
       current = head;
       head = head -> next;
    //    free(current);
       delete current;
       cout<<"Node at position :"<<position<<" Deleted with value :"<<val<<endl;
       return ;
    }   
    
    while(count < position-1){
       temp = temp -> next;
       current = temp -> next;
       count++;
    }

    val = current->data;
    temp -> next = current->next;
    // free(current);
    cout<<current->data<<endl;
    delete current;
    cout<<current->data<<endl;
    cout<<"Node at position :"<<position<<" Deleted with value :"<<val<<endl;
}


int main(){
    Node* head = NULL;
    
    insertAtHead(head , 5);
    insertAtHead(head , 10);   
    printList(head);


    insertAtLast(head , 15);
    insertAtLast(head , 20);
    printList(head);


    insertAtMiddle(head , 12 , 1);
    insertAtMiddle(head ,22 , 5);
    printList(head);

    deleteNode(head , 6);
    printList(head);

    deleteNode(head , 1);
    printList(head);
    
    deleteNode(head , 3);
    printList(head);

    return 0;
}