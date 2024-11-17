#include<bits/stdc++.h>
using namespace std;

int pw(int n, int m){
    if(m == 0) return 1;
    int res = pw(n,m/2);
    if(m&1){
        return n * res * res;
    }else{
        return res * res;
    }
}

int main(){
    int n,m;cin>>n>>m;
    cout<<pw(n,m);
}