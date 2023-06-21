#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
int n, m;
bool visited[1005];
void ktao(){
    cin >> n ;
    m = n-1;
    for(int i=0; i<m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        
    }
}
int res = 0;
int DFS(int u){
    int cnt = 1;
    for(int x:adj[u]){
        cnt += DFS(x);
    }
    res +=cnt;
    return cnt;
}




int main(){
    ktao();
    DFS(1);
    cout<<res;
    
}
