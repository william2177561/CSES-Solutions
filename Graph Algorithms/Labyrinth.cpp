#include<bits/stdc++.h>
 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<char>> A(n,vector<char>(m)),B(n,vector<char>(m,' '));
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    pair<int,int>a,b;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
            if(A[i][j]=='A'){
                a={i,j};
            }
        }
    }
    

    struct room{
        int x;
        int y;
        char last_path;
    };
    queue<room> q;
    q.push({a.first,a.second,'e'});
    while(!q.empty()){
        room T=q.front();
        if(visited[T.x][T.y]==false)
            B[T.x][T.y]=T.last_path;
        if(A[T.x][T.y]=='B'){
            string path="";
            int x=T.x,y=T.y;
            while(B[x][y]!='e'){
                path+=B[x][y];
                if(B[x][y]=='D'){
                    x-=1;
                }else if(B[x][y]=='U'){
                    x+=1;
                }else if(B[x][y]=='R'){
                    y-=1;
                }else{
                    y+=1;
                }
            }
            reverse(path.begin(),path.end());
            cout<<"YES\n"<<path.size()<<'\n'<<path;
            return 0;
        }
        
        if((A[T.x][T.y]=='.' or A[T.x][T.y]=='A')  and visited[T.x][T.y]==false){
            visited[T.x][T.y]=true;
            if(T.x+1<n)q.push({T.x+1,T.y,'D'});
            if(T.x-1>=0)q.push({T.x-1,T.y,'U'});
            if(T.y+1<m)q.push({T.x,T.y+1,'R'});
            if(T.y-1>=0)q.push({T.x,T.y-1,'L'});
        }
        visited[T.x][T.y]=true;
        q.pop();
    }
    cout<<"NO";
}