#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> A(n),dp(n,0);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        auto it=lower_bound(ans.begin(),ans.end(),A[i]);
        if(it==ans.end()){
            ans.push_back(A[i]);
        }else{
            *it=A[i];
        }
    }   
    cout<<ans.size();
}