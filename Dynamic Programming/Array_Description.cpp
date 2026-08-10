#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> A(n);
    vector<vector<long long> > dp(n,vector<long long>(m,0));
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    if(A[0]!=0){
        dp[0][A[0]-1]=1;
    }else{
        for(int i=0;i<m;i++){
            dp[0][i]=1;
        }
    }
    
    long long MOD=1e9+7;
    for(int i=1;i<n;i++){
        if(A[i]!=0){
            dp[i][A[i]-1]=(dp[i][A[i]-1]+dp[i-1][A[i]-1])%MOD;
            if(A[i]<m){
                dp[i][A[i]-1]=(dp[i][A[i]-1]+dp[i-1][A[i]])%MOD;
            }
            if(A[i]-2>=0){
                dp[i][A[i]-1]=(dp[i][A[i]-1]+dp[i-1][A[i]-2])%MOD;
            }
        }else{
            
            for(int j=0;j<m;j++){
                dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
                if(j+1<m){
                    dp[i][j]=(dp[i][j]+dp[i-1][j+1])%MOD;
                }
                if(j-1>=0){
                    dp[i][j]=(dp[i][j]+dp[i-1][j-1])%MOD;
                }
            }
        }
    }
    if(A[n-1]==0){
        int ans=0;
        for(int i=0;i<m;i++){
            ans=(ans+dp[n-1][i])%MOD;
        }
        cout<<ans;
    }else{
        cout<<dp[n-1][A[n-1]-1];
    }
}