#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    int median=a[n/2];
    long long total=0;
    for(int i=0;i<n;i++){
        total+=abs(a[i]-median);
    }
    cout<<total;
}