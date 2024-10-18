#include <bits/stdc++.h>
using namespace std;
int main(){
    //map are stored sorted order.
    //duplicate key not use.
    map<int,string> m; //here, int is index  and string is data.
    m[1]="xyz"; //O(log(n))
    m[3]="ecf";
    m[2]="mno";
    m[6]; // stored empty string.
    // cout<<m[1];
    m.insert({5,"abc"});

    // map<int,string> ::iterator it = m.begin();

    // for(it; it != m.end();it++) cout<<it->first<<" "<<it->second<<endl;
    // for(auto & pr : m) cout<<pr.first<<" "<<pr.second<<endl;
    
    // cout<<m.size();

    auto it = m.find(2); // its return iterator. O(log(n)) 

    if(it == m.end()) cout<<"not found";
    else cout<<it->first<<" "<<it->second<<endl;

    m.erase(2);
    m.clear(); //delete all.

    map<string,string> mt;
    mt["ab"]="xy";//O(mt.size()*log(n))
}