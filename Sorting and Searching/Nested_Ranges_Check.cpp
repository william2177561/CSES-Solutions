#include <bits/stdc++.h>
using namespace std;
struct range{
    int R,L,id;
};
bool key(const range &A,const range &B){
    if(A.L==B.L){
        return A.R>B.R;
    }else{
        return A.L<B.L;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<range> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i].L>>A[i].R;
        A[i].id=i;
    }
    
    sort(A.begin(),A.end(),key);

    vector<int> contains(n,0);
    vector<int> contained(n,0);
    int max_R=A[0].R;
    int min_R=A[n-1].R;
    for(int i=0;i<n;i++){
        if(A[i].R<=max_R){
            contained[A[i].id]=1;
        }else{
            max_R=A[i].R;
            contained[A[i].id]=0;
        }
        int j=n-1-i;
        
        if(A[j].R>=min_R){
            contains[A[j].id]=1;
        }else{
            min_R=A[j].R;
            contains[A[j].id]=0;
        }
    }
    contained[A[0].id]=0; 
    contains[A[n-1].id]=0;
    for(int i=0;i<n;i++){
        cout<<contains[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<contained[i]<<" ";
    }
    return 0;
}
// 1 6
// 2 4
// 3 6
// 4 8