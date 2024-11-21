#include<bits/stdc++.h>
using namespace std;

const int N=1e3;
int graph[N][N];

vector<int> Graph[N];

int main(){
    int n;cin>>n;

    for(int i=1;i<=n;i++){
        int a,b;cin>>a>>b;
        graph[a][b]=1;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(graph[i][j]) cout<<i<<" "<<j<<endl;
        }
    }

    for(int i=1;i<=n;++i){
        int a,b;cin>>a>>b;
        Graph[a].push_back(b);

    }
    for(auto ele:Graph){
        for(auto &i :ele){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}