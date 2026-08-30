#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long sum=0;
    vector<vector<long long>> dp(n,vector<long long>(n,0));//l,r
    for(int i=0;i<n;i++){
        cin>>dp[i][i];
        sum+=dp[i][i];
    }
    for(int len=2;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            int j=i+len-1;
            dp[i][j]=max(dp[i][i]-dp[i+1][j],dp[j][j]-dp[i][j-1]);
        }
    }
    cout<<(sum-dp[0][n-1])/2+dp[0][n-1];
}
//   1 2 3 4 i
// 1 4
// 2 1 5
// 3 0 4 1
// 4 3 3 2 3
// j        