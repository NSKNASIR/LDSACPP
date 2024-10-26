#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={1,2,3,4,5};
    vector<int> :: iterator it;
    for(it=v.begin();it<v.end();it++) cout<<*it<<" ";

    vector<pair<int,int>> v1={{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it1 =v1.begin();
    for(it1=v1.begin(); it1<v1.end();it1++) cout<<it1->first<<" "<<it1->second<<endl;


    //use sorted For loop
    for(int value : v) cout<<value<<" "; 
    for(pair<int,int> value:v1) cout<<value.first<<" "<<value.second<<endl;
    for(auto & value : v1) cout<<value.first<<" "<<value.second<<endl;

}