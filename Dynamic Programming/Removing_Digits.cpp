#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,(int)(1e6+1));
    dp[n]=0;
    for(int i=n;i>=0;i--){
        if(dp[i]==(int)(1e6+1))continue;
        int i_temp=i;
        while(i_temp/10!=0 or i_temp%10!=0){
            if(i-i_temp%10>=0){
                dp[i-i_temp%10]=min(dp[i]+1,dp[i-i_temp%10]);
            }
            i_temp/=10;
        }
    }
    cout<<dp[0];
}
