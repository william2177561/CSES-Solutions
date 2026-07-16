#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int chr[26]={0};
    for(char c:s){
        chr[c-'A']+=1;
    }
    string middle ="";
    string left="";
    for(int i=0;i<26;i++){
        if(chr[i]%2==1){
            chr[i]-=1;
            if(middle!=""){
                cout<<"NO SOLUTION";
                return 0;
            }else{
                middle=i+'A';
            }
        }
        left+=string(chr[i]/2,i+'A');
    }
    string right(left.rbegin(),left.rend());
    cout<<left<<middle<<right;
}