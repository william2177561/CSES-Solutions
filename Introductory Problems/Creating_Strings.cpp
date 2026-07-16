#include <bits/stdc++.h>

using namespace std;
int A(int a){
    int b=1;
    for(int i=1;i<=a;i++){
        b*=i;
    }
    return b;
}

int main(){
    string s;
    cin>>s;
    int cnt[26]={0};
    for(auto c:s){
        cnt[c-'a']+=1;
    }
    int t=1;
    for (int i = 0; i < 26; i++) {
        t *= A(cnt[i]);
    }
    cout<<A(s.size())/t<<"\n";
    sort(s.begin(),s.end());
    do {
        for (char n : s) cout << n;
        cout << "\n";
    } while (next_permutation(s.begin(), s.end()));
}