#include<bits/stdc++.h>

using namespace std;
vector<int> parent;
int find_root(int i){
    if(parent[i]==i)return i;
    int root=find_root(parent[i]);
    parent[i]=root;
    return root;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    parent.resize(n+1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        int rootA = find_root(a),rootB=find_root(b);
        parent[rootA]=rootB;
    }
    vector<int> root_node;
    for(int i=1;i<=n;i++){
        if(parent[i]==i){
            root_node.push_back(i);
        }
    }
    cout<<root_node.size()-1<<'\n';
    for(int i=0;i<root_node.size()-1;i++){
        cout<<root_node[i]<<' '<<root_node[i+1]<<'\n';
    }
}