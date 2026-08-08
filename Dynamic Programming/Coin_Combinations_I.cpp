#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int> coin(n);
    vector<long long> dp(x+1,0);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    dp[0]=1;
    for(int i=0;i<=x;i++){
        if(dp[i]==0)continue;
        for(int j=0;j<n;j++){
            if(i+coin[j]<=x){
                dp[i+coin[j]]+=dp[i];
                dp[i+coin[j]]%=(int)(1e9+7);
            }
        }
    }
    cout<<dp[x];
}