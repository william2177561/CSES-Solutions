#include <bits/stdc++.h>
using namespace std;
bool sort_key(const pair<int,int>& a,const pair<int,int>& b){
    return a.second<b.second;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>> A(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        A[i]={a,b};
    }
    sort(A.begin(),A.end(),sort_key);
    int last_time=-1,output=0;
    for(int i=0;i<n;i++){
        if(A[i].first>=last_time){
            last_time=A[i].second;
            output++;
        }
    }
    cout<<output;
}