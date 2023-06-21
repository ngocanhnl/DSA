#include<bits/stdc++.h>
using namespace std;
int n, m;
struct edge{
    int x, y, w;
};

vector<edge> ke;
int par[100005], sz[100005];

void ktao(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        ke.push_back({x,y,w});
    }
    for(int i=1; i<=n;i++){
        par[i] = i;
        sz[i] = 1;
    }
}


int find(int u){
    if(u == par[u]) return u;
    return par[u] = find(par[u]);
}

bool Union(int x, int y){
    x = find(x);
    y = find(y);
    if(x==y) return false;
    else{
        if(sz[x] > sz[y]){
            sz[x]+=sz[y];
            par[y] = x;
        }
        else{
            sz[y]+=sz[x];
            par[x] = y;
        }
        return true;
    }
    return false;
}

void kruskal(){
    vector<edge> MST;
    long long d = 0;
    sort(ke.begin(),ke.end(),[](edge a, edge b)->bool{
        return a.w < b.w;
    });
    for(auto v:ke){
        if(MST.size()==n-1){
            break;
        }
        if(Union(v.x,v.y)){
            MST.push_back(v);
            d+=v.w;
        }
    }
    if(MST.size()<n-1){
        cout<<"IMPOSSIBLE";
    }
    else cout<<d;
}
int main(){
    ktao();
    kruskal();
}
