#include<bits/stdc++.h>
using namespace std;

int par[100005], sz[100005];
vector<pair<int,int>> edge;
int n, m;

void  ktao(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b;
        edge.push_back({a,b});
    }
    for(int i=1; i<=n; i++){
        par[i] = i;
        sz[i] = 1;
    }
}



int find(int x){
    if(x == par[x]) return x;
    return par[x] = find(par[x]);
}

bool Union(int x, int y){
    x = find(x);
    y = find(y);
    if(x==y) return false;
    else {
        if(sz[x] > sz[y]){
            sz[x] += sz[y];
            par[y] = x;
        }
        else{
            sz[y] += sz[x];
            par[x] =y;
        }
        return true;
    }
    return false;
}

int main(){
    ktao();
    int res = 0;
    for(auto it:edge){
        int x = it.first, y = it.second;
        if(Union(x,y)){
            res = max({res,sz[par[x]],sz[par[y]]});
            cout<<--n<<' '<<res<<endl;
        }
        else cout<<n<<' '<<res<<endl;
    }
}

