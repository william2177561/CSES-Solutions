#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int L=0;
    long long total=0;
    set<int> b;
    for(int R=0;R<n;R++){
        while(b.count(a[R])){
            b.erase(a[L]);
            L++;
        }
        b.insert(a[R]);
        total+=R-L+1;
    }
    cout<<total;
}