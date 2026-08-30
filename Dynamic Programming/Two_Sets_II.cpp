#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(((1+n)*n/2)%2!=0){
        cout<<0;
        return 0;
    }
    int w=((1+n)*n/2)/2;
    vector<long long> dp(w+1,0);
    dp[0]=1;
    for(int i=1;i<n+1;i++){
        for(int j=w;j>=0;j--){
            if(j+i<=w){
                dp[j+i]=(dp[j+i]+dp[j])%(int)(1e9+7);
            }
        }
    }
    cout<<dp[w]*500000004%(int)(1e9+7);
}