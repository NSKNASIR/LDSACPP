#include<bits/stdc++.h>
using namespace std;

//Recursive Method
int pwRec(int n, int m){
    if(m == 0) return 1;
    int res = pwRec(n,m/2);
    if(m&1){
        return n * res * res;
    }else{
        return res * res;
    }
}

//Iterative Method
int pwIt(int n,int m){
    int ans = 1;
    while(m){
        if(m&1) ans *= n;
        n *=n;
        m >>=1;
    }
    return ans;
}

int main(){
    int n,m;cin>>n>>m;
    cout<<pwIt(n,m);
}