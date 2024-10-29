#include<bits/stdc++.h>
using namespace std;

double es=1e-5;

void nthRoot(double x){
    double l = 1, h = x, mid;
    while(h - l > es){
        mid  = (l+h)/2;
        if(mid*mid < x) l=mid;
        else h=mid;
    }
    cout<<h;
}

int main(){
    double x;cin>>x;
    nthRoot(x);
}