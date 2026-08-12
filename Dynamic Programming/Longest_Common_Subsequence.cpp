#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<vector<int> > dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    cout<<dp[n][m]<<'\n';
    vector<int> ans(dp[n][m]);
    int k=dp[n][m]-1;
    int i=n,j=m;
    while(i>0 and j>0){
        
        if(a[i-1]==b[j-1]){
            ans[k]=a[i-1];
            j--;
            i--;
            k--;
        }else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }else{
            j--;
        }
    
    }
    for(k=0;k<dp[n][m];k++){
        cout<<ans[k]<<" ";
    }
}
//   3 1 3 2 7 4 8 2 
// 6 0 0 0 0 0 0 0 0 
// 5 0 0 0 0 0 0 0 0 
// 1 0 1 1 1 1 1 1 1 
// 2 0 1 1 2 2 2 2 2 
// 3 1 1 2 2 2 2 2 2 
// 4 1 1 2 2 2 3 3 3 
