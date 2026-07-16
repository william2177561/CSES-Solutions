#include <iostream>
 
using namespace std;
long long f(long long x){
    return (x*x*x*x - 9*x*x + 24*x - 16) / 2;
}
 
int main(){
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<f(i)<<"\n";
    }
}
