#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n,cows;
int arr[N];

bool canPlaceCow(int midDis){
    int cows_count = cows;
    int lastEle=-1;
    for(int i=0;i<n;++i){
        if(arr[i]-lastEle >= midDis || lastEle == -1 ){
            cows_count--;
            lastEle  = arr[i];
        }
        if(cows_count==0) break;
    }
    return cows_count==0;
}

int main(){
    int t;cin>>t;

    while(t--){
        cin>>n>>cows;
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int l=0,h=1e9,mid;
        while(h-l >1){
            mid=(h+l)/2;
            if(canPlaceCow(mid)) l=mid;
            else h=mid-1;
        }
        if(canPlaceCow(h)) cout<<"h "<<h<<endl;
        else cout<<"l "<<l<<endl;
    }
}