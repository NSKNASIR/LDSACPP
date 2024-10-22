#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void subset(vector<int> & sub,int i,vector<int> & num){
    if(i==num.size()){
        result.push_back(sub);
        return;
    }
    subset(sub,i+1,num);
    sub.push_back(num[i]);
    subset(sub,i+1,num);
    sub.pop_back();
}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto & ele: v) cin>>ele;

    vector<int> temp;
    subset(temp,0,v);
    for(auto & subset:result){
        for(auto & element: subset) cout<<element<<" ";
    cout<<endl;
    }
}