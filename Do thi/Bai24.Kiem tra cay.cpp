#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
int n, m;
void nhap(){
    cin >> n >> m;
    int tmp=m;
    while(tmp--){
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        sort(v[i].begin(),v[i].end());
    }
}

void DFS(int u){
    visited[u] = true;
    for(auto it:v[u]){
        if(!visited[it]){
            DFS(it);
        }
    }
    
}
bool check(){
    memset(visited,false,sizeof(visited));
    DFS(1);
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            return false;
        }
    }
    return true;
}



int main(){
    nhap();
    if(m!=n-1){
        cout<<"0";
        return 0;
    }
    if(check()){
        cout<<1;
    }
    else cout<<0;
    
}
