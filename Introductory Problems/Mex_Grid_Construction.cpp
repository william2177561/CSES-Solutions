#include <bits/stdc++.h>

using namespace std;
int A[100][100]={0};
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int B[205]={0};
            for(int k=0;k<i;k++){
                B[A[k][j]]=1;  
            }
            for(int l=0;l<j;l++){
                B[A[i][l]]=1;
            }
            int b=0;
            while(B[b]==1)
            b++;
            A[i][j]=b;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
}