#include <bits/stdc++.h>
using namespace std;
int main(){
    //stack list in fast out(LIFO)
    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(6);
    s.push(3);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    //queue first in first out(FIFO)
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}