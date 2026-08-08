#include <bits/stdc++.h>
using namespace std;
struct tree_node{
    int L;
    int R;
    int cnt;
};
int k;
vector<tree_node> tree;
void build_tree(int node,int start,int end){
    tree[node].L=start;
    tree[node].R=end;
    if(start==end){
        tree[node].cnt=1;
        return;
    }
    int mid=(start+end)/2;
    build_tree(2*node,start,mid);
    build_tree(2*node+1,mid+1,end);
    tree[node].cnt=tree[2*node].cnt+tree[2*node+1].cnt;
}
int query_and_delete(int node,int target){
    tree[node].cnt--;
    if(tree[node].L==tree[node].R){
        return tree[node].L;
    }
    if(tree[2*node].cnt>=target){
        return query_and_delete(2*node,target);
    }else{
        return query_and_delete(2*node+1,target-tree[2*node].cnt);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n>>k;
    tree.resize(4*n);
    build_tree(1,1,n);
    int now=0;
    int now_len=n;

    for(int i=0;i<n;i++){
        now=(now+k)%now_len;
        cout<<query_and_delete(1,now+1)<<" ";
        now_len--;
    }
}
