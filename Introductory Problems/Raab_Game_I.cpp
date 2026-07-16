#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b;
        cin>>n>>a>>b;
        if(n<a+b or (a!=b and (a==0 or b==0))){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        int c[n],d[n];
        for(int j=0;j<n;j++){
            c[j]=j+1;
            if(j<b){
                d[j]=c[j]+a;
            }else if(j<a+b){
                d[j]=c[j]-b;
            }else{
                d[j]=c[j];
            }
        }
        for(int j=0;j<n;j++){
            cout<<c[j]<<" ";
        }
        cout<<"\n";
        for(int j=0;j<n;j++){
            cout<<d[j]<<" ";
        }
        cout<<"\n";
    }
}
