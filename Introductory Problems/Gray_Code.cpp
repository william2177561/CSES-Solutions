#include <iostream>

using namespace std;

int main(){
    long long n;
    cin>>n;
    for(int i=0;i<(1<<n);i++){
        int gray=i^(i>>1);
        for (int bit = n - 1; bit >= 0; bit--)
            cout << ((gray >> bit) & 1);
        cout<<"\n";
    }
}
