#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]=i;
    }
    int rounds=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]){
            rounds++;
        }
    }
    cout<<rounds;
}