#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a=5,b=8;
    // a=a ^ b;
    // b=b^a;
    // a=b^a;
    // cout<<a<<" "<<b<<endl;
    int n;cin>>n;
    int arr[n];
    int ct =0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        ct ^= arr[i];
    }
    
    cout<<ct<<endl;
}