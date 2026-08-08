#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int> coin(n),dp(x+1,(int)(1e6+5));
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    sort(coin.begin(),coin.end());
    dp[x]=0;
    for(int i=x;i>0;i--){
        if (dp[i] == 1e6+5) continue;
        for(int j=0;j<n;j++){
            if(i-coin[j]>=0){
                dp[i-coin[j]]=min(dp[i-coin[j]],dp[i]+1);
            }else{
                break;
            }
        }
    }
    if(dp[0]==(int)(1e6+5)){
        cout<<-1;
    }else{
        cout<<dp[0];
    }
}