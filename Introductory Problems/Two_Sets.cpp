#include <iostream>
using namespace std;
 
 
long long A[(int)10e5],B[(int)10e5];
int main(){
    long long n=0;
    cin>>n;
    long long a=0,b=0;
    long long t=(n*(1+n))/2;
    if(t%2==1){
        cout<<"NO";
        return 0;
    }
    t/=2;
    for(int i=n;i>0;i--){
        if(t>=i){
            t-=i;
            A[a]=i;
            a+=1;
        }else{
            B[b]=i;
            b+=1;
        }
    }
if(t==0){
    cout<<"YES\n"<<a<<"\n";
    a=0;
    while(A[a]){
        cout<<A[a]<<" ";
        a+=1;}
        cout<<"\n"<<b<<"\n";
        b=0;
    while(B[b]){
        cout<<B[b]<<" ";
        b+=1;
    }
    }else
    cout<<"NO\n";
