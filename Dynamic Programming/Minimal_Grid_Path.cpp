#include<bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n==1){
        char a;
        cin>>a;
        cout<<a;
        return 0;
    }
    vector<vector<char>> A(n,vector<char>(n));
    vector<vector<bool>> visited(n,vector<bool>(n,false));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    vector<vector<pair<int,int>>> dp(2*n-2);

    dp[0].push_back({0,0});
    cout<<A[0][0];
    for(int i=0;i<2*n-2;i++){
        char min_char='Z';
        for(size_t j=0;j<dp[i].size();j++){
            if(dp[i][j].first+1<n and dp[i][j].second+1<n)min_char=min(min_char,min(A[dp[i][j].first+1][dp[i][j].second],A[dp[i][j].first][dp[i][j].second+1]));
            else if(dp[i][j].first+1<n)min_char=min(min_char,A[dp[i][j].first+1][dp[i][j].second]);
            else if(dp[i][j].second+1<n)min_char=min(min_char,A[dp[i][j].first][dp[i][j].second+1]);
        }
        cout<<min_char;
        if(i==2*n-3)break;
        for(size_t j=0;j<dp[i].size();j++){
            // cout<<i<<" "<<j<<" "<<dp[i][j].first<<" "<<dp[i][j].second<<'\n';
            if(dp[i][j].first+1<n and A[dp[i][j].first+1][dp[i][j].second]==min_char and visited[dp[i][j].first+1][dp[i][j].second]==false){
                dp[i+1].push_back({dp[i][j].first+1,dp[i][j].second});
                visited[dp[i][j].first+1][dp[i][j].second]=true;
            }
            if(dp[i][j].second+1<n and A[dp[i][j].first][dp[i][j].second+1]==min_char and visited[dp[i][j].first][dp[i][j].second+1]==false){
                dp[i+1].push_back({dp[i][j].first,dp[i][j].second+1});
                visited[dp[i][j].first][dp[i][j].second+1]=true;
            }
        }
    }
    return 0;
}
