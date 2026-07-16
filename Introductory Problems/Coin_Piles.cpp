#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(a<b){
            int temp;
            temp=a;
            a=b;
            b=temp;
        }//a>b
        int c=b-(a-b);
        if(c%3==0 and c>=0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
            
    }
}