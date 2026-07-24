#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> b;
    int L=0,max_length=0;
    for(int R=0;R<n;R++){
        if(b.count(a[R]) and b[a[R]]>=L){   
            L=b[a[R]]+1;    
        }
        b[a[R]]=R;
        max_length=max(R-L+1,max_length);
    }
    cout<<max_length;
}   