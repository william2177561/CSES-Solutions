#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int b=0,c=n-1;
    int total=0;
    while(b<c){
        if(a[b]+a[c]<=x){
            b++;
            c--;
            total++;
        }else{
            c--;
            total++;
        }
    }
    if(b==c){
        total++;
    }
    cout<<total;
}