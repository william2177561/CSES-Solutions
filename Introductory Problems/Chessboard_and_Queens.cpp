#include <bits/stdc++.h>
using namespace std;
int total=0;    
void A(int a,bool b[8],bool c[15],bool d[15],string e[8]){
    for(int i=0;i<8;i++){
        if(!(b[i] or c[i-a+7] or d[i+a]) and e[a][i]!='*'){
            if (a==7){
                total+=1;
                continue;
            }
            b[i]=true;
            c[i-a+7]=true;
            d[i+a]=true;
            A(a+1,b,c,d,e);
            b[i] = false;
            c[i - a + 7] = false;
            d[i + a] = false;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string e[8];
    for(int i=0;i<8;i++){
        cin>>e[i];
    }
    bool b[8]={false},c[15]={false},d[15]={false};
    A(0,b,c,d,e);
    cout<<total;
}