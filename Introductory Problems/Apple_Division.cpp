#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long data[n];

    long long total=0;
    for(int i=0;i<n;i++){
        cin>>data[i];
        total+=data[i];
    }
    long long min_diff = LLONG_MAX;
    for(int j=0;j<(1<<n);j++){
            long long a=0;
            for(int k=0;k<n;k++){
                if((j>>k)&1){
                    a+=data[k];
                }
            }
            if (abs(total-2*a)<min_diff){
                min_diff=abs(total-2*a);
            }
    }
    cout << min_diff;
}   