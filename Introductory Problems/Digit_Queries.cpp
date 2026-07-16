#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        unsigned long long k;
        cin>>k;
        unsigned long long a=1,b=1;
        while(b<=17 and k>9*a*b){
            k-=9*a*b;
            a*=10;
            b+=1;   
        }
        cout<<to_string(a+(k-1)/b)[(k-1)%b]<<'\n';
    }
}