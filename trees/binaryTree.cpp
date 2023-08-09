#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left =NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* &root){
   int data;
   cout<<"Enter The Data :";
   cin>>data;   

   if(data == -1) return NULL;   

   root = new Node(data);
   
   cout<<"Enter Data for Inserting in left of "<<data<<endl;
   root->left = buildTree(root->left);
   
   cout<<"Enter Data for Inserting in Right of "<<data<<endl;
   root->right = buildTree(root->right);

   return root;     
}

// tree traversal techniques - 
  // 1.BFS
  // 2.DFS 


// BFS(Breadth First Search) also known as (Level Order Traversal)

void levelOrderTraversal(Node* root){

}



// DFS(Depth First Search) types --> PREORDER , INORDER , POSTORDER 

void preorder(Node* root){
   if(root == NULL){
      return ;
   }
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL){
      return ;
   }   
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
      return ;
    }
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
}

int main(){
    Node* root = NULL;
    buildTree(root);

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);

    return 0;
}