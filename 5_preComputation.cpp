#include <bits/stdc++.h>
using namespace std;

//Fact.
// const int M = 1e9 +7;
// const int N = 1e5+10;
// long long Fact[N];
// int main(){
//     Fact[0]=Fact[1]=1;
//     for(int i=2;i<=N;i++)Fact[i]=Fact[i-1]*i;

//     int t;cin>>t;
//     while(t--){
//         int x;cin>>x;
//         cout<<Fact[x]<<endl;
//     }
// }


//
// const int N = 1e7+10;
// int hsh[N];
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//         hsh[arr[i]]++;
//     }

//     int q; cin>>q;
//     while(q--){
//         int x;cin>>x;
//         cout<<hsh[x];
//     }


// }


//Prefix sum
// const int N=1e5+10;
// int arr[N];
// long long sum[N];


//  int main(){
//     int n;cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>arr[i];
//         sum[i]=sum[i-1]+arr[i];
//     }

//     int q;cin>>q;
//     while(q--){
//         int r,l;cin>>r>>l;
//         cout<<sum[l]-sum[r-1]<<endl;
//     }
//  }



//Prefix sum 2d array

// const int N = 1e3+10;
// int arr[N][N];
// long long sum[N][N];
// int main(){
//     int n;cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cin>>arr[i][j];
//             sum[i][j]= sum[i-1][j]+sum[i][j-1]+arr[i][j]-sum[i-1][j-1];

//         }
//     }
//     int q;cin>>q;
//     while(q--){
//         int a,b,c,d;cin>>a>>b>>c>>d;
//         cout<<sum[c][d]-sum[a-1][d]-sum[c][b-1]+sum[a-1][b-1];
//     }
// }

//GCD
int main(){
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        int arr[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        while(q--){
            int l,r;cin>>l>>r;
            int gc=0;
            for(int i=0;i<l;i++){
               
            }
        }

    }
}