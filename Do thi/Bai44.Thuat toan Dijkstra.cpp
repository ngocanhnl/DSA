#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int n, m, s;
vector<ii> adj[1005];

void nhap(){
    cin >> n >> m >> s;
    for(int i=0; i<m; i++){
        int a, b, w; cin >> a >> b >> w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
}

void dijkstra(){
    priority_queue<ii,vector<ii>,greater<ii>> q;
    q.push({0,s});
    vector<int> d(n+1,1e9);
    d[s] = 0;
    while(!q.empty()){
        ii e = q.top(); q.pop();
        int dis = e.first, u = e.second;
        if(d[u] < dis) continue;
        for(auto x : adj[u]){
            int v = x.first, w = x.second;
            if(d[v] > d[u]+w){
                d[v] = d[u] + w;
                q.push({d[v],v});
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout<<d[i]<<' ';
    }
}

int main(){
    nhap();
    dijkstra();
}
