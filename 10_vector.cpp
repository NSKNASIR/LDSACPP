#include <bits/stdc++.h>
using namespace std;
void printVector(vector <int> &v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    // vector<int> v;
    // int n;cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;cin>>x;
    //     v.push_back(x);
    // }
    // printVector(v);

    // vector <int> v1(10); //size is fixed(10) and its define 0.
    // printVector(v1);

    // vector <int>v2(5,2);//size is fixed(5) and its define 2(all value is 2).
    // printVector(v2);
    // v.pop_back();//remove for last element.

    //pair of vector
    // vector<pair<int,int>> v_p;
    // v_p.push_back({2,3});//{2,3}=make_pair(2,3)
    // cout<<v_p[0].first<<" "<<v_p[0].second;

    //array of vector or 2-D vector
    // vector<int> v_arr[5];// total 5 row.
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<4;j++){//total 4 coloum
    //         int x;cin>>x;
    //         v_arr[i].push_back(x);
    //     }
    // }
    // for(int i=0;i<5;i++)
    //     for(int j=0;j<v_arr[i].size();j++)
    //         cout<<v_arr[i][j]<<" ";

    //vector of vector or 2_D vector
    vector<vector<int>> v_v;
    //vector<vector<int>>v_v(3,vector<int>(5))// row is 3 and coloum is 5.
    vector<int> temp;
    temp.push_back(5);
    temp.push_back(6);
    v_v.push_back(temp);
    cout<<v_v[0][0];
    
}