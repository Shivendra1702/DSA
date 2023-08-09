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
    if(head == NULL)  {
        head = newNode;
        newNode->next = newNode;
        cout<<"NewNode with value "<<newNode->data<<" Inserted !!"<<endl;
        return ;
    }
    newNode -> next = head;
    Node* temp = head;
    while(temp->next != head){
        temp = temp -> next;
    }
    temp->next = newNode;
    head = newNode;
    cout<<"NewNode with value "<<newNode->data<<" Inserted !!"<<endl;
    return;
}

void insertAtLast(Node* &head ,int data){
   Node* newNode = new Node(data);
   if(head == NULL){
      insertAtHead(head , data);
      return;
   }
   Node* temp = head;
      while(temp->next != head){
        temp = temp ->next;
      }

    newNode->next = temp->next;
    temp->next = newNode;
    cout<<"NewNode with value "<<newNode->data<<" Inserted !!"<<endl;
    return;  
}


void insertAtMiddle(Node* &head ,int data , int position){
   Node* newNode = new Node(data);
   if(head == NULL && position == 1){
     head = newNode;
     newNode->next = newNode;
     cout<<"NewNode with value "<<newNode->data<<" Inserted !!"<<endl;
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
   cout<<"NewNode with value "<<newNode->data<<" Inserted !!"<<endl;
}


void printList(Node* head){
    Node* temp = head;
    cout<<"Head -> ";
    do{
        cout<<temp -> data<<" "<<temp->next<<endl;
        temp = temp -> next;
    }while(temp != head); 
    // cout<<temp->next<<" "<<temp->data<<endl;
 }

void deleteNode(Node* &head , int position){

    int val,count = 1;
    Node* temp = head;
    Node* nodeToDelete;

    if(head == NULL){
        cout<<"Can't Delete , List Empty !!"<<endl;
        return ;
    }

    if(position == 1){
       nodeToDelete = head;
       val = nodeToDelete ->  data;
       
       while(temp->next != head){
        temp = temp -> next;
       }
       temp -> next = head->next;
       head = head -> next;
       delete nodeToDelete;
       cout<<"Node at position :"<<position<<" Deleted with value :"<<val<<endl;
       return ;
    }   
    
    while(count < position-1){
       temp = temp -> next;
       nodeToDelete = temp -> next;
       count++;
    }

    val = nodeToDelete->data;
    temp -> next = nodeToDelete->next;
    // cout<<current->data<<endl;
    nodeToDelete->next=NULL;
    delete nodeToDelete;;
    // cout<<current->data<<endl;
    cout<<"Node at position :"<<position<<" Deleted with value :"<<val<<endl;
}


int main(){
    Node* head = NULL;
    
    insertAtHead(head , 5);
    insertAtHead(head , 10);   
    insertAtHead(head , 15);   
    insertAtHead(head , 20);   
    // printList(head);


    insertAtLast(head , 25);
    insertAtLast(head , 30);
    // printList(head);


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