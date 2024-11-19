#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    bool check = true;
    for(int i=2;i<=sqrt(n);++i){
        if(n % i ==0){
            check = false;
            break;
        }
    }
    cout<<check<<endl;
}