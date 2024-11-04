#include <bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;--i){
        if((num & (1<<i)) !=0) cout<<"1";
        else cout<<"0";
    }
}
int main(){
    // // int n;cin>>n;
    // //odd even operation
    // if(n&1) cout<<"odd"<<endl;
    // else cout<<"even"<<endl;
    // //2 multiplication or divition
    // cout<<(n<<1)<<endl;//mul
    // cout<<(n>>1)<<endl;//div

    //char upper to lower using bit 
    char c;cin>>c;
    cout<<char(c|1<<5)<<endl;//lower
    cout<<char(c & ~(1<<5))<<endl;//upper
    cout<<char(c | ' ')<<endl;//lower
    cout<<char(c & '_')<<endl;//upper
}