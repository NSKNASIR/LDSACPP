#include <bits/stdc++.h>
using namespace std;

void print(set<int> &s){
    for(auto &v:s) cout<<v<<endl;
}

int main(){
    /* set= index of map. 
            remove all value of map is called set.
            stored autometic sorted order.
            don't use []
    */
   set<int> s;
   s.insert(5);//O(log(n))
   s.insert(3);
   s.insert(8);
   s.insert(2);
   //    print(s);

   auto it=s.find(2);

   //unorder_set
   unordered_set<int> s1;
   s1.insert(3);//O(1)
   s1.insert(5);//O(1)
   s1.insert(2);
   auto it =s1.find(5);//O(1)


   //multiset
   //duplicate allowed
   //s.erase(2) // delete all duplicate

}