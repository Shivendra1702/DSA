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

class Queue{
   public:
    Node *front , *rear;

    Queue(){
        this->front = this->rear = NULL;
    }

    void enQueue(int data){
        Node* newNode = new Node(data);

        if(!newNode){
            cout<<"Queue OverFlow !!"<<endl;
            return ;
        }
        if(front == NULL && rear == NULL){
            front = rear = newNode;
            cout<<data<<" enQueued !"<<endl;
            return ;
        }
        rear->next = newNode;
        rear = newNode; 
        cout<<data<<" enQueued !"<<endl;
    }

    void deQueue(){
        int val;
        if(front == NULL && rear == NULL){
            cout<<"Queue UnderFlow !!"<<endl;
            return ;
        }
        if(front == rear){
            val = front->data;
            delete front;
            front = rear = NULL;
            cout<<val<<" deQueueed !!"<<endl;
            return;
        }
        Node* temp = front;
        val = temp->data;
        front = temp-> next;
        delete temp;
        cout<<val<<" deQueueed !!"<<endl;
    }

    void display(){
       if(front == NULL && rear == NULL) {
         cout<<"Queue Empty !!\n";
         return ; 
       }
       Node* temp = front; 
       while(temp != NULL){
         cout<<temp->data<<" "; 
         temp = temp -> next;
       }cout<<endl;
       cout<<"Front :"<<front->data<<" , Rear :"<<rear->data<<endl;
       return;
    }

};

int main(){
   Queue s;

   while(1){
     int choice;
     cout<<"Select Operation :\n"<<"1 . enQueue\n"<<"2 . display\n"<<"3 . deQueue\n"<<"4 . Exit"<<endl;
     cout<<"Enter Choice :";
     cin>>choice;

     switch(choice){
        case 1:{
            int val;
            cout<<"Enter Data :";
            cin>>val;
            s.enQueue(val);
            break;
        }

        case 2:{
            s.display();
            break;
        }

        case 3:{
            s.deQueue();
            break;
        }
        case 4:{
            exit(1);
            break;
        }

        default:{
            cout<<"Wrong Option !!";
        }
      }
     
    }  


   return 0;
}