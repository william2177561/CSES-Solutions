#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    
    vector<vector<int>> dist(n,vector<int>(n,-1));
    queue<pair<int,int>> q;

    q.push({0,0});
    dist[0][0]=0;
    int a[2][8]={-2, -2, -1, -1, 1, 1, 2, 2, -1, 1, -2, 2, -2, 2, -1, 1};

    while(!q.empty()){
        auto [r,c] = q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int nr=r+a[0][i];
            int nc=c+a[1][i];
            if(nr>=0 and nc>=0 and nr<n and nc<n and dist[nr][nc]==-1){
                dist[nr][nc]=dist[r][c]+1;
                q.push({nr,nc});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dist[i][j]<<" ";
        }    
        cout<<"\n";
    }
}