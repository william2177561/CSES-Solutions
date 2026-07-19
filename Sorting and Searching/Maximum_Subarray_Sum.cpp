#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<long long> a(n),dp(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dp[0]=a[0];
    long long _max=dp[0];
    for(int i=1;i<n;i++){
        dp[i]=max(dp[i-1]+a[i],a[i]);
        _max=max(_max,dp[i]);
    }   
    cout<<_max;
}