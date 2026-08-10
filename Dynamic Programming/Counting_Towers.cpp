#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    long long MOD=1e9+7;
    vector<int> T(t);
    int n_max=0;
    for(int i=0;i<t;i++){
        cin>>T[i];
        n_max=max(T[i],n_max);
    }
    
    vector<vector<long long>> dp(n_max,vector<long long>(2,0));
    dp[0][0]=1;
    dp[0][1]=1;
    for(int j=1;j<n_max;j++){
        dp[j][0]=(dp[j-1][0]*4+dp[j-1][1])%MOD;
        dp[j][1]=(dp[j-1][1]*2+dp[j-1][0])%MOD;
    }
    for(int i=0;i<t;i++){
        cout<<(dp[T[i]-1][0]+dp[T[i]-1][1])%MOD<<"\n";
    }

}