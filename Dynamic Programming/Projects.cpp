#include<bits/stdc++.h>

struct project{
    long long start;
    long long end;
    long long reward;
    bool operator<(const project& other)const{
        return this->end<other.end;
    }
};

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    vector<project> A(n);
    for(long long i=0;i<n;i++){
        cin>>A[i].start>>A[i].end>>A[i].reward;
    }
    sort(A.begin(),A.end());
    vector<long long> dp(n,0);
    for(long long i=0;i<n;i++){
        auto it = lower_bound(A.begin(), A.begin() + i, A[i].start,
            [](const project& p, long long val){
                return p.end < val;
            }
        );
        if(i==0){
            dp[i]=A[i].reward;
        }else if(it==A.begin()){
            dp[i]=max(A[i].reward,dp[i-1]);
        }else{
            dp[i]=max(A[i].reward+dp[prev(it)-A.begin()],dp[i-1]);
        }
    }
    cout<<dp[n-1];
}
