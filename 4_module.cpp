#include <bits/stdc++.h>
using namespace std;

long long fun(int n){
    long long fact=1;
    int M=47;
    for(int i=2;i<=n;i++)fact=(fact*i)%M;

    return fact;
}

int main(){
    int n;cin>>n;
    cout<<fun(n);

}

//(a+b)%m=((a%m)+(b%m))%m
//(a*b)%m=((a%m)*(b%m))%m
//(a-b)%m=((a%m)-(b%m)+m)%m
//(a/b)=((a%m)*(b^-1)%m)%m