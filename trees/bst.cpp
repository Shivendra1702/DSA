#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
   int data;
   Node* left;
   Node* right;

   Node(int data){
     this -> data = data ;
     this -> left = NULL;
     this -> right = NULL;
   }
};

void insertIntoBST(Node* &root , int data){
   if(root == NULL){
     root = new Node(data);
     return;
   }

   if(root->data > data) 
    insertIntoBST(root->left,data);   
   else 
    insertIntoBST(root->right,data); 
}

// void takeInput(Node* &root){
//     int data;
//     cout<<"Enter Data :";
//     cin>>data;

//     while(data != -1){
//         root = insertIntoBST(root , data);
//         cin>>data;
//     }
// }

vector<vector<int>> levelOrderTraversal(Node* root){
    vector<vector<int>> ans;
    if(root == NULL) return ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
       vector<int> level;
       int size = q.size();

       for(int i=0 ; i<size ; i++){
         Node* node = q.front();
         q.pop();
         
         if(node->left != NULL) q.push(node->left);
         if(node->right != NULL) q.push(node->right);

         level.push_back(node->data);
       }
       ans.push_back(level);
    }
    return ans;
}


int main(){
    Node* root = NULL;
    
    while(1){
        int choice;
        cout<<"Choose Operations :\n1 . Insertion\n2 . Display\n3 . Exit"<<endl;
        cout<<"Enter choice :";
        cin>>choice;
        switch(choice){
            case 1:{
                // takeInput(root);
                int data;
                cout<<"Enter Data :";
                cin>>data;
                insertIntoBST(root , data);
                break;
            }
            case 2:{
                vector<vector<int>> ans = levelOrderTraversal(root);
                for(auto vec : ans){
                    for(auto val: vec){
                     cout<<val<<" ";
                    }cout<<endl;
                }
                break;
            }
            case 3:{
                exit(1);
                break;
            }
            default:{
                cout<<"Wrong option !"<<endl;
            }
        }
    }
    return 0;
}