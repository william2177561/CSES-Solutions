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
    long long R=0;
    for(int i=0;i<n;i++){
        if(a[i]<=R+1){
            R=R+a[i];
        }else{
            break;
        }
    }
    cout<<R+1;
}