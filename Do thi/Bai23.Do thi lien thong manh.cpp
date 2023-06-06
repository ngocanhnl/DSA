#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
int n, m;
void nhap(){
    cin >> n >> m;
    while(m--){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        
    }
    for(int i=1; i<=n; i++){
        sort(v[i].begin(),v[i].end());
    }
}

void DFS(int u){
    visited[u] = true;
    for(auto it:v[u]){
        if(!visited[it]){
            visited[it]=true;
            DFS(it);
        }
    }
    
}




int main(){
    nhap();
    for(int i=1; i<=n; i++){
        memset(visited,false,sizeof(visited));
        DFS(i);
        for(int i=1; i<=n;i++){
            if(!visited[i]){
                cout<<"0";
                return 0;
            }
        }
        
    }
    cout<<1;
}
