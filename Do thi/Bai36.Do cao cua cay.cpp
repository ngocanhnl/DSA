#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int dist[1005], n, m;
bool visited[1005];
void nhap(){
    cin >> n;
    m = n-1;
    for(int i=0; i<m; i++){
        int a, b; cin >> a >> b;
        ke[a].push_back(b);
    }
}
void DFS(int u, int dis){
    dist[u] = dis;
    for(auto it:ke[u]){
        DFS(it,dis+1);
    }
}



int main(){
    nhap();
    DFS(1,0);
    for(int i=1; i<=n; i++){
        cout<<dist[i]<<' ';
    }
}
