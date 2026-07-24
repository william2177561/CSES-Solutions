#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> towers;
    for (int i = 0; i < n; i++) {
        auto it=upper_bound(towers.begin(),towers.end(),a[i]);
        if(it==towers.end()){
            towers.push_back(a[i]);
        }else{
            *it=a[i];
        }

    }
    cout<<towers.size();
}