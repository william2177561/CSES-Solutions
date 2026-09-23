#include<bits/stdc++.h>
using namespace std;

vector<vector<long long>> adj(0,vector<long long>(0));
int n,m;
void dfs(int index,int A,int B){
    if(index==n){
        adj[A].push_back(B);
        return;
    }
    if(((A>>index)&1)==1){
        dfs(index+1,A,B);
        return;
    }else if(((A>>index)&1)==0){
        if(((A>>(index+1))&1)==0 and index+1!=n)
            dfs(index+2,A,B);
        dfs(index+1,A,B|(1<<index));
        return;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    long long MOD=1e9+7;
    adj.resize(1<<n);
    for(int i=0;i<(1<<n);i++){
        dfs(0,i,0);
    }
    vector<long long> dp_now(1<<n,0),dp_prev(1<<n,0);
    dp_prev[0]=1;
    for(int i=0;i<m;i++){
        for(int mask=0;mask<(1<<n);mask++){
            if(dp_prev[mask]==0)continue;
            for(int j=0;j<adj[mask].size();j++){
                dp_now[adj[mask][j]]=(dp_now[adj[mask][j]]+dp_prev[mask])%MOD;
            }
        }
        dp_prev=move(dp_now);
        dp_now.assign(1 << n, 0);
    }
    cout<<dp_prev[0];
}

