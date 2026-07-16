#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> N,M;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        N.push_back(a);
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        M.push_back(a);
    }
    sort(N.begin(),N.end());
    sort(M.begin(),M.end());
    int a=0,b=0,total=0;

    while(true){
        if(N[a]-k<=M[b] and N[a]+k>=M[b]){
            total+=1;
            a++;
            b++;
            if(a==n or b==m){
                break;
            }
        }else if(N[a]<M[b]){
            a++;
            if(a==n){
                break;
            }
        }else if(N[a]>M[b]){
            b++;
            if(b==m){
                break;
            }
        }
    }
    cout<<total;
}