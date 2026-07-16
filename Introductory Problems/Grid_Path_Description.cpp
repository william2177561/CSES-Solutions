#include <bits/stdc++.h>
using namespace std;
int total=0;
string a;
void dfs(int x,int y,int map[7][7],int step){
    if(x==6 and y==0){
        if(step==48)
        total+=1;
        return;
    }
    if(step==48)
    return;
    if(((x+1>=7 or map[x+1][y]==1) and (x-1<0  or map[x-1][y]==1)) and(y+1!=7 and map[x][y+1]==0) and (y-1!=-1 and map[x][y-1]==0))return;
    if(((y+1>=7 or map[x][y+1]==1) and (y-1<0  or map[x][y-1]==1)) and(x+1!=7 and map[x+1][y]==0) and (x-1!=-1 and map[x-1][y]==0))return;
    if(x+1<7 and map[x+1][y]==0 and (a[step]=='?' or a[step]=='D')){
        map[x+1][y]=1;
        dfs(x+1,y,map,step+1);
        map[x+1][y]=0;
    }
    if(x-1>=0 and map[x-1][y]==0 and (a[step]=='?' or a[step]=='U')){

        map[x-1][y]=1;
        dfs(x-1,y,map,step+1);
        map[x-1][y]=0;
    }
    if(y+1<7 and map[x][y+1]==0 and (a[step]=='?' or a[step]=='R')){
        map[x][y+1]=1;
        dfs(x,y+1,map,step+1);
        map[x][y+1]=0;
    }
    if(y-1>=0 and map[x][y-1]==0 and (a[step]=='?' or a[step]=='L')){
        map[x][y-1]=1;
        dfs(x,y-1,map,step+1);
        map[x][y-1]=0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int map[7][7]={0};
    map[0][0]=1;
    cin>>a;
    dfs(0,0,map,0);
    cout<<total;
}