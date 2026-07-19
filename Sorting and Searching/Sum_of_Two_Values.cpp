#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    int L=0,R=n-1;
    while(L<R){
        if(a[L].first+a[R].first==x){
            cout<<a[L].second<<" "<<a[R].second;
            return 0;
        }else if(a[L].first+a[R].first<x){
            L++;
        }else if(a[L].first+a[R].first>x){
            R--;
        }
    }
    cout<<"IMPOSSIBLE";
}