#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    set<int> v;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        v.insert(x);
    }
    // auto it = lower_bound(v.begin(),v.end(),5); For vector or array
    auto it = v.upper_bound(5);
    if(it==v.end()) cout<<"Not found";
    else cout<<(*it)<<endl;
}