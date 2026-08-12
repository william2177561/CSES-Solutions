#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    vector<vector<int> >dp(a,vector<int>(b,1005));
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==j){
                dp[i][j]=0;
            }else{
                for(int k=0;k<i;k++){
                    dp[i][j]=min(dp[i][j],1+dp[i-k-1][j]+dp[k][j]);
                }
                for(int k=0;k<j;k++){
                    dp[i][j]=min(dp[i][j],1+dp[i][j-k-1]+dp[i][k]);
                }
            }
        }
    }
    cout<<dp[a-1][b-1];
}