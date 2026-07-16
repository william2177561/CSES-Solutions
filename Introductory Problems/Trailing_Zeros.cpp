#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long count = 0;
    long long p = 5;
    while(p <= n){
        count += n / p;
        p *= 5;
    }
    cout << count;
}