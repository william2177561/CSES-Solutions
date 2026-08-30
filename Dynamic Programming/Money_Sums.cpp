#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    
    vector<bool> dp(100001,false);
    dp[0]=true;
    int max_vaule=1000;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        
        for(int j=max_vaule;j>=0;j--){
            if(dp[j]==true){
                dp[j+a]=true;
                max_vaule=max(j+a,max_vaule);
                
            }
        }
    }
    string ans="";
    int cnt=0;
    for(int i=1;i<100001;i++){
        if(dp[i]==true){
            ans+=to_string(i)+" ";
            cnt++;
        }
    }
    cout<<cnt<<"\n"<<ans;
}