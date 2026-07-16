#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long  a=0,b=0;
    long long i;
    cin>>i;
    for(int k=0;k<i-1;k++){
        cin>>a;
        b+=a;
    }
    cout << (i*(i+1))/2-b;

}