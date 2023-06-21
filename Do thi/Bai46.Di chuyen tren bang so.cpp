#include<bits/stdc++.h>
using namespace std;
int a[505][505], d[505][505];
#define pip pair<int,pair<int,int>>
int dx[] = {-1,0,0,1};
int dy[] = {0,-1,1,0};
int n, m;
void dijkstra(){
    for(int i=1 ; i<=n; i++)
        for(int j=1; j<=m; j++)
            d[i][j] = 1e9;
    d[1][1] = a[1][1];
    priority_queue<pip,vector<pip>,greater<pip>> q;
    q.push({a[1][1],{1,1}});
    while(!q.empty()){
        auto it = q.top(); q.pop();
        int i = it.second.first, j = it.second.second, w = it.first;
        if(w>d[i][j]) continue;
        for(int k = 0; k<4; k++){
            int i1 = i + dx[k], j1 = j + dy[k];
            if(d[i1][j1] > d[i][j] + a[i1][j1]){
                d[i1][j1] = d[i][j] + a[i1][j1];
                q.push({d[i1][j1],{i1,j1}});
            }
        }
    }
    cout<<d[n][m];
}

int main(){
     cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    dijkstra();
    
    
}
