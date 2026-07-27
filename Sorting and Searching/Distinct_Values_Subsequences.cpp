#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<int,int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }   
    long long MOD=1e9+7;
    long long output=1;
    for(auto const& [key,val]:a){
        output*=val+1;
        output%=MOD;
    }
    cout<<(output-1+MOD)%MOD;
}
