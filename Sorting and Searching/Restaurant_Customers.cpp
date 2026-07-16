#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> arrive(n),leave(n);
    for(int i=0;i<n;i++){
        cin>>arrive[i]>>leave[i];
    }
    sort(arrive.begin(),arrive.end());
    sort(leave.begin(),leave.end());
    int a=0,b=0,_max=0,now=0;
    while(a!=n or b!=n){
        if(a<n and arrive[a]<leave[b]){
            now+=1;
            a++;
        }else{
            now-=1;
            b++;
        }
        _max=max(_max,now);  
    }
    cout<<_max;
}