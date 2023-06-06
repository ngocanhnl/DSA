#include<bits/stdc++.h>
using namespace std;
int visited[1000000];
vector<int> v[100000];
void DFS(int i){
    visited[i]=1;
    for(int x:v[i]){
        if(!visited[x]){
            DFS(x);
        }
    }
}


int main(){
    int n, m;
    cin >> n >> m ;
    cin.ignore();
    for(int i=1; i<=m; i++){
        int a,b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
        sort(v[a].begin(),v[a].end());
        sort(v[b].begin(),v[b].end());
    }
    int dem=0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            DFS(i);
            dem++;
        }
    }
    cout<<dem;
    

    
}
