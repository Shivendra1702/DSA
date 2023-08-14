#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int,int> mp;
    unordered_map<int,int> ump;

    ump[1];
    ump[1]=2;
    cout<<ump.begin()->first<<" "<<ump.begin()->second;

    mp[1]=10;
    mp.insert({2,20});
    mp.insert({3,30});
    mp[4]=40;

    // cout<<mp[4];

    cout<<"Map Size :"<<mp.size()<<endl;
    cout<<"Map Empty or not :"<<mp.empty()<<endl;
    // cout<<mp.at(1)<<endl;
    // cout<<mp.end()->second<<endl;

    // ways to iterate over map in cpp    
   
    // for(auto it : mp){   
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    // for(auto it = mp.begin(); it!=mp.end(); it++){  // 2
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // mp.erase(5);

    for(auto it = mp.begin(); it!=mp.end(); it++){  // 2
        cout<<it->first<<" "<<it->second<<endl;
    };

    // cout<<mp.end()->first<<endl;
    
    // map <int,int> mp2;
    // mp2.swap(mp); //  
    // for(auto it = mp2.begin(); it!= mp2.end() ; it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // cout<<mp.end()->first;

    return 0;
}