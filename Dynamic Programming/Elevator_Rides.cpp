#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int> A(n);
    vector<pair<int,int>> dp((1<<n),{n+1,0});
    dp[0]={1,0};
    for(int i=0;i<n;i++)cin>>A[i];
    for(long long mask=1;mask<(1<<n);mask++){
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
                pair<int,int> temp=dp[mask^(1<<i)];
                temp.second+=A[i];
                if(temp.second>x){
                    temp.first+=1;
                    temp.second=A[i];
                }
                if(dp[mask].first>temp.first or (dp[mask].first==temp.first and dp[mask].second>temp.second)){
                    dp[mask]=temp;
                }
            }
        }
    }
    cout<<dp[(1<<n)-1].first;
}