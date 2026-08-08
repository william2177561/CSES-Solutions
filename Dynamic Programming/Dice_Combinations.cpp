#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<long long> dp(n+1);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6 and i-j>=0;j++){
            dp[i]+=dp[i-j];
            dp[i]%=(int)(1e9+7);
        }
    }
    cout<<dp[n];
}