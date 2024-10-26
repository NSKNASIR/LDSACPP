#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int &i:v) cin>>i;
    int min = *min_element(v.begin(),v.end());
    int max = *max_element(v.begin(),v.end());
    int sum = accumulate(v.begin(),v.end(),0);//here 0 is initial value
    int ct = count(v.begin(),v.end(),3);//count value 3 in the vector v.
    int element = *find(v.begin(),v.end(),5);
    cout<<min<<" "<<max<<" "<<sum<<" "<<ct<<" "<<element<<endl;
    reverse(v.begin(),v.end());

    //lambda function
    cout<<[](int x,int y){return x+y;}(2,3);
    auto sum = [](int x,int y){
        cout<<"This is lambda function"<<endl;
        return x+y;
    };
    cout<<sum(2,3);

    vector<int> v = {2,3,4};
    
    //all_of function
    //all is true is return true
    cout<<all_of(v.begin(),v.end(),[](int x){
        return x > 0;
    });
    //any_of function
    //one or more than one is true is return true 
    cout<<any_of(v.begin(),v.end(),[](int x){ 
        return x>0;
    });
    //none_of function 
    //all is false is return true
    cout<<none_of(v.begin(),v.end(),[](int x){ 
        return x>0;
    });
}