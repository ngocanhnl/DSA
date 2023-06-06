#include<bits/stdc++.h>
using namespace std;

int n, s, t, u,v;
int a[1005][1005];

void nhap(){
    cin >> n >> s >> t >> u >> v;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    
}
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
int BFS(){
    queue <pair<pair<int,int>,int>> q;
    q.push({{s,t},0});
    a[s][t]=0;
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        int i=it.first.first, j=it.first.second, d = it.second;
        if(i==u && j==v){
            return d;
        }
        for(int k=0; k<8; k++){
            int i1 = i + dx[k];
            int j1 = j + dy[k];
            if(i1>=1 && i1 <=n && j1>=1 && j1<=n && a[i1][j1]){
                q.push({{i1,j1},d+1});
                a[i1][j1]=0;
            }
        }
    }
    return -1;
}

int main(){
    nhap();
    cout<<BFS();
}
