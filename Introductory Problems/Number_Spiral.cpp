#include <iostream>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t,x,y;
    long long a;
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>y>>x;
    if(x>y){
        a=x*x-x+1;
        if(x%2==0)
            cout<<a-(x-y);
        else
            cout<<a+(x-y);
    }else{
        a=y*y-y+1;
        if(y%2==0)
            cout<<a+(y-x);
        else
            cout<<a-(y-x);
    }
    cout<<"\n";
    }
}