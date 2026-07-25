#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>x>>n;
    set<int> lights={0,x};
    multiset<int> lens={x};
    for(int i=0;i<n;i++){
        int light;
        cin>>light;
        auto it=lights.upper_bound(light);
        int range=*it-*prev(it);
        lens.erase(lens.find(range));
        lens.insert(light-*prev(it));
        lens.insert((*it)-light);
        lights.insert(light);
        cout<<*lens.rbegin()<<" ";
    }
    
}