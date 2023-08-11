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

   if(root->data > data) insertIntoBST(root->left,data);   

   else insertIntoBST(root->right,data); 

  return;
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

int maxValue(Node* root){
   Node* temp = root; 
   if(root == NULL) return -1;   

   while(temp->right != NULL)
     temp = temp -> right;
   
   return temp->data;
}


int minValue(Node* root){  
   Node* temp = root; 
   if(root == NULL) return -1;

   while(temp->left != NULL)
     temp = temp -> left;
   
   return temp->data;
}

void deleteNode(Node* &root , int data){
   if(root == NULL){
     cout<<"Tree Empty !!"<<endl;
     return ; 
   }

   if(root->data == data){
      // 0 child
      if(root->left == NULL && root->right == NULL){
         delete root;
         root = NULL;
         return;
      }

      // 1 child
        // left child
        if(root->left != NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            root = temp;
            return;
        }
        // right child
        if(root->right != NULL && root->left==NULL){
            Node* temp = root->right;
            delete root;
            root = temp;
            return;
        }

      // 2 child
      if(root->left != NULL && root->right != NULL){
         int mini = minValue(root->right);
         root->data = mini;
         deleteNode(root->right , mini);
         return;
      }

   }
   else if(root->data > data){
     deleteNode(root->left , data);
   }
   else{
     deleteNode(root->right , data);
   }
}

//inorder predecessor
//inorder successor
// void inorderSuccessor(Node* root , int data){
//     int successor = NULL;

//     while(root != NULL){
//        if(root->data <= data){
//          root = root->right;
//        }
//        else{
//          successor = root->data;
//          root = root->left;
//        }
//     }

//     cout<<"Inorder Successor of "<<data<<" is "<<successor<<endl;
// }                


int main(){
    Node* root = NULL;
    
    while(1){
        int choice;
        cout<<"Choose Operations :\n1 . Insertion\n2 . Display\n3 . Max value\n4 . Min Value\n5 . Delete Node\n6 . Exit"<<endl;
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
                int ans = maxValue(root);
                if(ans == -1)
                 cout<<"Tree Empty !!"<<endl;
                else
                 cout<<"Max value is "<<ans<<endl;
                break;
            }
            case 4:{
                int ans = minValue(root);
                if(ans == -1)
                 cout<<"Tree Empty !!"<<endl;
                else
                 cout<<"Min value is "<<ans<<endl;
                break;
            }
            case 5:{
                int data;
                cout<<"Enter Data for Node to be Deleted :";
                cin>>data;
                deleteNode(root , data);
                break;
            }
            case 6:{
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