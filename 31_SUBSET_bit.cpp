#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subset(vector<int>& v) {
    vector<vector<int>> sub;
    int n = v.size();
    int ct = (1 << n); 
    
    for (int i = 0; i < ct; i++) {
        vector<int> m; 
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) { 
                m.push_back(v[j]);
            }
        }
        sub.push_back(m); 
    }
    
    return sub;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    auto ans = subset(v);
    for (auto& sub : ans) {
        for (auto& ele : sub) {
            cout << ele << " ";
        }
        cout << endl;
    }
}
