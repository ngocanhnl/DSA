#include<bits/stdc++.h>
using namespace std;

int n,m,k;
int visited[1005], pos[1005];
vector<int> ke[1005];
map<int,int> mp;
void nhap(){
    cin >>k >>  n >> m;
    for(int i=1; i<=k; i++){
        cin >> pos[i];
    }
    int q=m;
    while(q--){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
}


void DFS(int u){
    visited[u] = 1;
    mp[u]++;
    for(auto it:ke[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
}

int main(){
    nhap();
    int dem=0;
    for(int i=1; i<=k; i++){
        memset(visited,0,sizeof(visited));
        DFS(pos[i]);
    }
    for(int i=1; i<=n; i++){
        if(mp[i] == k) dem++;
    }
    cout<<dem;
}

