#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto & ele:v) cin>>ele;

    int fast,last,mid,key;
    cin>>key;
    fast = 0;last = n-1;
    bool ans = false;
    while(fast<=last){
        mid = (fast+last)/2;
        if(v[mid] == key){
            ans = true;
            break;
        }else if(v[mid] < key) fast = mid+1;
        else last = mid -1;
    }
    if(ans) cout<<"value is found at index: "<<mid;
    else cout<<"value is not found";
}