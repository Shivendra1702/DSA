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

void buildTree(Node* &root){
   int data;
   cout<<"Enter The Data :";
   cin>>data;   

   if(data == -1) return ;   

   root = new Node(data);
   
   cout<<"Enter Data for Inserting in left of "<<data<<endl;
   buildTree(root->left);
   
   cout<<"Enter Data for Inserting in Right of "<<data<<endl;
   buildTree(root->right);
}

// tree traversal techniques - 
  // 1.BFS
  // 2.DFS 


// BFS(Breadth First Search) also known as (Level Order Traversal)

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
    cout<<endl;

    vector<vector<int>> ans = levelOrderTraversal(root);

    for(auto vec : ans){
       for(auto val: vec){
         cout<<val<<" ";
       }cout<<endl;
    }

    return 0;
}