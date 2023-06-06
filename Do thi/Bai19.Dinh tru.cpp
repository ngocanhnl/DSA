#include<bits/stdc++.h>
using namespace std;
bool visited[1010];
vector<int> v[1001];
int parent[1001];
int check[1010];
int dem = 1;
int n, m, s, t;
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

int tplt(){
    int dem=1;
    for(int i=1; i<=n;i++){
        if(!visited[i]){    
            DFS(i);
            dem++;
        }
    }
    return dem;
}

int main(){
    cin >> n >> m;    
    while(m--){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        sort(v[i].begin(),v[i].end());
    }
    int cc = tplt();
    int res = 0;
    for(int i=1; i<=n; i++){    
        memset(visited,false,sizeof(visited));
        visited[i]=true;
        if(cc < tplt()){
            res++;
        }
        
    }
    cout<<res;

    
}
