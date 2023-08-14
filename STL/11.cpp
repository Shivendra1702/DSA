// Algorithms
// Containers
// Iterators
// Functions

#include<bits/stdc++.h>
using namespace std;

int main(){
    //pairs
    // pair<int,int> p;
    // p.first = 1;
    // p.second = 10; 
    // cout<<p.first<<" "<<p.second<<endl;



    //vectors
    //  vector<int> v;  
    //  v.push_back(1);
        //  v.emplace_back(2); 
    //  for(auto val : v){
    //     cout<<val<<" ";
    //  }

    // vector<int> v(5 , INT_MAX);
    // for(auto val : v){
    //     cout<<val<<" ";
    // }
    // cout<<v.size()<<endl;

    // vector<int> v1(v);
    // for(auto val : v1){
    //     cout<<val<<" ";
    // }

    // vector<int> v = {23,34,12,56,29}; 
    
    // cout<<*(v.begin());
    // vector<int>::iterator it = v.begin();
    // cout<<*(it)<<endl; 

    // cout<<v.back()<<endl;
    // sort(v.begin(),v.end());
    // cout<<v.back()<<endl;
 
    // for(vector<int>::iterator it = v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    // }
    // v.erase(v.begin(),v.begin()+3 );
    // cout<<endl;
    // for(auto val : v){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // v.insert(v.begin(),1);
    // for(auto val : v){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // v.insert(v.begin()+2,2,10);
    // for(auto val : v){
    //     cout<<val<<" ";
    // }


    
    //list
    // list<int> ml;
    // ml[0]=10; //error
    // ml.push_back(10);
    // ml.emplace_back(20);
    // ml.push_front(5);

    // cout<<*ml.begin()<<endl;

    // for(auto val : ml){
    //     cout<<val<<" ";
    // }cout<<endl;

    
    // ml.insert(ml.begin(),15);
    // for(auto val : ml){
    //     cout<<val<<" ";
    // }cout<<endl;
    // ml.remove_if([](int x){return x%2==0;});
    // for(auto val : ml){
    //     cout<<val<<" ";
    // }




    
    //deque
    // deque<int> dq;
    // dq.push_back(10);
    // dq.push_front(20);

    // dq.insert(dq.begin()+1,15);
    // dq.push_back(5);

    // dq.erase(dq.begin()+1);

    // for(auto val : dq){
    //     cout<<val<<" ";
    // }cout<<endl;

    

    //stack
    // stack<char> s;
    // string name;
    // cin>>name;

    // for(auto ch : name) s.push(ch);
    
    // while(!s.empty()){
    //     cout<<s.top();
    //     s.pop();
    // }




    //queue
    // queue<int> mq;
    // mq.push(10);
    // mq.push(20);
    // mq.push(30);
    // mq.push(40);

     // cout<<mq.front()<<endl;
    // cout<<mq.back()<<endl;
    
    // while(!mq.empty()){
    //     cout<<mq.front()<<" ";
    //     mq.pop();
    // }
    
   
    

    //priority queue  , it keeps elements in descending order
    // also called as max-heap
    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    
    // cout<<pq.top()<<endl;

    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    //minimum priority queue or min-heap
    // priority_queue<int , vector<int> , greater<int>> p;
    // p.push(10);
    // p.push(20);
    // p.push(30);
    // p.push(40);
    // cout<<p.top()<<endl;



    //set stores unique elements in sorted order
    set<int> ms;
    ms.insert(10);
    ms.insert(2);
    ms.insert(3);   
    ms.insert(5);
    ms.insert(1);

//     for(auto it = ms.begin() ; it!=ms.end() ; it++){
//         cout<<*it<<" ";
//     }

    // for(auto val : ms){
    //     cout<<val<<" ";
    // }
//     cout<<endl<<*ms.find(10)<<endl;
//     cout<<ms.count(50)<<endl;

 
//     ms.erase(ms.find(3),ms.find(10));
//     for(auto val : ms){
//         cout<<val<<" ";
//     }

//    cout<<endl<<*ms.lower_bound(5)<<endl;



 // unordered set stores unique elements in unsorted order
    // unordered_set<char> us;
    // for(int i=0;i<10;i++){
    //     char ch;
    //     cin>>ch;
    //     us.insert(ch);
    // }
    // for(auto val : us){
    //    cout<<val<<" ";
    // }



    //multiset  stores duplicate elements in sorted order

    // multiset<int> ms ; 
    // ms.insert(40);
    // ms.insert(10);
    // ms.insert(10);
    // ms.insert(50);
    // ms.insert(20);
    // ms.insert(20);
    // ms.insert(30);
    // ms.insert(30);

    // for(auto val : ms){
    //     cout<<val<<" ";
    // }
    // cout<<endl<<ms.count(10)<<endl;
    // cout<<*ms.find(100);




   //algorithms

//    sort  ~ by default it sorts in ascending order
    // int arr[]={34,2,65,67,56,29,51};
    // sort(arr , arr+6);
    // for(auto val : arr){
    //     cout<<val<<" ";
    // }

    // vector <char> mv = {'b','g','c','a','d','f','e'};
    // sort(mv.begin(),mv.end());
    // for(auto val : mv){
    //     cout<<val<<" ";
    // }

   // to sort in descending order use greater<int/char...>
    // vector <int> mv = {34,2,65,67,56,29,51};
    // sort(mv.begin(),mv.end(), greater<int>());
    // for(auto val : mv){
    //     cout<<val<<" ";
    // }




    // __builtin_popcount()  and __builtin_popcountll()  ~ to count number of set bits in a number

    // int x = 2;
    // cout<<__builtin_popcount(x)<<endl;

    // long long  y = 232312974386;
    // cout<<__builtin_popcountll(y)<<endl;

    return 0; 
}






