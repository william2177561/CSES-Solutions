#include <iostream>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    long long output=1;
    for(long long i=0;i<n;i++){
        
        output*=2;
        output=output%((long long)1e9+7);
    }
    cout<<output;
}