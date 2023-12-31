// graph representation using adjacency List ....

#include<bits/stdc++.h>
using namespace std;

template <typename T>
class graph{

  public:
   map< T , list<T>> adj;

   void addNode(T u){
     adj[u];
     cout<<"Node with Data "<<u<<" Inserted !"<<endl;
   }

   void addEdge(T u , T v , bool direction){
      adj[u].push_back(v);

      if(direction == 0){
        adj[v].push_back(u);        
      }
   }
   
   void printAdjList(){
     for(auto it : adj){
       cout<<it.first<<" -> ";
       for(auto n : it.second){
         cout<<n<<" , ";
       }cout<<endl;
     }
   }

   
vector<int> bfsTraversal(int n){
    // Write your code here.
    int visited[n]={0};
    visited[0] = 1;

    queue<int> q;
    q.push(0);

    vector<int> bfs;;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto val : adj[node]){
            if(visited[val]==0){
                q.push(val);
                visited[val]=1;  
            }
        }
    }
    return bfs;    
}

};

int main(){
   graph<int> g;

   while(1){
     int choice;
     cout<<"Choose Operation :\n1.Add Node\n2.Add Edge\n3.Print Adj List\n4.Exit\n";
     cout<<"Enter Choice :";
     cin>>choice;
     switch(choice){
        case 1:{
          int data;
          cout<<"Enter Data :";
          cin>>data;
          g.addNode(data);
          break;
        }
        case 2:{
          int u,v;
          cout<<"Enter Edge :";
          cin>>u>>v;
          g.addEdge(u,v,0);
          break;
        }
        case 3:{
          g.printAdjList();
          break;
        }
        case 4:{
          exit(1);
          break;
        }
        default:{
          cout<<"Wrong Choice"<<endl;
          break;
        }
     }
   }
   return 0;
}

