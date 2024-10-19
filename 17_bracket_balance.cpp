#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> bracket = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string balanceCheck(string s){
    stack<char> st;
    for(char & i : s){
        if(bracket[i] < 0 ){
            st.push(i);
        }else{
            if(st.empty()){
                return "No";
            }else{
                char temp = st.top();
                st.pop();
                if(bracket[temp] + bracket[i] != 0){
                    return "No";
                }
            }
        }
    }
    return st.empty() ? "Yes" : "NO";
}

int main(){
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        cout<<balanceCheck(s)<<endl;
    }
}