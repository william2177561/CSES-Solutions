#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    multiset<int> N;
    vector<int> M(m);
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        N.insert(a);
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        auto it=N.upper_bound(a);
        
        if(it==N.begin()){
            cout<<-1<<" ";
        }else{
            it=prev(it);
            cout<<*(it)<<" ";
            N.erase(it);
        }
    }
}
