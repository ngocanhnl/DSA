#include<bits/stdc++.h>
using namespace std;

int n, m, color[1005];
bool visited[1005];
vector<int> adj[1005];

void nhap(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

bool DFS(int u){
    visited[u] = true;
    for(auto x:adj[u]){
        if(!visited[x]){
            color[x] = 3-color[u];
            if(!DFS(x)) return false;
        }
        else{
            if(color[x]==color[u]) return false;
        }
    }
    return true;
}

int main(){
    nhap();
    int ok = 1;
    for(int i=1; i<=n; i++){
        if(!color[i]){
            color[i] = 1;
            if(!DFS(i)) ok = 0; 
        }
    }
    if(ok) cout<<"YES";
    else cout<<"NO";
}


