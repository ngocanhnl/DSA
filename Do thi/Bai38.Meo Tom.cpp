#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int d[1005], n, m, dem=0;;
bool visited[1005], co[1005];
void nhap(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> d[i];
    }
    for(int i=0; i<n-1; i++){
        int a, b; cin >> a >> b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
}

void DFS(int u, int gian){
    visited[u] = true;
    int child = 0;
    for(auto it:ke[u]){
        if(!visited[it]){
            child++;
            if(d[it]==1 && gian + 1 <= m){
                   DFS(it,gian+1);
            }
            else if(d[it]==0){
                   DFS(it,0);
            }
        }
    }
    if(child==0){
        dem++;
    }
}



int main(){
    nhap();
    DFS(1,d[1]);
    cout<<dem;
}
