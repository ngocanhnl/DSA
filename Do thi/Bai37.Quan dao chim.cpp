#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1005];
bool visited[1005];
int low[1005], disc[1005];
set<int> se;

void nhap(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
            adj[b].push_back(a);
    }
}

int dem = 0;

void DFS(int u, int par){
    visited[u] = true;
    low[u] = disc[u] = ++dem;
    int child = 0;
    for(auto x:adj[u]){
        if(x==par) continue;
        if(!visited[x]){
            child++;
            DFS(x,u);
            low[u] = min(low[x],low[u]);
            if(par != -1 && disc[u] <= low[x]){
                se.insert(u);
            }
        }
        else low[u] = min(low[u],disc[x]);
    }
    if(par == -1 && child > 1) se.insert(u);
}



int main(){
    nhap();
    DFS(1,-1);
    cout<<se.size();
}
