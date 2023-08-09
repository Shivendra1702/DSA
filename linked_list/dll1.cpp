#include<iostream>
using namespace std;

class Node{
    public:      
     int data;
     Node* prev;
     Node* next;

     Node(int data){
       this->data = data;
       this->prev = NULL;
       this->next = NULL;
     }
};

void insertAtHead(Node* & head , int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return ;
    }
    head->prev = newNode;
    newNode->next=head;    
    head = newNode;
}

void insertAtLast(Node* &head , int data){
   Node* newNode = new Node(data); 
   if(head == NULL) {
     head = newNode;
     return;
   }
   Node* temp = head;
   while(temp->next != NULL){
     temp = temp -> next;
   }
   temp->next = newNode;
   newNode->prev = temp;
}


void insertAtRandom(Node* &head , int position , int data){
    Node* newNode = new Node(data);
    int count = 1;
    if(head == NULL && position == 1){
        insertAtHead(head , data);
        return;
    }
    if(position == 1){
        insertAtHead(head , data);
        return;
    }
    Node* temp = head;
    while(count < position-1){
       temp = temp ->next;
       count++;
    }
    newNode->next=temp->next;
    newNode->prev = temp;
    if(temp->next != NULL){
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}



void printList(Node* head){
   if(head == NULL){
     cout<<"List is Empty !!";
     return ;
   }
   Node* temp = head;
   while(temp != NULL){
     cout<<temp->prev<<" "<<temp->data<<" "<<temp->next<<endl;
     temp = temp -> next;
     cout<<endl;
   }
}


void deleteNode(Node* & head , int position){
    if(head == NULL){
        cout<<"Can't Delete , List Empty !!"<<endl;
        return ; 
    }
    Node* temp = head;
    int val , count = 1;
    if(position == 1){
       temp->next->prev=NULL;
       head = temp -> next;
       temp->next=NULL;
       val = temp->data;
       delete temp;

       cout<<"Node on position "<<position<<" Deleted with Value "<<val<<endl;
       return ; 
    }

    Node* nodeToDelete;

    while(count < position - 1){
        temp = temp -> next;
        count ++;
    }nodeToDelete = temp -> next;

    if(nodeToDelete->next != NULL){
        nodeToDelete->next->prev = temp;
    }

    
    temp->next = nodeToDelete->next;
    val = nodeToDelete->data;
    nodeToDelete->next = nodeToDelete->prev = NULL;
    delete nodeToDelete;

    cout<<"Node on position "<<position<<" Deleted with Value "<<val<<endl;
}


int main(){
    Node* head = NULL;

    insertAtHead(head , 10);
    insertAtHead(head , 15);
    insertAtHead(head , 20);
    // printList(head);

    
    insertAtLast(head ,25);
    insertAtLast(head ,30);
    insertAtLast(head ,35);
    // printList(head);


    insertAtRandom(head ,1 , 2);
    insertAtRandom(head , 5,4);
    insertAtRandom(head , 9, 6);
    printList(head);

    deleteNode(head , 1);
    printList(head);

    deleteNode(head , 8);
    printList(head);

    deleteNode(head , 4);
    printList(head);


    return 0;
}