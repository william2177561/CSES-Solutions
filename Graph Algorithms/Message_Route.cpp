#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> Adj(n+1);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        Adj[a].push_back(b);
        Adj[b].push_back(a);
    }
    vector<int> last(n+1,-1);
    queue<int> q;
    q.push(1);
    last[1]=0;
    while(!q.empty()){
        size_t Adj_size=Adj[q.front()].size();
        for(size_t i=0;i<Adj_size;i++){
            if(Adj[q.front()][i]==n){
                last[Adj[q.front()][i]]=q.front();
                goto pos_1;
            }
            if(last[Adj[q.front()][i]]==-1){
                q.push(Adj[q.front()][i]);
                last[Adj[q.front()][i]]=q.front();
            }
        }
        q.pop();
    }
    pos_1:
    if(last[n]==-1){
        cout<<"IMPOSSIBLE\n";
    }else{
        vector<int> ans;
        
        int pos=n;
        while(pos!=1){
            ans.push_back(pos);
            pos=last[pos];
        }
        ans.push_back(1);
        reverse(ans.begin(),ans.end());
        cout<<ans.size()<<'\n';
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
}