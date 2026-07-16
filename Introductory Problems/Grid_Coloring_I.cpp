#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char b;
            cin>>b;
            a[i][j]=(int)(b-'A');
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int b=0;
            while(a[i][j]==b or (i-1>=0 and a[i-1][j]==b) or (j-1>=0 and a[i][j-1]==b)){
                b++;
            }
            a[i][j]=b;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<(char)(a[i][j]+'A');
        }
        cout<<"\n";
    }
}