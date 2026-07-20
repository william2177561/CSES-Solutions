#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    vector<int> val(n+1);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        val[i]=x;
        a[x]=i;
    }
    int rounds=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]){
            rounds++;
        }
    }
    for(int i=0;i<m;i++){
        int p1,p2;
        cin>>p1>>p2;
        int b=val[p1];
        int c=val[p2];
        if(b<n and a[b]>a[b+1])rounds--;
        if(b>1 and a[b-1]>a[b])rounds--;
        if(c<n and a[c]>a[c+1])rounds--;
        if(c>1 and a[c-1]>a[c])rounds--;
        if(abs(b-c)==1){
            if(b<c and a[b]>a[c])rounds++;
            if(c<b and a[c]>a[b])rounds++;
        }
        swap(a[b],a[c]);
        swap(val[p1],val[p2]);
        if(b<n and a[b]>a[b+1])rounds++;
        if(b>1 and a[b-1]>a[b])rounds++;
        if(c<n and a[c]>a[c+1])rounds++;
        if(c>1 and a[c-1]>a[c])rounds++;
        if(abs(b-c)==1){
            if(b<c and a[b]>a[c])rounds--;
            if(c<b and a[c]>a[b])rounds--;
        }
        cout<<rounds<<'\n';
    }
    return 0;
}
