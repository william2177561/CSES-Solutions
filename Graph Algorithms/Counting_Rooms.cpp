#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<char>> A(n,vector<char>(m));
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    int room=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]=='.' and visited[i][j]==false){
                room++;
                queue<pair<int,int>> q;
                q.push({i,j});
                while(!q.empty()){
                    int x=q.front().first,y=q.front().second;
                    if(A[x][y]=='.' and visited[x][y]==false){
                        visited[x][y]=true;
                        if(x+1<n)q.push({x+1,y});
                        if(x-1>=0)q.push({x-1,y});
                        if(y+1<m)q.push({x,y+1});
                        if(y-1>=0)q.push({x,y-1});
                    }
                    q.pop();
                }
            }
        }
    }
    cout<<room;
}