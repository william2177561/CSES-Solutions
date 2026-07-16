#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> a;
    int n,output=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        if(!a.count(b)){
            output+=1;
            a.insert(b);
        }
    }
    cout<<output;
}