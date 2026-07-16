#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    long long steps=0;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    long long last=v[0];
    for(int i=1;i<n;i++){
        if(last>v[i]){
            steps+=last-v[i];
        }else{
            last=v[i];
        }
    }
    cout<<steps;
}