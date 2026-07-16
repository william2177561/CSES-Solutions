#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c[26]={0};
    char a;
    int b=0;
    
    while(cin>>a){
        c[(int)a-'A']+=1;
        b+=1;
    }
    
    for(int i=0;i<26;i++){
        if(c[i]>(b+1)/2){
            cout<<-1;
            return 0;
        }
    }
    int last=-1;
    for(int i=0;i<b;i++){
        pair<int,int> _max={0,0};
        for(int j=0;j<26;j++){
            if(c[j]>_max.second){
                _max.first=j;
                _max.second=c[j];
            }
        }
        if(_max.second>(b-i)/2){
            cout<<(char)(_max.first+'A');
            c[_max.first]--;
            last=_max.first;
            continue;
        }
        for(int j=0;j<26;j++){
            if(j!=last and c[j]>0){
                last=j;
                c[j]--;
                cout<<(char)(j+'A');
                break;
            }
        }
    }
}