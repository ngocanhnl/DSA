#include<bits/stdc++.h>
using namespace std;
bool visited[1010];
vector<int> v[1001];
int parent[1001];
int check[1010];
int dem = 1;
void DFS(int i){
    visited[i]= true;
    check[i] = dem;
    for(auto it:v[i]){
        if(!visited[it]){
            DFS(it);
            parent[it]=i;    
        }
    }
}

void tplt(int n){
    for(int i=1; i<=n;i++){
        if(!visited[i]){
            DFS(i);
            dem++;
        }
    }
}

int main(){
    int n, m, s, t;
    cin >> n >> m;    
    while(m--){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        sort(v[i].begin(),v[i].end());
    }
    tplt(n);
    int q; cin >> q;
    while(q--){
        int a, b; cin >> a >> b;
        if(check[a]==check[b]){
            cout<<"1\n";
        }
        else cout<<"-1\n";
    }

    
}
