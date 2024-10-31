#include<bits/stdc++.h>
using namespace std;
void printBinary(int n){
    for(int i=10;i>=0;--i) cout<<((n>>i) & 1);
    cout<<endl;
}
int  main(){
    cout<<INT_MAX<<endl;
    int a = (1LL<<31)-1;
    cout<<a<<endl;
    unsigned int b = (1LL<<32)-1;
    cout<<b<<endl;
    printBinary(16);

    //set bit and unset bit
    cout<<(16 & (1<<2))<<endl; // if answer is 1 then it is set bit else answer is 0 its unset bit.

    //bit set
    printBinary(3 | (1<<3));

    //bit unset
    printBinary(7 & ~(1<<2));

    //toggle
    printBinary(7 ^ (1<<1));

    //count 1 in a binary number
    int ct=0;
    for(int i=31;i>=0;--i) if((15 & (1<<i)) !=0) ct++;
    cout<<ct<<endl;
}