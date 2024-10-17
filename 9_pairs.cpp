#include <bits/stdc++.h>
using namespace std;
int main(){
    pair <int,string> p;
    // p=make_pair(2,"x");
    p = {2,"z"};
    p.first=6;
    pair <int ,string> &p1 = p;
    cout<<p1.first<<" "<<p1.second<<endl;
    
    pair <int,int> p_arr[3];
    p_arr[0]={1,2};
    p_arr[1]={2,3};
    p_arr[2]={3,4};

    for(int i=0;i<3;i++) cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
}