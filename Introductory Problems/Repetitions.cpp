#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int _max=1,times=1;
    int a=s.size();
    for(int i=1;i<a;i++){   
        if(s[i]==s[i-1]){
            times+=1;
            
        }else{
            if(times>_max)
            _max=times;
            times=1;
        }
    }
    if(times>_max)
        _max=times;
    cout<<_max;
}