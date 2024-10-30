#include <bits/stdc++.h>
using namespace std;

const long long  N = 1e6+10;
int n;
long long m;
long long arr[N];

bool isS(long long h){
    long long wood=0;
    for(int i=0;i<n;++i) if(arr[i] >=h) wood+=arr[i]-h;

    return wood >=m;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i) cin>>arr[i];

    long long l=0,h=1e9,mid;
    while(h-l > 1){
        mid  = (h+l)/2;
        if(isS(mid)) l=mid;
        else h=mid-1;
    }
    if(isS(h)) cout<<h<<endl;
    else cout<<l<<endl;

}