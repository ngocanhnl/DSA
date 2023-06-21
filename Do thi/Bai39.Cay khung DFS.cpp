#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int d[1005], n, m, s;
bool visited[1005], co[1005];
void nhap(){
    cin >> n >> m >> s;
    for(int i=0; i<m; i++){
        int a, b; cin >> a >> b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        sort(ke[i].begin(),ke[i].end());
    }
}

void DFS(int u){
    visited[u] = true;
    for(auto it:ke[u]){
        if(!visited[it]){
            cout<<u<<"->"<<it<<endl;
            DFS(it);
        }
    }
}



int main(){
    nhap();
    DFS(s);
}
