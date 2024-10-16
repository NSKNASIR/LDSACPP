#include <bits/stdc++.h>
using namespace std;

//fact
// int fact(int n){
//     if(n==0)return 1;
//     return fact(n-1)*n;
// }
// int main(){
//     int n;cin>>n;
//     cout<<fact(n)<<endl;
// }


//sum of n number.
// int sum(int n){
//     if(n==1)return 1;
//     return sum(n-1)+n;
// }
// int main(){
//     int n;cin>>n;
//     cout<<sum(n);
// }

// int sum(int n,int arr[]){
//     if(n<0) return 0;
//     return sum(n-1,arr)+arr[n];
// }

// int main(){
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)cin>>arr[i];
//     cout<<sum(n-1,arr);
// }

//digit sum
int sum(int n){
    if(n==0) return 0;
    return sum(n/10)+n%10;
}
int main(){
    int n;cin>>n;
    cout<<sum(n);
}